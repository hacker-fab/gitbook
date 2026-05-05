---
description: 2D Crystal Stacking Bot Submodule
---

# Central Control Software

{% hint style="info" %}
Make sure to implement all hardware components listed in the 2D Crystal Stacking Bot main page before proceeding to this one.
{% endhint %}

This doc explains how to set up the operating dashboard software for the current 2D stacking robots in production. It currently integrates the nanopositioner project, camera module, and carousel all together for the stacking process.&#x20;

The software is open sourced under this Github repository:

[https://github.com/hacker-fab/2D\_Crystal\_Stacking.git](https://github.com/hacker-fab/2D_Crystal_Stacking.git)

<figure><img src="../../../.gitbook/assets/image (435).png" alt=""><figcaption></figcaption></figure>

### Current Software Status&#x20;

* ✅ Nanopositioner Control Panel (Integrated and Validated)
  *   Select the required step size then click on corresponding axis that you want to move the stage to. &#x20;

      <figure><img src="../../../.gitbook/assets/image (436).png" alt="" width="375"><figcaption></figcaption></figure>
* ✅ Rotational Stage Control Panel (Integrated and Validated)
  *   Click on left or right button to rotate the stage or set the degree manually.

      <figure><img src="../../../.gitbook/assets/image (437).png" alt="" width="326"><figcaption></figcaption></figure>
* ✅ Vacuum Control Panel (Integrated and Validated)
  *   Turn on and off the vacuum for chip suction&#x20;

      <figure><img src="../../../.gitbook/assets/image (438).png" alt="" width="375"><figcaption></figcaption></figure>
* ✅ Heating Control Panel (Integrated and Validated)
  *   Set the required temperature and toggle Turn ON button for the stage to start heating.

      <figure><img src="../../../.gitbook/assets/image (439).png" alt="" width="325"><figcaption></figcaption></figure>
*   &#x20;✅ Video Tuning Panel (Integrated and Validated)

    * Different video feed settings for best viewing capabilities such as exposure rate and stauration.

    <figure><img src="../../../.gitbook/assets/image (440).png" alt="" width="375"><figcaption></figcaption></figure>
* Carousel Control Panel (Implemented, pending integration)
  *   Dial the slot that you want and toggle Feed chip button to transfer the corresponding chip to the operating stage.

      <figure><img src="../../../.gitbook/assets/image (441).png" alt="" width="326"><figcaption></figcaption></figure>
* ✅ Background Task Monitoring Panel (Implemented and Validated)
  *   Real time update command histories and hardware status for monitoring.<br>

      <figure><img src="../../../.gitbook/assets/image (442).png" alt="" width="375"><figcaption></figcaption></figure>

### Quick Start Guide

For fast installation, follow the readme instructions or below on installing the virtual environment and copy the environment file. With the correct environment installed, running the [main.py](http://main.py) file will start the dashboard on your machine’s localhost port according to your setting.



1. Setting up the .env environment file
   1. from the root directory copy the existing `.env.example` to `.env`
   2. `OMS_PORT` will be the only value you need to set in the `.env` file
   3. `.env` values are also need to be updated if you want:
      1. pylon camera instead of picam
      2. running software on a different port instead of port 8000
      3. special stream size/ FPS&#x20;
2. Setting up the `.venv` virtual environment&#x20;
   1. from the root directory call `python -m venv .venv`
   2. Activate the environment&#x20;
      * Windows (Command Prompt): `.venv\Scripts\activate`
      * Windows (PowerShell): `.\.venv\Scripts\Activate.ps1`
      * macOS/Linux (Bash/Zsh): `source .venv/bin/activate`
   3. Install necessary packages for the `.venv` by calling&#x20;
      * `pip install -r requirements.txt`&#x20;
3.  Start the software

    1. run `python main.py`
    2. open [http://localhost:8000](http://localhost:8000) from the browser on the machine that you are currently running the software of



### Software testing

**SSH Port Forwarding**&#x20;

{% hint style="info" %}
This only applies to setups where the central control software is hosted on a Raspberry Pi machine instead of local machine.
{% endhint %}

For users who is having a Raspberry Pi machine as the central master device running the central software without a monitor, please follow the steps from the Raspberry Pi official website for SSH Tunneling [https://www.raspberrypi.com/documentation/computers/remote-access.html](https://www.raspberrypi.com/documentation/computers/remote-access.html)

This will enable you to access the control dashboard wherever you want.

&#x20;

**Simulated Testing**

Central Control Software also supports UI testing without actual hardware connections. To enable this feature leave the `OMS_PORT` in your `.env` empty.

With this set up, you will be able to mimic the actual hardware feedback based on the virtural implementation of them.



**Production Testing Tip**

{% hint style="info" %}
After hardware disconnection, to reconnect them to the control software you will have to shutdown the program and restart for establishing the reconnection.
{% endhint %}

To start production testing, you will have to have all the hardware connected and follow the quick start guide for the software setup.

Use the Status + Command Logs for hardware status and recent commands log to debug any potential control issues.

<figure><img src="../../../.gitbook/assets/Screenshot 2026-04-24 at 6.36.01 AM.png" alt=""><figcaption></figcaption></figure>



**What To Expect**

Once hardware components are all connected and `OMS_PORT` is set, user should be able to directly control individual hardware in realtime. All feedbacks should be responsive. If encounter hardware device freezing try slowing down (ie avoid clicking the same button mutiple time in one second) or restart the software.

### How To Extend For Future Dashboards

{% hint style="info" %}
This section is intended for developers only. If you are only the end user, please ignore this section.
{% endhint %}

For adding new hardware device support, first inherit from `BaseDevice`, which provides:

* **Thread-safe state management** via `Lock()`
* **Universal power control** (`is_on`, `set_power()`, `get_power()`)
* **Status tracking** (`status_message`, `set_status()`, `get_status()`)
* **Abstract methods** enforced for all subclasses:
  * `get_device_status()` → Full device status for API responses
  * `get_device_type()` → Device identifier string

**Location:** `devices/base_device.py`



After inheriting from `BaseDevice`, the usual implementation sequence is:

1. Create `devices/<feature>.py` and initialize the device state inside the subclass.
2. Implement `get_device_type()` and `get_device_status()` so the API can identify and report the device.
3. Use `set_power()` and `set_status()` inside command handlers to keep UI state and device state aligned.
4. Add `<feature>/router.py` with `/api/<feature>` endpoints for status and control operations.
5. Register the router in `app/web.py` so the new feature is available at startup.
6. Add the dashboard card in `templates/index.html`, then wire status polling and actions in `static/app.js`.
7. Add or adjust `static/app.css` rules if the new widget needs a custom layout or responsive behavior.
8. Validate the new path by checking that status reads back correctly after each command.
