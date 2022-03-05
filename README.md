# BANK APP - OOP
**Introduction:**

My project implements a bank app for customers. It allows customers to 

•	Login (name and password)

•	View profile

•	Track transactions (date, location, amount) 

•	Set up savings plan with 2 options in terms of interest and calculate their loan period, monthly payment (all data such as interest, etc will be customers’ expectations)

*All information is stored on a database, which is a file called data.txt

*Use data.txt in case you want to run the app as it will ask for name and password.


**CLASS DESCRIPTIONS**

**Customer**

Customer has basic information (name, address, dob, job, password) and transactions. Methods allow setting and name those pieces of information. In addition, printInfo will print out information of the customer.

**Bank**

Bank has its own name, address, a list of customers and necessary functionalities (like calculating savings and loan). Methods allow adding customers and getting the customers list. They also calculate savings and loan which help customers setting up their plans.

**Plan savings **

It is an abstract class with the initial amount of money a, interest r, period n. If customers want to put money into savings, they will use it to calculate interest, total money, etc. Set_values(a,r,n) allows users to input needed value to calculate their inquiries.

•	Double_interest: The interest from previous periods will be added to the initial amount of money and double the interest.

•	Annuity: Every month, users will put an amount of money into their savings account. Based on given values, it will calculate the total money after a period.

**Loan**

It is a parent class using virtual with interest r, payment p and the amount of money a. If customers want to borrow some money from the bank, they will use it to calculate how long they will fully repay the loan or how much the monthly payment is. Setting functions allow users to input their expected values and then functions will return the results.

•	Payment: calculate the monthly payment based on given values and the period

•	Period: calculate how long it takes to fully repay the money (including interests)


