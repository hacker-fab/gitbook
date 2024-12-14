---
layout:
  title:
    visible: true
  description:
    visible: true
  tableOfContents:
    visible: true
  outline:
    visible: true
  pagination:
    visible: false
---

# Database SOP


Accessing global website
On a browser, go to:

	http://db.hackerfab.org

Note: You may need to change browser settings to allow insecure content or manually change the URL from https to http. Sometimes certain browsers cause more problems than others, so we recommend trying a different browser if there are connection issues.

Running the program locally (also will be updated in the primary README)
Prerequisites
Install the required dependencies by running the following command (it’s highly recommended you work in a virtual environment)

pip install requirements.txt

Running the web application
Since we are using the Django web framework, running the program is a simple process.

First, we need to apply the database migrations to ensure that the database schema matches the current state of our models. To do this, run the following command:

python manage.py migrate

In the terminal, you should see migrations being printed out with a green OK next to each row indicating that the migration was successful. 

Note: You do not need to (and should not) run the makemigrations command despite it being a usual step when using the Django framework. This is because we have certain rules in the migration files that are necessary to keep the current version of the database compatible with the old one. The most up-to-date migration files are stored on the remote repository so they should already be ready for you after pulling from the remote repository. 

Next we can run the web server locally on port 8000 with the following command:

python manage.py runserver

To access the website that is running, on your web browser, visit the following page:

http://127.0.0.1:8000

Fixing Migration Errors
A major source of merge issues originated from migration errors in the database when we changed table schemas. Common errors include “table/field not found” or “table/field already exists”. The best way to avoid these is to test code changes on the most recent version of the actual running database. 

Download a copy of the sqlite3 database from the AWS instance and paste it into your code folder. 
If you’ve made code changes already, it’s likely you already have a “db.sqlite3” file within the folder. In that case, delete the existing file and rename the copy of the actual database to “db.sqlite3”. The system uses this file to run the server. 
Cross-reference the new “db.sqlite3” and your initial migration file “0001_initial.py” to make sure that the initial setup of the table schemas is correct. If not, use the error messages to identify missing or duplicate models/fields.
Base all future model changes on this initial migration.

Another migration issue we faced was the loss of existing data when renaming or altering tables and fields. We found that if we tried to rename fields and alter definitions in the same migration, the system would simply delete the old model and create a new one, which is bad because it deletes all existing data within the table. A workaround is to do renaming in one migration, then changing field definitions in another migration. This ensures that migration actions are limited to Rename and Alter (instead of Remove and Add/Create).
Relevant Django documentation: Migration operations

User Actions and Flow(bullet points for now. Will add details later):
Login Page
Users use Google Oauth for logging in.
Successful login redirects users to the dashboard page
Unauthenticated users are given the option to register via the registration page
Registration Page
New users will be registering their account using Oauth
Successful registration redirects users to the dashboard page
Dashboard Page (My Chips Page)
Users can view a table displaying all chips they created and can edit
If they click on the chip number, it will direct them to the existing chip page, and show all the details about that specific chip
Central Chip Page
Users can view a table of every chip that has been created in the Hacker Fab system, including chips created by other people and other universities
If they click on the chip number, it will direct them to the existing chip page, and show all the details about that specific chip
Profile Page
Users can view and edit their credentials including their name, email, password, etc. 
Existing Chip Page(Chip Num Page)
Displays detailed information about the selected chip.
Users can edit the chip details only if they own that chip.
Users can view the chip details in a read-only format if it’s not their chip.
New Chip Page
Users create new chips by typing in the chip number and choosing the functions from a dropdown.
Once submitted, the chip is added to the Dashboard Page.
If they select a preexisting chip profile/function, it will take them to a chip page with defaults prefilled
If they select a new custom profile, it will take them to a blank chip page with buttons to add processes with no defaults
Search Page
Users search for chips using filters
Search results are displayed in a table similar to the Dashboard page.
General Navigation
When users click on their name in the header, it will direct them to the profile page.
When users click on the HackerFab logo image, it will direct them to the home(Dashboard) page.’


