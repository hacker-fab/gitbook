---
hidden: true
---

# Database SOP

## Accessing global website

On a browser, go to: [http://db.hackerfab.org](http://db.hackerfab.org)

Note: You may need to change browser settings to allow insecure content or manually change the URL from https to http. Sometimes certain browsers cause more problems than others, so we recommend trying a different browser if there are connection issues.

## Running the program locally

### Prerequisites

Install the required dependencies by running the following command (it’s highly recommended you work in a [virtual environment](https://docs.python.org/3/library/venv.html))

```
pip install requirements.txt
```

### Running the web application

Since we are using the Django web framework, running the program is a simple process.

First, we need to apply the database migrations to ensure that the database schema matches the current state of our models. To do this, run the following command:

```
python manage.py migrate
```

In the terminal, you should see migrations being printed out with a green OK next to each row indicating that the migration was successful.

Note: You do not need to (and should not) run the makemigrations command despite it being a usual step when using the Django framework. This is because we have certain rules in the migration files that are necessary to keep the current version of the database compatible with the old one. The most up-to-date migration files are stored on the remote repository so they should already be ready for you after pulling from the remote repository.

Next we can run the web server locally on port 8000 with the following command:

```
python manage.py runserver
```

To access the website that is running, on your web browser, visit the following page:

```
http://127.0.0.1:8000
```

### Fixing Migration Errors

A major source of merge issues originated from migration errors in the database when we changed table schemas. Common errors include “table/field not found” or “table/field already exists”. The best way to avoid these is to test code changes on the most recent version of the actual running database.

Download a copy of the sqlite3 database from the AWS instance and paste it into your code folder. If you’ve made code changes already, it’s likely you already have a “db.sqlite3” file within the folder. In that case, delete the existing file and rename the copy of the actual database to “db.sqlite3”. The system uses this file to run the server. Cross-reference the new “db.sqlite3” and your initial migration file “0001\_initial.py” to make sure that the initial setup of the table schemas is correct. If not, use the error messages to identify missing or duplicate models/fields. Base all future model changes on this initial migration.

Another migration issue we faced was the loss of existing data when renaming or altering tables and fields. We found that if we tried to rename fields and alter definitions in the same migration, the system would simply delete the old model and create a new one, which is bad because it deletes all existing data within the table. A workaround is to do renaming in one migration, then changing field definitions in another migration. This ensures that migration actions are limited to Rename and Alter (instead of Remove and Add/Create). Relevant Django documentation: [Migration operations](https://docs.djangoproject.com/en/5.1/ref/migration-operations/)

## User Actions and Flow:

The Hacker Fab database was built to streamline how users manage fabrication data, balancing functionality with simplicity. The system guides users through a clear and intuitive flow, starting from secure authentication all the way to advanced data exploration. Below is a detailed breakdown of each page’s purpose, how users interact with it, and the challenges we tackled during the development. The Hacker Fab database was built to make managing fabrication data simple yet powerful. We aimed to create a system that keeps complex data organized while remaining easy to use, so users can focus on their work without getting lost in the tools. The platform guides users through a smooth and intuitive process, starting with secure authentication using Google OAuth and leading all the way to advanced data exploration with customizable filters. Every aspect of the design was intentionally created to balance functionality and usability. Each page is deconstructed in the following sections, describing how users use it and the challenges of each.

**1. Login/Registration Page**

The **Login Page** provides secure access using Google Oauth. Users who are not yet registered are redirected to the **Registration Page**, where they create accounts via Oauth integration. The use of Oauth eliminates the need for manual passwords while ensuring security. Successful authentication redirects users to the **Dashboard Page**. The current design includes both Google Oauth and manual username/password inputs. Moving forward, the manual login option will be removed, and Oauth will be the sole method for authentication to simplify the process and enhance security. This update is planned for next semester.

![Screenshot 2024-12-16 at 9 12 15 PM](https://github.com/user-attachments/assets/a330b1ea-ebf0-4575-aaba-09d1b383473c) ![Screenshot 2024-12-16 at 9 12 26 PM](https://github.com/user-attachments/assets/70f3527a-9962-4762-b0be-17cdc40c878e) ![Screenshot 2024-12-16 at 9 12 33 PM](https://github.com/user-attachments/assets/f3d9b4cf-1b84-4b94-be38-392478bfcad5) ![Screenshot 2024-12-16 at 9 12 39 PM](https://github.com/user-attachments/assets/ee2f82d5-a5ce-40f3-a43b-d3f438911d20)

**2. Dashboard Page (My Chips Page)**

The **Dashboard Page** serves as the main hub where users can view, manage, and navigate through their chip entries. This page displays a table listing all chips created by the logged-in-user. Each chip entry includes a clickable chip number, which leads to the **Existing Chip Page(Chip Num Page)** for further details. Users can also create new chips by navigating to the **New Chip Page**.

![Screenshot 2024-12-16 at 10 14 16 PM](https://github.com/user-attachments/assets/6a9708a3-461b-4d9a-8f00-b33b1ffb26bf) ![Screenshot 2024-12-16 at 9 12 21 PM](https://github.com/user-attachments/assets/f95fb9ce-fc38-4058-9071-262438a2e9b7)

**3. Existing Chip Page(Chip Num Page)**

The **Existing Chip Page(Chip Num Page)** provides a detailed description of the selected chip, displaying all its associated processes and parameters. Users who own the chip can edit its details, while others are limited to a read-only view. The page includes collapsible sections for better organization and clarity.

![Screenshot 2024-12-16 at 9 13 09 PM](https://github.com/user-attachments/assets/577ca809-2e7b-4b6a-b512-d6ab6d2154ce) ![Screenshot 2024-12-16 at 9 13 13 PM](https://github.com/user-attachments/assets/3bbc0a8d-f868-4ff2-99c9-81fdbda7c50b)

**4. Central Chip Page**

The **Central Chip Page** expands visibility to all chips in the system, supporting collaboration between different users and institutions. Chips are displayed in a table format, similar to the Dashboard, with pagination, ensuring efficient performance when handling big datasets.

![Screenshot 2024-12-16 at 9 12 55 PM](https://github.com/user-attachments/assets/539fd630-7554-4842-9311-cf2da45f68ad)

**5. New Chip Page**

On the **New Chip Page**, users can create new chips by typing in the chip number and choosing the functions from a dropdown. Users begin by entering a unique chip number and selecting a process type from a dropdown menu. If a pre-defined chip profile, such as the NMOS process, is selected, the system automatically pre-fills the relevant parameters with standard values, streamlining the workflow for common fabrication processes. Alternatively, users can choose to create a completely custom profile, which directs them to a blank chip page where they can manually add process steps and parameters from scratch. This black setup provides full control over fabrication details. Once the chip entry is submitted, the chip is added to the **Dashboard Page**, where users can view and manage it alongside their existing chips.

![Screenshot 2024-12-16 at 9 13 31 PM](https://github.com/user-attachments/assets/5f45d431-fd96-4557-827c-62e79727aab9)

**6. Search Page**

The **Search Page** is designed to help users locate chips and processes using filters. Advanced search options allow users to group results by process type or chip number and filter by parameter ranges. Search results are displayed in a clean, horizontal table layout that improves readability and quick comparisons.

![Screenshot 2024-12-16 at 9 13 42 PM](https://github.com/user-attachments/assets/6886ebcd-cb1c-4454-80e5-83457f7de92e)

**7. Profile Page**

The **Profile Page** allows users to view and manage their account information. Users can update personal details such as their name and email, as well as their bio messages to ensure their credentials remain accurate and up-to-date. A unique feature of the page is the ability to upload a profile image by selecting a file. The uploaded image is displayed within a rectangular frame styled to resemble a chip being held, aligning with the overall theme of the fabrication process. For security and consistency, authentication details, including passwords, are managed externally through Google Oauth, so no manual password updates are needed within the system. The page is designed to be minimalistic and user-friendly, with clearly labeled fields and straightforward editing options. Changes made on the **Profile Page** are immediately reflected in the system, maintaining synchronization with user-related records.

![Screenshot 2024-12-16 at 9 13 48 PM](https://github.com/user-attachments/assets/9ac45c86-144b-4267-a612-0471b5c6e9a0)

**8. General Navigation**

Navigation is consistent and intuitive. The Hacker Fab logo links to the **Home(Dashboard) Page**, and users can access their Profile Page in the header via clicking on their name. This page allows users to update their credentials, including their name and email.

## Challenges and Problems:

Throughout the development of the Hacker Fab database, we encountered various challenges that required iterative improvements. These challenges ranged from technical errors to usability concerns, and addressing them was critical in shaping the final product. Below is the breakdown of the key challenges for each page and the solutions implemented.

### Oauth Integration Issues

To enable secure authentication, we implemented Google Oauth, which allows users to log in or register without manual password management. The integration process required updates across three areas:

**1. Google Cloud Settings**

In the Google Cloud Console, these were the steps taken:

* Created a new project
* Configured Oauth consent settings
* Generated Client ID and Client Secret
* Set the Authorized Redirect URIs to match both local development and production environments:
  * Local: http://127.0.0.1:8000/oauth/complete/google-oauth2/ & http://localhost:8000/oauth/complete/google-oauth2/
  * Production: http://db.hackerfab.org/oauth/complete/google-oauth2/

![Screenshot 2024-12-16 at 10 16 20 PM](https://github.com/user-attachments/assets/b500d94b-1686-4879-bedd-71ffb2287601) ![Screenshot 2024-12-16 at 10 16 30 PM](https://github.com/user-attachments/assets/e90aa462-a76d-459e-99a6-a3b8d7340446)

**2. Config.ini File for Secure Credentials**

To avoid hardcoding sensitive information, the Oauth credentials were stored securely in a config.ini file.

![Screenshot 2024-12-16 at 10 16 41 PM](https://github.com/user-attachments/assets/93b37cbf-eb92-4f5f-a927-c134ffe361b6)

**3. Django settings.py Changes**

The credentials were then loaded into settings.py using the ConfigParser library the social-auth-app-django library.

![Screenshot 2024-12-16 at 10 16 50 PM](https://github.com/user-attachments/assets/a4154a61-78ed-4ae1-921e-133ed475cdd3) ![Screenshot 2024-12-16 at 10 16 59 PM](https://github.com/user-attachments/assets/99c5219d-1a82-411d-a2ff-e7e611136870) ![Screenshot 2024-12-16 at 10 17 06 PM](https://github.com/user-attachments/assets/dcc13276-f4c4-4235-9cad-9e742421ecd6)

**4. HTML Updates**

![Screenshot 2024-12-16 at 10 17 14 PM](https://github.com/user-attachments/assets/23be373d-2cf5-418b-a19c-d8ce8aa2efb9)

**Minor Issue:**

![Screenshot 2024-12-16 at 10 17 24 PM](https://github.com/user-attachments/assets/aafd3dfc-01e7-4dc7-9f49-bbec15163140)

During local testing, this error occurred because the Oauth library dependencies were missing. This was quickly resolved by installing the required packages:

**% pip install social-auth-app-django**

**% pip install google-auth google-auth-oauthlib**

### SSL certificate handling: HTTP → HTTPS Conversion

One of the most critical challenges were enabling HTTPS for secure data transmission. This process involved:

**1. SSH Connection to the Server**

To configure HTTPS, access to the server was required. The private key file was first secured with appropriate permissions to ensure restricted access:

**% chmod 400 /Users/minjikim/Downloads/HackerFabDB.pem**

Using the private key, we connected to the AWS EC2 instance:

**% ssh -i /Users/minjikim/Downloads/HackerFabDB.pem ubuntu@ec2-18-117-195-169.us-east-2.compute.amazonaws.com (one command)**

Once connected, all further configurations for SSL were performed directly on the server.

**2. Installing Cerbot for SSL Certificates**

We used Cerbot to automate the process of obtaining and configuring SSL certificates with Let’s Encrypt:

**% sudo apt update**

**% sudo apt install certbot python3-certbot-nginx**

Configuring Ngnix to redirect HTTP to HTTPS and load the SSL certificate The Nginx configuration was updated to redirect HTTP to HTTPS and include SSL settings. Cerbot handled much of this automatically with the following command:

**% sudo certbot –nginx -d db.hackerfab.org**

**Minor Issue:** While the HTTPS conversion was successful, the CSS files were not loading correctly on the production site. This problem is likely due to the static file configurations not working properly with HTTPS, or absolute paths still pointing to HTTP. This will be one of the first things I will tackle next semester to ensure the static files load properly.

## Planned Improvements & Final Comment

The Hacker Fab database has made significant strides this semester, greatly improving usability and core functionality. While the current design delivers a functional and intuitive experience, some CSS styling elements, such as form alignment, button styling, and page responsiveness, are not yet fully complete. These refinements, along with improvements to static file handling, are planned for next semester to address remaining hurdles and ensure the platform evolves into an even more polished and seamless tool for its users.
