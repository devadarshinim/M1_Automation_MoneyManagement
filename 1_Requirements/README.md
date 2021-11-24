# Requirements
Capture all the requirements wrt system, module, interface, integration, testing, Functional and Non-functional such as user information, privacy, testing of all posible ways etc.,

Captures Basic Planning of the project through - Sample Flow chart attached

# Tools:
Vscode, Doxygen

# Introduction
A simple money management system which can able to calculate income and expenditures.

# Research

https://www.thebalance.com/top-8-free-personal-finance-software-choices-129361

# Defining Our System

A simple web app Which is used to calcuate the basic expences with accuracy and security. Maintain security with creation and usage of password at all stages with the accuracy of 100%

# SWOT:

Strengths - Accuracy and security
            Saves Time
            Automatic Calculations
            

Weaknesses - Single user and Single operation.

Opportunities - Complex operation using c
                Used in numerous fields

Threats - If password unknow then the process shouls be started from the first
          Other Similar Applications


# 4W's and 1'H
Who:
User who spends money a lot can able to calculate the income and expenditure can use it as they 

What:
Money Management system as used in our environment

When:
In banks when we need to withdraw or deposit money we donnot want to worry about the initial amount present int our account. This app checks the ammount and calulate with the options as of user and provides an output so that the user can carry on the expence accordingly.

Where:
In shopping carts, banking, etc,.

How:
If the correct password of user is known then he/she can able to calculate the expences from the initial ammount.

# Detail requirements

# High Level Requirements:
| ID            | Description      | Status                                                                                         |  
| ------------- | ---------------- |------------------------------------------------------------------------------------------------|
|HLR_01             | Security         |Only the person who knows the account password can able to access any process.                  |
|HLR_02             | Accuracy         |A person can able to subract or add any type of ammount with accuract.                          |

# Low level Requirements:
|ID            | Description            | Status                                                                                           |
|--------------|------------------------|--------------------------------------------------------------------------------------------------|
|HLR_01_LLR_01      | Deposit                | The deposit operation is performed once the user input password matches with user password so that other than the owner no one can acess the data|
|HLR_01_LLR_02      | Withdraw               | The withdraw operation is performed once the user input password matches with user password so that other than the owner no one can acess the data|

|ID            | Description            | Status                                                                                           |
|--------------|------------------------|--------------------------------------------------------------------------------------------------|
|HLR_02_LLR_01      | Deposit                | Even the initial value is 0 the user can add the ammount and update it.                          |
|HLR_02_LLR_02      | Withdraw               | It check the initial account and update it accordingly la.                                       | 
|HLR_02_LLR_0r      | withdraw               | If the initital amount is lesser than the deposite ammount then the calcuation stops with error message|
