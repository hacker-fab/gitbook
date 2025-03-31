---
description: Weekly Update Page :)
---

# Jessica Wen

## 2025-03-18 Update

Finalised the DB structure with DBML:

<figure><img src="../../.gitbook/assets/HackerFab Process Database Structure (2).png" alt=""><figcaption><p>Database schema</p></figcaption></figure>

```sql
CREATE TABLE `affiliations` (
  `id` integer PRIMARY KEY NOT NULL,
  `name` varchar(255) NOT NULL,
  `machines` integer,
  `created_at` timestamp NOT NULL
);

CREATE TABLE `users` (
  `id` integer PRIMARY KEY NOT NULL,
  `username` varchar(255) UNIQUE NOT NULL,
  `affiliation_id` integer,
  `created_at` timestamp NOT NULL
);

CREATE TABLE `chips` (
  `id` integer PRIMARY KEY NOT NULL,
  `owner_id` integer,
  `top_layer` varchar(255),
  `created_at` timestamp NOT NULL
);

CREATE TABLE `machines` (
  `id` integer PRIMARY KEY NOT NULL,
  `name` varchar(255) NOT NULL,
  `status` varchar(255) NOT NULL,
  `created_at` timestamp NOT NULL,
  `affiliation` integer
);

CREATE TABLE `processes` (
  `id` integer PRIMARY KEY NOT NULL,
  `name` varchar(255) NOT NULL,
  `description` text,
  `created_at` timestamp NOT NULL
);

CREATE TABLE `steps` (
  `id` integer PRIMARY KEY NOT NULL,
  `name` varchar(255) NOT NULL,
  `machine_id` integer,
  `involved_processes` integer,
  `status` varchar(255) NOT NULL,
  `parameter` integer,
  `created_at` timestamp NOT NULL
);

CREATE TABLE `parameter_definitions` (
  `id` integer PRIMARY KEY NOT NULL,
  `step_id` integer,
  `name` varchar(255) NOT NULL,
  `notes` varchar(255),
  `unit` varchar(255),
  `data_type` enum COMMENT 'float, integer, string, boolean',
  `min_value` float,
  `max_value` float,
  `required` boolean NOT NULL,
  `default_value` varchar(255)
);

CREATE TABLE `parameter_values` (
  `id` integer PRIMARY KEY NOT NULL,
  `parameter_id` integer,
  `value` varchar(255)
);

CREATE TABLE `runs` (
  `id` integer PRIMARY KEY NOT NULL,
  `chip_id` integer,
  `user_id` integer NOT NULL,
  `step_id` integer NOT NULL,
  `notes` text,
  `status` varchar(255) NOT NULL,
  `characterisation_data` json,
  `created_at` timestamp NOT NULL,
  `completed_at` timestamp
);

ALTER TABLE `users` COMMENT = 'Core user information';

ALTER TABLE `chips` COMMENT = 'Physical chips being processed';

ALTER TABLE `machines` COMMENT = 'Processing equipment';

ALTER TABLE `processes` COMMENT = 'High-level process categories';

ALTER TABLE `steps` COMMENT = 'Specific manufacturing steps';

ALTER TABLE `parameter_definitions` COMMENT = 'Defines available parameters for each process';

ALTER TABLE `parameter_values` COMMENT = 'Actual parameter values used in runs';

ALTER TABLE `runs` COMMENT = 'Process execution records';

ALTER TABLE `users` ADD FOREIGN KEY (`affiliation_id`) REFERENCES `affiliations` (`id`);

ALTER TABLE `chips` ADD FOREIGN KEY (`owner_id`) REFERENCES `users` (`id`);

ALTER TABLE `machines` ADD FOREIGN KEY (`affiliation`) REFERENCES `affiliations` (`machines`);

ALTER TABLE `steps` ADD FOREIGN KEY (`machine_id`) REFERENCES `machines` (`id`);

CREATE TABLE `processes_steps` (
  `processes_id` integer,
  `steps_involved_processes` integer,
  PRIMARY KEY (`processes_id`, `steps_involved_processes`)
);

ALTER TABLE `processes_steps` ADD FOREIGN KEY (`processes_id`) REFERENCES `processes` (`id`);

ALTER TABLE `processes_steps` ADD FOREIGN KEY (`steps_involved_processes`) REFERENCES `steps` (`involved_processes`);


ALTER TABLE `parameter_definitions` ADD FOREIGN KEY (`step_id`) REFERENCES `steps` (`parameter`);

ALTER TABLE `parameter_values` ADD FOREIGN KEY (`parameter_id`) REFERENCES `parameter_definitions` (`id`);

CREATE TABLE `chips_runs` (
  `chips_id` integer,
  `runs_chip_id` integer,
  PRIMARY KEY (`chips_id`, `runs_chip_id`)
);

ALTER TABLE `chips_runs` ADD FOREIGN KEY (`chips_id`) REFERENCES `chips` (`id`);

ALTER TABLE `chips_runs` ADD FOREIGN KEY (`runs_chip_id`) REFERENCES `runs` (`chip_id`);


ALTER TABLE `runs` ADD FOREIGN KEY (`user_id`) REFERENCES `users` (`id`);

ALTER TABLE `runs` ADD FOREIGN KEY (`step_id`) REFERENCES `steps` (`id`);
```

