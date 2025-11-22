# Tube Furnace 6: Silver



<figure><img src="../../../.gitbook/assets/Screenshot 2025-09-27 123045.png" alt=""><figcaption></figcaption></figure>

### 1. Goals and operating parameters

The ideal goal for the Silver furnace would be to reach 1000 degrees C with around 500 Watts of power, and be able to maintain this temperature for long periods of time without failure. Additionally, this tube furnace should be able to utilize the PID controller successfully to maintain this temperature.

### 2. Major components

The tube of the furnace is a 2” diameter quartz class tube with 5mm thickness, wrapped in about 3 layers of ceramic wool and held together with metal zip ties. Wrapped around the glass tube is 24g double twisted kanthal wiring, held in place with refractory cement. Surrounding this is a tube of sheet metal held by sheet metal screws and two metal end caps with holes cut through to allow access to the tube and for the wiring to stick out. A stand and handle made out of sewer pipe brackets is included in the design, and attached to the stand is a bracket with a plastic wiring box to act as a space to attach the PID controller, PID relay, and fuse reset. The kanthal wiring that extends beyond the tube is folded in half lengthwise (thickness of 4 24g kanthal wires) and covered in a ceramic weave tube for insulation. The wiring used for the PID and associated devices are recycled wires from an old chandelier, coated in a rubber insulation. Heat resistant tape is used to protect the wires in places where needed. A thermocouple is attached to the PID controller and inserted in the furnace. The furnace is wired to an extension cord and plugged into a programmable circuit breaker to protect the main power grid.

### 3. Materials

Sheet metal, kanthal wire, refractory cement, ceramic wool, quartz glass tube, nuts and bolts, sewer pipe brackets, ceramic weave wire insulation, motor control, thermocouple, heat resistant tape, voltmeter, programmable circuit breaker, handle, PID controller, PID relay, plastic circuit box, metal bracket, rivets, metal zip ties, fuse reset, metal end caps

<br>

| Item                | Specifications                                                                                               |
| ------------------- | ------------------------------------------------------------------------------------------------------------ |
| Quartz Glass Tube   | 9.5” long, 2” diameter, 5 mm thickness                                                                       |
| Sheet Metal         | Folded into a tube of 8.5” length and 5” diameter                                                            |
| Kanthal Wire        | 24g, 20’+, wrapped into 20 loops around glass tube                                                           |
| Ceramic Wool        | 1” thick, cut to wrap 3x around the glass tube                                                               |
| Thermocouple        | 6” long, mount has less than 2” diameter                                                                     |
| Metal End Caps      | 5” diameter to fit around sheet metal tube, with a 2” circle cut in center to allow for access to glass tube |
| Sewer Pipe Brackets | Circle diameter of around 5”, adjusted using bolts to fit the furnace snugly                                 |

<br>

### 4. Construction

1\. Coat mid section of glass tube in refractory cement, score lines to allow for shrinkage during curing, let cure for several hours

2\. Measure kanthal wire using the desired number of loops around the tube, with some extra length, then double the total length. Fold in half and twist the entire wire tightly using a power drill and tension. Carefully wrap wire around the cemented area of the tube, holding firmly. Hold with rubber bands and cement on top, let cure.

3\. Wrap tube with wire in 3 layers of ceramic wool. Bend the twisted kanthal wiring in half to increase resistance and extend to fit where the hole sites in the casing would be. Use ceramic weave insulation and heat resistance tape. to prevent contact between wiring and the casing.&#x20;

4\. Bend sheet metal into a tube and secure together with screws or rivets. Drill holes to allow for wiring to come through the casing. Drill 2” holes through the end caps and secure to the tube furnace with sheet metal screws.

5\. Screw on stand, add bracket with holes to the stand and screw the plastic circuit box to the bracket. Pull insulated kanthal wires into the box and wire PID controller, relay, fuse reset, and thermocouple.

\
<br>

| ![](../../../.gitbook/assets/unknown.png)                                                                                                     | ![](<../../../.gitbook/assets/unknown (1).png>)                    |
| --------------------------------------------------------------------------------------------------------------------------------------------- | ------------------------------------------------------------------ |
| ![](<../../../.gitbook/assets/unknown (3).png>)                                                                                               | ![](<../../../.gitbook/assets/unknown (4).png>)                    |
| ![](<../../../.gitbook/assets/unknown (5).png>)Programmable circuit breaker to protect the power grid and voltmeter for thermocouple readings | ![](<../../../.gitbook/assets/unknown (6).png>)PID and Relay setup |

<br>

### 5. Testing and performance

* Hit the energy and temperature requirements
* Still functional after may test runs
* Failings with the PID controller, requires the use of the motor control to control the current and prevent the furnace wires from overheating, additionally requires the use of a lightbulb to kickstart the motor control into drawing power and heating using the PID is inconsistent due to the jumps in current.
* Despite this, when the current is controlled with the motor control, the PID controller works effectively in maintaining a specific heat in the furnace



### 6. Things to improve on

* Need to figure out circuit configuration to power furnace without use of light bulb
* Need to figure out how to control current without motor control (for simplicity)
* Need to figure out insulation problem for wires to prevent them from becoming too hot
