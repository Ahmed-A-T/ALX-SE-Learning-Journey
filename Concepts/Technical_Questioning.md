# Technical Questioning

Being a software engineer means constant learning and questioning. Whether you’re a newbie developer or an experienced one, you are bound to find yourself banging your head against a wall, trying to figure out why the program you just wrote is not working the way you want.

To become a better developer, there are **two essential skills you need**:

-   **Find answers to your questions**: Manual pages and documentation usually contain apt explanations. posting a question without doing your homework is disrespectful to the community, and other developers will instantly see whether you really need their help or are just fishing for somebody to do the heavy lifting for you;
-   **Ask good technical questions**: The better you express your inquiry to others, the more effective they will respond to you.

### How to ask good technical questions

-   **Sum up your question in a title**: this will act as a heading for your question.
-   **Provide context**: this helps people understand your question better because they’ll know what situation you’re dealing with and any parameters that might affect how they answer. It would also help to mention the project and task number that you need assistance with.
-   **Provide code sample**: include a minimal reproducible example if your question depends on code. It should be minimal and have no irrelevant bits of code. Only show code that directly affects the example’s completion and the issue at hand.
-   **Avoid using screenshots**: typing the question builds your confidence to explain yourself in text, a very important soft-skill
-   **Share what you’ve already tried**: Your last attempt may be one tiny step away from fixing the problem. Without listing what you’ve tried, people will have to debug the problem from the very start.
-   **Format, Lint, and Document Your Code**: No one wants to read code that is all on the same line with bad indentation, variable naming inconsistencies, or bad style in general. Follow popular conventions if possible. Document your code. When sending code in slack, format it to appear as code.
-   **Grammar-Check Your Question**: questions with grammatical errors are hard to decipher. This makes it hard to read and limits the number of people that can help you.
-   **Keep track of your question**: Once you ask a question and you get an answer, don’t just desert the whole thing. Don’t just ghost the people that are trying to help you. Provide feedback. Tell them what worked, what didn’t work, and why. When your question has been answered, edit the original message and add: ✅ **Solved**
-   **Be humble**: you won’t always get cheerful, welcoming, or happy responses. People have lives in which they could be facing problems. If you push people too much, they may start to ignore you or delete their responses altogether. Respect people’s privacy, and give them space.

### Why you should ask and answer technical questions

**You learn how to ask questions**: A well-crafted question that ignites a helpful discussion and uncovers brilliant answers is often rated as highly as the best-given answer.

**You will gain a better understanding of the problem**: when you pose a question, you will be asked to think and explain your reasoning. As a result, you will examine and assess your issue while asking questions, which may lead to you discovering the solution.

**You learn by answering questions**: Explaining something that you already know to others makes your knowledge stronger and often uncovers new knowledge. When you write an answer to a question, you try to make it as clear and comprehensive as possible. Because of this attention to detail, you will often get back to something you did not pay initial attention to, totally forgot, or never knew in the first place.

## Technical questions samples

### Example 1: Python Script Not Printing Output

**Title:** Why is my Python script not printing any output?

**Message:** Hey @cohortxmentor, I’m working on a project to automate data entry from an Excel file into a database (Project XYZ, Task #45). I’m using Python to read the Excel file and print each row to the console, but the script runs without errors and doesn’t print anything. Can someone help me figure out why?

**Code:** “\`python import pandas as pd

def read_excel(file_path): df = pd.read_excel(file_path) for index, row in df.iterrows(): print(row)

file_path = ‘data.xlsx’ read_excel(file\_path) ”\`

**What I’ve Tried:** - I checked that the file ‘data.xlsx’ exists in the same directory as the script. - I confirmed that the file is not empty and contains data. - I added print statements before and after the `read_excel` function call to ensure the script is running.

I appreciate any guidance or suggestions. Thanks!

___

### Example 2: JavaScript Function Returning Undefined

**Title:** Why is my JavaScript function returning undefined?

**Message:** Hello @cohortxmentor, I’m building a web app that calculates the total price of items in a shopping cart (Project ABC, Task #10). I wrote a function to sum the prices, but it keeps returning `undefined`. Any ideas on what might be wrong?

**Code:** “\`javascript function calculateTotal(cart) { let total = 0; for (let i = 0; i < cart.length; i++) { total += cart\[i\].price; } return total; }

let cart = \[ { item: ‘Apple’, price: 1.0 }, { item: ‘Banana’, price: 0.5 } \];

console.log(calculateTotal(cart));”\`

**What I’ve Tried:** - Verified that the `cart` array is correctly defined and contains objects with `item` and `price` properties. - Added `console.log` statements inside the loop to check the values being summed.

Thanks in advance for your help!

___

### Example 3: SQL Query Not Returning Expected Results

**Title:** Why is my SQL query not returning the expected results?

**Message:** Hi @cohortxmentor, I’m working on a task to fetch user data based on their last login date (Project DEF, Task #20). My query should return users who logged in within the last 30 days, but it seems to return all users. Can someone point out what I’m doing wrong?

**Code:** `SELECT user_id, username, last_login FROM users WHERE last_login >= DATE_SUB(CURDATE(), INTERVAL 30 DAY);`

**What I’ve Tried:** - Checked that the `last_login` column is in `DATE` format. - Ran `SELECT CURDATE()` to confirm the current date is correct. - Executed the query with different date intervals to test the logic.

Any insights would be greatly appreciated. Thanks!