```
dbml
// DBML docs: https://dbml.dbdiagram.io/docs

Project HackerFabProcesses {
  database_type: 'MySQL'
  Note: 'Database structure for HackerFab process documentation'
}

Table affiliations {
  id integer [primary key, not null]
  name varchar [not null]
  machines integer
  created_at timestamp [not null]
}

Table users {
  id integer [primary key, not null]
  username varchar [not null, unique]
  affiliation_id integer [ref: > affiliations.id]
  created_at timestamp [not null]
  Note: 'Core user information'
}

Table chips {
  id integer [primary key, not null]
  owner_id integer [ref: > users.id]
  top_layer varchar
  created_at timestamp [not null]
  Note: 'Physical chips being processed'
}

Table machines {
  id integer [primary key, not null]
  name varchar [not null]
  status varchar [not null]
  created_at timestamp [not null]
  affiliation integer [ref: > affiliations.machines]
  Note: 'Processing equipment'
}

Table processes {
  id integer [primary key, not null]
  name varchar [not null]
  description text
  created_at timestamp [not null]
  Note: 'High-level process categories'
}

Table steps {
  id integer [primary key, not null]
  name varchar [not null]
  machine_id integer [ref: > machines.id]
  involved_processes integer [ref: <> processes.id]
  status varchar [not null]
  parameter integer
  created_at timestamp [not null]
  Note: 'Specific manufacturing steps'
}

Table parameter_definitions {
  id integer [primary key, not null]
  step_id integer [ref: > steps.parameter]
  name varchar [not null]
  notes varchar
  unit varchar
  data_type enum [note: 'float, integer, string, boolean']
  min_value float [null]
  max_value float [null]
  required boolean [not null]
  default_value varchar [null]
  Note: 'Defines available parameters for each process'
}

Table parameter_values {
  id integer [primary key, not null]
  parameter_id integer [ref: > parameter_definitions.id]
  value varchar [null]
  Note: 'Actual parameter values used in runs'
}

Table runs {
  id integer [primary key, not null]
  chip_id integer [ref: <> chips.id]
  user_id integer [not null, ref: > users.id]
  step_id integer [not null, ref: > steps.id]
  notes text
  status varchar [not null]
  characterisation_data json
  created_at timestamp [not null]
  completed_at timestamp
  Note: 'Process execution records'
}
```

Other thoughts:

* I'm not sure what the best data types are for all the different columns - will need to speak with Ridge/Akshunna
* I removed the login credentials table - that's not my area of expertise
* I haven't created the Machines page on Figma
* Maybe it's time to start updating the website to match these updates? I think I'll need to sync with Ridge again to see what's been changed/what's in progress.
* Next step:
  * Front end without worrying about the back end :)

## 2025-02-18 Update

