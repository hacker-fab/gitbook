# Eric Dubberstein

Next week...



Weekly updates for 1/19:

On thursday after class, I met with the rest of the database team. We got the repo cloned on all of our machines and we outlined what we need to accomplish by the end of the week (1/19). Our task was to browse through the current working version of the website running locally on our machines and make a list (here in gitbook) about what could be improved as a new user that has not used the website before. My list is as follows:&#x20;

IDEAS FOR IMPROVMENTS:

On the homepage:&#x20;

1. change the name of the button "chip summary" to "See everyone's chips" or "All user's chips", etc. As a new user to the website I wasn't sure what "chip summary" was before I clicked on it.&#x20;



When I click "Input"

Then chose AluminumEtch from the dropdown menu and click submit,&#x20;

<figure><img src="../../.gitbook/assets/image (66).png" alt=""><figcaption></figcaption></figure>

<figure><img src="../../.gitbook/assets/image (67).png" alt=""><figcaption></figcaption></figure>

I get the error as shown in the screenshot above. This is likely an edge case because I haven't added any chips yet.&#x20;



When I instead choose create a new chip, I am directed to this page:

<figure><img src="../../.gitbook/assets/image (68).png" alt=""><figcaption></figcaption></figure>

This page also is unintuitive as a new user. Why are there two submit buttons? My understanding is that you type in the number, hit submit, fill in the rest of the details, and hit submit again? All for the same chip? This is unintuitive and the first and second parts should be separate. Finally, when you hit the final submit button, there is no clear feedback that the data has been submited. The text is just cleared. There needs to be some feedback to the user (even just plain text that says "data submitted") when the form is submitted.&#x20;

There should also be a clear back button to go back to the main menu.&#x20;



Next, I went back to the homepage and clicked on search.&#x20;

<figure><img src="../../.gitbook/assets/image (69).png" alt=""><figcaption></figcaption></figure>

Here we have the same issue where we have two submit buttons after submitting the first form. It's not clear to the user what is supposed to be done. The first menu should be hidden after the first submit button is clicked.&#x20;



Next, I typed in a search chip number and clicked submit. I am then brought to an error page. This is clearly an issue that needs to be addressed.&#x20;

&#x20;![](<../../.gitbook/assets/image (71).png>)



It is also generally unclear what we are searching for when using this search tool.&#x20;



The chip summary page does appear to work as intended though, so that's good. ![](<../../.gitbook/assets/image (72).png>)



My plans for next week are TBD and will be decided after class on tuesday. It will likely include fixing a subset of the bugs I identified above.&#x20;