Worked on [Figma](https://www.figma.com/design/2xo82x5s8gr8mwEhQCdJ0B/hackerfab-website-\(Copy\)?node-id=3-56\&t=ELuYPUsuZu1RlQ5Q-1) this week.

Updated dashboard design: side menu has a button to take you to all chips, processes, and machines. It also has a list of draft processes/steps. Table of draft processes/steps has been added because people might have processes that they want to use for their own convenience but aren't likely to be useful more widely.

<figure><img src="../../.gitbook/assets/image (128).png" alt=""><figcaption><p>User Dashboard</p></figcaption></figure>

Clicking the 'Processes' button takes you to the Processes and Steps library: would ideally like another page to detail each step/process, but for now it is sufficient to keep it as a list.

<figure><img src="../../.gitbook/assets/image (1) (3) (1).png" alt=""><figcaption><p>Processes and Steps Library</p></figcaption></figure>

'Create New Step' takes you to a page where you can create a new step with different parameters. These new steps would ideally be approved by an admin before it gets added to the list.

There should be some control over the types of data that can be entered for the different type of parameters; if a cell is empty, then it is empty; if it has a line through it, then that column is not a valid property of that parameter. "Name" is always filled out, either with a manually entered name (in black) or it is copied over from "Parameter type" (in purple).

<figure><img src="../../.gitbook/assets/image (121).png" alt=""><figcaption><p>Create New Step page</p></figcaption></figure>

'Create New Process' takes you to the Create New Process page, where you can build a new process from other previously-created processes or steps. The "Skippable?" toggle would allow for the user to skip that section of the process depending on the run. Defaults can be edited again on this page, but will be specific to the New Process. Again, these new processes would ideally be approved by an admin before it gets added to the list.

<figure><img src="../../.gitbook/assets/image (125).png" alt=""><figcaption><p>Create New Process page</p></figcaption></figure>

I think I forgot to request a review for my previous updates, so I've written them up to the best of my ability below.



> Good work! I am curious to see if we can make something simpler in the "new step" category, since it does not have to be a table with crossed out columns :)&#x20;
>
> Other than that, I think I get the idea overall, and it does make sense to have all these steps visible on the left hand side. I think the insight u put in shows thru, with the "In Development" marker, really good specific details. I wonder if it's a dropdown or a status selection.&#x20;
>
> Overall nice to see this progressing, let's discuss this week in class. Also let me know if you want to have a demo, I mentioned this to Ridge as well but either of you can reach out to me whenever you would like to demo, we can have you up there right before lecture and I think the class would find your work to be very cool!

## 2025-02-11 Update

Database structure version 2: after getting feedback from TAs and implementing the structure for processes. Got feedback on the naming - process > step and umbrella\_process > process in v3.

<figure><img src="../../.gitbook/assets/HackerFab Process Database Structure (1).png" alt=""><figcaption><p>Database structure and entity-relationship diagram v2</p></figcaption></figure>

Feedback from TAs:

* **Jay Kunselman** (Sputtering, any chemical processes like deposition or cmos process)
  * Fabublox might be overspecific
    * Plasma etcher/chamber sputtering might be the same
    * We can create our own custom blox on Fabublox
    * Ask if we can get CSV files
* **Cesely** (cmos process specifically, should also be knowledgeable on most chemical processes)
  * Add batching feature to every run
  * Al etch
    * Etch depth doesn't need to be input - can be calculated
    * Make pictures more accessible and allow uploading multiple pics
    * PR peeling and Al peeling can be demonstrated through picture
    * In the future be able to batch
  * Al evaporation
    * Make deposition rate not required - specify that it's the max observed deposition rate
    * Pressure before should be required, not after
    * QCM input parameter - during test rather than characterisation
    * Multiple chips in evap run - batching for quality control
    * Take out T as a required parameter
    * Current setting should be 45 A default
  * Diffusion
    * Mins/hours not seconds
    * Batch
    * Chemicals: B154 - boron; P504 - phosphorus, nothing (drive-in diffusion, oxide growth - estimate/calculate when no glass), spin-on glass
    * Picture (spin-on glass has different colours for film depths)
  * Glass deposition
    * Cleaning is optional - could use plasma clean
    * Number of drops is optional - can remove
    * Keep: prebake but make skippable (700B, P504 only, not B154); glass type; humidity; speed; duration
    * Bake - diffusion time and diffusion temperature; hot plate or tube
    * Layer thickness on back - calculate (might characterise and input in the future)
    * Cracking is important - will have particles
  * Cleaning
    * Acetone + IPA
    * Chemicals, what machine was used
    * Plasma clean
    * RCA clean - if the sputterer works, then we don't need this
  * Spin coating
    * Prespin vs not; HMDS
    * Photoresist - bake
  * Patterning
    * Underlying material - see history, should auto-populate/select from history
    * Cleaning - be its own step
    * HMDS - optional -> yes/no then include the parameters
    * Remove pre-bake - only for acetone + IPA cleaning step
    * Exposure pattern etc. downwards move to photolithography
    * Patterning quality etc - remove/move to characterisation&#x20;
  * HF oxide etch
    * Calculate HF etch depth from rate and duration (some literature has this) -> should be expected depth, then in the future compare to measured depth
    * Agitation methods as a parameter (stirrer, etc.)
  * Plasma etch
    * important for NMOS - check parameters with Jay
    * Plasma clean; gas 1 type, gas 1 flow, gas 2 type, gas 2 flow, etc.
    * Estimate depth etc.
  * Remove characterisation steps - separate; for now use binary worked/not worked?
  * Chip creation
    * P-type, n-type, undoped
    * remove resistivity/sheet resistance
  * Ways to auto-upload pictures to the database?
  * KOH - not used/useful
    * flag for in-development
  * Nickel plating
    * Surface treatment
    * Open notes for now
    * Bath 1, bath 2 - duration, composition, T, maybe other things
    * Dry in between/other treatments
  * Electroless plating
    * Bath composition/type - NickelX
    * T
    * Duration (auto-load)
    * Agitation - none, stir bar, sonicator
    * Surfactant - yes/no, type
    * Bath volume (not constant)
* **Jessica Wu** and Cal (thermal evaporation of aluminium)
  * Bake - 60 seconds default
* **Joel Gonzalez** (lithostepper)
  * Type of photoresist
    * AZP4210, CSER62?
    * add new photoresists and come up as an option
    * HMDS - generalised and optional
  * Exposure duration
    * Give the dose in the future
    * Include the developer that's used
      * AZ400K now, diluted with DI water 3:1
      * Option for dilution
    * Idea from FOM (facility online manager) for nanofab users:
      * Have it mobile-friendly
      * Booking slots on a calendar
* **Vishwesh** (ALD)
  * Parameters:
    * Gas flow rate, pressure in chamber, T of both precursors, T of delivery line -> fixed during run
    * T of substrate holder
    * Pulse & purge time for each precursor -> don't change during the run
    * Number of cycles
    * Indium to tin ratio (ITO) - don't really use anything else. Maybe plasma -> bar?
  * Unlikely to change
    * Deposition rate and thickness -> can calculate after, measure deposition rate during the process?
* **Anoushka** (DIY Tube Furnace)
  * Not much feedback

## 2025-02-04 Update

Database structure version 1: didn't implement process structure yet

<figure><img src="../../.gitbook/assets/HackerFab Process Database Structure.png" alt=""><figcaption><p>Database structure and entity-relationship diagram v1</p></figcaption></figure>

## 2025-01-28 Update

Created this semester's [Project Proposal](https://docs.google.com/document/d/1ag1s2cdYsxGmIakAWwI4smvRCt4Vus9plwWXXB32gXw/edit?usp=sharing) and plan for improving the process database. Summary of the key deliverables by week:

1. Database schema and data model documentation
2. Revised and approved design documentation
3. UI/UX design documents and wireframes
4. Working frontend prototype
5. Working backend prototype
6. Integrated system with core features
7. Advanced features implementation
8. Complete documentation package
9. Test reports and security audit results
10. Deployed system with trained users
