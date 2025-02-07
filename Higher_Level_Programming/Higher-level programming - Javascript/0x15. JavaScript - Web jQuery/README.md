# 0x15. JavaScript - Web jQuery

Front-endJavaScript

-   Weight: 1
-   Project over - took place from May 29, 2024 7:00 AM to May 30, 2024 7:00 AM
-   Manual QA review was done on May 29, 2024 9:57 PM

#### In a nutshell…

-   **Manual QA review:** 86.0/86 mandatory & 40.0/40 optional
-   **Altogether:**  **200.0%**
    -   Mandatory: 100.0%
    -   Optional: 100.0%
    -   Calculation:  100.0% + (100.0% \* 100.0%)  == **200.0%**

**Overall comment:**

good job!

### Concepts

_For this project, we expect you to look at these concepts:_

-   [JavaScript in the browser](https://intranet.alxswe.com/concepts/3)
-   [Dealing with data statically versus dynamically](https://intranet.alxswe.com/concepts/35)

![](Project%200x15.%20JavaScript%20-%20Web%20jQuery%20%20Cairo%20Intranet/4724718.jpg)

## Resources

**Read or watch**:

-   [What is JavaScript?](https://intranet.alxswe.com/rltoken/ZND-abSHQgw_ANSwvBgWig "What is JavaScript?")
-   [Selector](https://intranet.alxswe.com/rltoken/wsnVUxEcAzzlCx6ES1qc7g "Selector")
-   [Get and set content](https://intranet.alxswe.com/rltoken/rwtc96sn2_LHToBAd0MIhQ "Get and set content")
-   [Manipulate CSS classes](https://intranet.alxswe.com/rltoken/IcM5kKVzssU0ibdUo-2gKQ "Manipulate CSS classes")
-   [Manipulate DOM elements](https://intranet.alxswe.com/rltoken/ve8UKsZLVw2t27PtWscZfQ "Manipulate DOM elements")
-   [API](https://intranet.alxswe.com/rltoken/vKc7XmiHG7HIh3N0Kl_VQw "API")
-   [Introduction](https://intranet.alxswe.com/rltoken/QiUwuS_9TXE49D5IVL-ocg "Introduction")
-   [GET & POST request](https://intranet.alxswe.com/rltoken/Mbe7uoy0iMAfTVs2Tn4Pzg "GET & POST request")
-   [JQuery Ajax Tutorial #1 - Using AJAX & API’s](https://intranet.alxswe.com/rltoken/gMwyXisSLu-kZicmGA0-LQ "JQuery Ajax Tutorial #1 - Using AJAX & API's")
-   [What went wrong? Troubleshooting JavaScript](https://intranet.alxswe.com/rltoken/WqzbgIOUkKvFXYKo5NiKxA "What went wrong? Troubleshooting JavaScript")
-   [JQuery](https://intranet.alxswe.com/rltoken/HnjBq6jf84S9S-C15Qi0vw "JQuery")
-   [JQuery API](https://intranet.alxswe.com/rltoken/jvibhq-8VEdQHNUWKTCI7w "JQuery API")
-   [JQuery Ajax](https://intranet.alxswe.com/rltoken/rBZyrXxuRuISDfPBzO9Y7Q "JQuery Ajax")

## Learning Objectives

At the end of this project, you are expected to be able to [explain to anyone](https://intranet.alxswe.com/rltoken/uOCIGjC7u4MtYfDwCwODTA "explain to anyone"), **without the help of Google**:

### General

-   Why JQuery make front-end programming so easy (don’t forget to tweet today, with the hashtag #ilovejquery :))
-   How to select HTML elements in JavaScript
-   How to select HTML elements with JQuery
-   What are differences between `ID`, `class` and `tag name` selectors
-   How to modify an HTML element style
-   How to get and update an HTML element content
-   How to modify the DOM
-   How to make a `GET` request with JQuery Ajax
-   How to make a `POST` request with JQuery Ajax
-   How to listen/bind to DOM events

## \- How to listen/bind to user events

### Copyright - Plagiarism

-   You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.
-   You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.
-   You are not allowed to publish any content of this project.
-   Any form of plagiarism is strictly forbidden and will result in removal from the program.

## Requirements

### General

-   Allowed editors: `vi`, `vim`, `emacs`
-   All your files will be interpreted on Chrome (version 57.0)
-   All your files should end with a new line
-   A `README.md` file, at the root of the folder of the project, is mandatory
-   Your code should be `semistandard` compliant with the flag `--global $`: `semistandard *.js --global $`
-   You must use JQuery version 3.x
-   You are not allowed to use `var`
-   HTML should not reload for each action: DOM manipulation, update values, fetch data…

## More Info

### Import JQuery

```
&lt;head&gt;
    &lt;script src="https://code.jquery.com/jquery-3.2.1.min.js"&gt;&lt;/script&gt;
&lt;/head&gt;
```

![](Project%200x15.%20JavaScript%20-%20Web%20jQuery%20%20Cairo%20Intranet/1f1ihd.jpg)

### Manual QA Review

**It is your responsibility to request a review for this project from a peer before the project’s deadline. If no peers have been reviewed, you should request a review from a TA or staff member.**

### Quiz questions

**Great!** You've completed the quiz successfully! Keep going! (Show quiz)

#### Question #0

In the following code snippet, does the selector called `('section.my_header')` access the HTML tag `<header>`:

(using `document.querySelector` or `$(...)`)?

```
&lt;!DOCTYPE html&gt;
&lt;html lang="en"&gt;
  &lt;head&gt;
    &lt;title&gt;Holberton School&lt;/title&gt;
    &lt;link rel="stylesheet" href="styles/global.css" /&gt;
  &lt;/head&gt;
  &lt;body&gt;
    &lt;header class="my_header"&gt; 
      First HTML page
    &lt;/header&gt;
    &lt;section&gt;
      &lt;img src="logo.jpg" alt="" /&gt;
      &lt;br /&gt;
      &lt;ul&gt;
        &lt;li&gt;Home&lt;/li&gt;
        &lt;li&gt;Admission &lt;span class="btn"&gt;apply&lt;/span&gt;&lt;/li&gt;
        &lt;li&gt;Login&lt;/li&gt;
      &lt;/ul&gt;
    &lt;/section&gt;
    &lt;footer&gt;
      Holberton School - 2017
    &lt;/footer&gt;
  &lt;/body&gt;
&lt;/html&gt;
```

-   No
    
-   Yes
    

#### Question #1

In the following code snippet, does the selector called `('header.my_header')` access the HTML tag `<header>`:

(using `document.querySelector` or `$(...)`)?

```
&lt;!DOCTYPE html&gt;
&lt;html lang="en"&gt;
  &lt;head&gt;
    &lt;title&gt;Holberton School&lt;/title&gt;
    &lt;link rel="stylesheet" href="styles/global.css" /&gt;
  &lt;/head&gt;
  &lt;body&gt;
    &lt;header class="my_header"&gt; 
      First HTML page
    &lt;/header&gt;
    &lt;section&gt;
      &lt;img src="logo.jpg" alt="" /&gt;
      &lt;br /&gt;
      &lt;ul&gt;
        &lt;li&gt;Home&lt;/li&gt;
        &lt;li&gt;Admission &lt;span class="btn"&gt;apply&lt;/span&gt;&lt;/li&gt;
        &lt;li&gt;Login&lt;/li&gt;
      &lt;/ul&gt;
    &lt;/section&gt;
    &lt;footer&gt;
      Holberton School - 2017
    &lt;/footer&gt;
  &lt;/body&gt;
&lt;/html&gt;
```

-   No
    
-   Yes
    

#### Question #2

In the following code snippet, does the selector called `('#my_header')` access the HTML tag `<header>`:

(using `document.querySelector` or `$(...)`)?

```
&lt;!DOCTYPE html&gt;
&lt;html lang="en"&gt;
  &lt;head&gt;
    &lt;title&gt;Holberton School&lt;/title&gt;
    &lt;link rel="stylesheet" href="styles/global.css" /&gt;
  &lt;/head&gt;
  &lt;body&gt;
    &lt;header class="my_header"&gt; 
      First HTML page
    &lt;/header&gt;
    &lt;section&gt;
      &lt;img src="logo.jpg" alt="" /&gt;
      &lt;br /&gt;
      &lt;ul&gt;
        &lt;li&gt;Home&lt;/li&gt;
        &lt;li&gt;Admission &lt;span class="btn"&gt;apply&lt;/span&gt;&lt;/li&gt;
        &lt;li&gt;Login&lt;/li&gt;
      &lt;/ul&gt;
    &lt;/section&gt;
    &lt;footer&gt;
      Holberton School - 2017
    &lt;/footer&gt;
  &lt;/body&gt;
&lt;/html&gt;
```

-   No
    
-   Yes
    

#### Question #3

In the following code snippet, does the selector called `('header')` access the HTML tag `<header>`:

(using `document.querySelector` or `$(...)`)?

```
&lt;!DOCTYPE html&gt;
&lt;html lang="en"&gt;
  &lt;head&gt;
    &lt;title&gt;Holberton School&lt;/title&gt;
    &lt;link rel="stylesheet" href="styles/global.css" /&gt;
  &lt;/head&gt;
  &lt;body&gt;
    &lt;header&gt; 
      First HTML page
    &lt;/header&gt;
    &lt;section&gt;
      &lt;img src="logo.jpg" alt="" /&gt;
      &lt;br /&gt;
      &lt;ul&gt;
        &lt;li&gt;Home&lt;/li&gt;
        &lt;li&gt;Admission &lt;span class="btn"&gt;apply&lt;/span&gt;&lt;/li&gt;
        &lt;li&gt;Login&lt;/li&gt;
      &lt;/ul&gt;
    &lt;/section&gt;
    &lt;footer&gt;
      Holberton School - 2017
    &lt;/footer&gt;
  &lt;/body&gt;
&lt;/html&gt;
```

-   No
    
-   Yes
    

#### Question #4

In the following code snippet, does the selector called `('HeAdER')` access the HTML tag `<header>`:

(using `document.querySelector` or `$(...)`)?

```
&lt;!DOCTYPE html&gt;
&lt;html lang="en"&gt;
  &lt;head&gt;
    &lt;title&gt;Holberton School&lt;/title&gt;
    &lt;link rel="stylesheet" href="styles/global.css" /&gt;
  &lt;/head&gt;
  &lt;body&gt;
    &lt;header&gt; 
      First HTML page
    &lt;/header&gt;
    &lt;section&gt;
      &lt;img src="logo.jpg" alt="" /&gt;
      &lt;br /&gt;
      &lt;ul&gt;
        &lt;li&gt;Home&lt;/li&gt;
        &lt;li&gt;Admission &lt;span class="btn"&gt;apply&lt;/span&gt;&lt;/li&gt;
        &lt;li&gt;Login&lt;/li&gt;
      &lt;/ul&gt;
    &lt;/section&gt;
    &lt;footer&gt;
      Holberton School - 2017
    &lt;/footer&gt;
  &lt;/body&gt;
&lt;/html&gt;
```

-   No
    
-   Yes
    

#### Tips:

Selectors are case insensitive

#### Question #5

How many HTML tags are present in the following HTML code?

-   `<!DOCTYPE html>` is not an HTML tag
-   `<head></head>` is considered one HTML tag.

```
&lt;!DOCTYPE html&gt;
&lt;html lang="en"&gt;
  &lt;head&gt;
    &lt;title&gt;Holberton School&lt;/title&gt;
    &lt;link rel="stylesheet" href="styles/global.css" /&gt;
  &lt;/head&gt;
  &lt;body&gt;
    &lt;header&gt; 
      First HTML page
    &lt;/header&gt;
    &lt;section&gt;
      &lt;img src="logo.jpg" alt="" /&gt;
      &lt;br /&gt;
      &lt;ul&gt;
        &lt;li&gt;Home&lt;/li&gt;
        &lt;li&gt;Admission &lt;span class="btn"&gt;apply&lt;/span&gt;&lt;/li&gt;
        &lt;li&gt;Login&lt;/li&gt;
      &lt;/ul&gt;
    &lt;/section&gt;
    &lt;footer&gt;
      Holberton School - 2017
    &lt;/footer&gt;
  &lt;/body&gt;
&lt;/html&gt;
```

-   15
    
-   20
    
-   16
    
-   18
    

#### Question #6

In the following code snippet, does the selector called `('#my_header')` access the HTML tag `<header>`:

(using `document.querySelector` or `$(...)`)?

```
&lt;!DOCTYPE html&gt;
&lt;html lang="en"&gt;
  &lt;head&gt;
    &lt;title&gt;Holberton School&lt;/title&gt;
    &lt;link rel="stylesheet" href="styles/global.css" /&gt;
  &lt;/head&gt;
  &lt;body&gt;
    &lt;header class="my_header"&gt; 
      First HTML page
    &lt;/header&gt;
    &lt;section&gt;
      &lt;img src="logo.jpg" alt="" /&gt;
      &lt;br /&gt;
      &lt;ul id="my_header"&gt;
        &lt;li&gt;Home&lt;/li&gt;
        &lt;li&gt;Admission &lt;span class="btn"&gt;apply&lt;/span&gt;&lt;/li&gt;
        &lt;li&gt;Login&lt;/li&gt;
      &lt;/ul&gt;
    &lt;/section&gt;
    &lt;footer&gt;
      Holberton School - 2017
    &lt;/footer&gt;
  &lt;/body&gt;
&lt;/html&gt;
```

-   No
    
-   Yes
    

#### Question #7

In the following code snippet, does the selector called `('body header')` access the HTML tag `<header>`:

(using `document.querySelector` or `$(...)`)?

```
&lt;!DOCTYPE html&gt;
&lt;html lang="en"&gt;
  &lt;head&gt;
    &lt;title&gt;Holberton School&lt;/title&gt;
    &lt;link rel="stylesheet" href="styles/global.css" /&gt;
  &lt;/head&gt;
  &lt;body&gt;
    &lt;header&gt; 
      First HTML page
    &lt;/header&gt;
    &lt;section&gt;
      &lt;img src="logo.jpg" alt="" /&gt;
      &lt;br /&gt;
      &lt;ul&gt;
        &lt;li&gt;Home&lt;/li&gt;
        &lt;li&gt;Admission &lt;span class="btn"&gt;apply&lt;/span&gt;&lt;/li&gt;
        &lt;li&gt;Login&lt;/li&gt;
      &lt;/ul&gt;
    &lt;/section&gt;
    &lt;footer&gt;
      Holberton School - 2017
    &lt;/footer&gt;
  &lt;/body&gt;
&lt;/html&gt;
```

-   No
    
-   Yes
    

#### Question #8

In the following code snippet, does the selector called `('#my_header')` access the HTML tag `<header>`:

(using `document.querySelector` or `$(...)`)?

```
&lt;!DOCTYPE html&gt;
&lt;html lang="en"&gt;
  &lt;head&gt;
    &lt;title&gt;Holberton School&lt;/title&gt;
    &lt;link rel="stylesheet" href="styles/global.css" /&gt;
  &lt;/head&gt;
  &lt;body&gt;
    &lt;header id="my_header"&gt; 
      First HTML page
    &lt;/header&gt;
    &lt;section&gt;
      &lt;img src="logo.jpg" alt="" /&gt;
      &lt;br /&gt;
      &lt;ul&gt;
        &lt;li&gt;Home&lt;/li&gt;
        &lt;li&gt;Admission &lt;span class="btn"&gt;apply&lt;/span&gt;&lt;/li&gt;
        &lt;li&gt;Login&lt;/li&gt;
      &lt;/ul&gt;
    &lt;/section&gt;
    &lt;footer&gt;
      Holberton School - 2017
    &lt;/footer&gt;
  &lt;/body&gt;
&lt;/html&gt;
```

-   No
    
-   Yes
    

#### Question #9

In the following code snippet, does the selector called `('.my_header')` access the HTML tag `<header>`:

(using `document.querySelector` or `$(...)`)?

```
&lt;!DOCTYPE html&gt;
&lt;html lang="en"&gt;
  &lt;head&gt;
    &lt;title&gt;Holberton School&lt;/title&gt;
    &lt;link rel="stylesheet" href="styles/global.css" /&gt;
  &lt;/head&gt;
  &lt;body&gt;
    &lt;header class="my_header"&gt; 
      First HTML page
    &lt;/header&gt;
    &lt;section&gt;
      &lt;img src="logo.jpg" alt="" /&gt;
      &lt;br /&gt;
      &lt;ul&gt;
        &lt;li&gt;Home&lt;/li&gt;
        &lt;li&gt;Admission &lt;span class="btn"&gt;apply&lt;/span&gt;&lt;/li&gt;
        &lt;li&gt;Login&lt;/li&gt;
      &lt;/ul&gt;
    &lt;/section&gt;
    &lt;footer&gt;
      Holberton School - 2017
    &lt;/footer&gt;
  &lt;/body&gt;
&lt;/html&gt;
```

-   No
    
-   Yes
    

#### Question #10

How many HTML tags are present in the following HTML code?

-   `<!DOCTYPE html>` is not an HTML tag
-   `<head></head>` is considered one HTML tag.

```
&lt;!DOCTYPE html&gt;
&lt;html lang="en"&gt;
  &lt;head&gt;
    &lt;title&gt;Holberton School&lt;/title&gt;
  &lt;/head&gt;
  &lt;body&gt;
    &lt;header&gt; 
      First HTML page
    &lt;/header&gt;
    &lt;footer&gt;
      Holberton School - 2017
    &lt;/footer&gt;
  &lt;/body&gt;
&lt;/html&gt;
```

-   4
    
-   7
    
-   5
    
-   6
    

#### Question #11

In the following code snippet, does the selector called `('.header')` access the HTML tag `<header>`:

(using `document.querySelector` or `$(...)`)?

```
&lt;!DOCTYPE html&gt;
&lt;html lang="en"&gt;
  &lt;head&gt;
    &lt;title&gt;Holberton School&lt;/title&gt;
    &lt;link rel="stylesheet" href="styles/global.css" /&gt;
  &lt;/head&gt;
  &lt;body&gt;
    &lt;header&gt; 
      First HTML page
    &lt;/header&gt;
    &lt;section&gt;
      &lt;img src="logo.jpg" alt="" /&gt;
      &lt;br /&gt;
      &lt;ul&gt;
        &lt;li&gt;Home&lt;/li&gt;
        &lt;li&gt;Admission &lt;span class="btn"&gt;apply&lt;/span&gt;&lt;/li&gt;
        &lt;li&gt;Login&lt;/li&gt;
      &lt;/ul&gt;
    &lt;/section&gt;
    &lt;footer&gt;
      Holberton School - 2017
    &lt;/footer&gt;
  &lt;/body&gt;
&lt;/html&gt;
```

-   No
    
-   Yes
    

#### Question #12

In the following code snippet, does the selector called `('#header')` access the HTML tag `<header>`:

(using `document.querySelector` or `$(...)`)?

```
&lt;!DOCTYPE html&gt;
&lt;html lang="en"&gt;
  &lt;head&gt;
    &lt;title&gt;Holberton School&lt;/title&gt;
    &lt;link rel="stylesheet" href="styles/global.css" /&gt;
  &lt;/head&gt;
  &lt;body&gt;
    &lt;header&gt; 
      First HTML page
    &lt;/header&gt;
    &lt;section&gt;
      &lt;img src="logo.jpg" alt="" /&gt;
      &lt;br /&gt;
      &lt;ul&gt;
        &lt;li&gt;Home&lt;/li&gt;
        &lt;li&gt;Admission &lt;span class="btn"&gt;apply&lt;/span&gt;&lt;/li&gt;
        &lt;li&gt;Login&lt;/li&gt;
      &lt;/ul&gt;
    &lt;/section&gt;
    &lt;footer&gt;
      Holberton School - 2017
    &lt;/footer&gt;
  &lt;/body&gt;
&lt;/html&gt;
```

-   No
    
-   Yes
    

#### Question #13

How many HTML tags are present in the following HTML code?

-   `<!DOCTYPE html>` is not an HTML tag
-   `<head></head>` is considered one HTML tag.

```
&lt;!DOCTYPE html&gt;
&lt;html lang="en"&gt;
  &lt;head&gt;
    &lt;title&gt;Holberton School&lt;/title&gt;
  &lt;/head&gt;
  &lt;body&gt;
    &lt;header&gt; 
      First HTML page
    &lt;/header&gt;
    &lt;section&gt;
      &lt;img src="logo.jpg" alt="" /&gt;
      &lt;ul&gt;
        &lt;li&gt;Home&lt;/li&gt;
        &lt;li&gt;Admission&lt;/li&gt;
        &lt;li&gt;Login&lt;/li&gt;
      &lt;/ul&gt;
    &lt;/section&gt;
    &lt;footer&gt;
      Holberton School - 2017
    &lt;/footer&gt;
  &lt;/body&gt;
&lt;/html&gt;
```

-   11
    
-   14
    
-   12
    
-   13
    

## Tasks

### 0\. No JQuery

mandatory

Score: 100.0% (Checks completed: 100.0%)

Write a JavaScript script that updates the text color of the `<header>` element to red (`#FF0000`):

-   You must use `document.querySelector` to select the HTML tag
-   You can’t use the JQuery API

Please test with this HTML file in your browser:

```
guillaume@ubuntu:~/0x15$ cat 0-main.html 
&lt;!DOCTYPE html&gt;
&lt;html lang="en"&gt;
  &lt;head&gt;
    &lt;title&gt;ALX&lt;/title&gt;
  &lt;/head&gt;
  &lt;body&gt;
    &lt;header&gt; 
      First HTML page
    &lt;/header&gt;
    &lt;footer&gt;
      ALX - 2017
    &lt;/footer&gt;
    &lt;script type="text/javascript" src="0-script.js"&gt;&lt;/script&gt;
  &lt;/body&gt;
&lt;/html&gt;
guillaume@ubuntu:~/0x15$ 
```

**Repo:**

-   GitHub repository: `alx-higher_level_programming`
-   Directory: `0x15-javascript-web_jquery`
-   File: `0-script.js`

View results

×

#### 0\. No JQuery

##### Commit used:

-   **User:** \---
-   **URL:** Click here
-   **ID:** `---`
-   **Author:** \---
-   **Subject:** _\---_
-   **Date:** \---

### 1\. With JQuery

mandatory

Score: 100.0% (Checks completed: 100.0%)

Write a JavaScript script that updates the text color of the `<header>` element to red (`#FF0000`):

-   You can’t use `document.querySelector` to select the HTML tag
-   You must use the JQuery API

Please test with this HTML file in your browser:

```
guillaume@ubuntu:~/0x15$ cat 1-main.html 
&lt;!DOCTYPE html&gt;
&lt;html lang="en"&gt;
  &lt;head&gt;
    &lt;title&gt;ALX&lt;/title&gt;
    &lt;script src="https://code.jquery.com/jquery-3.2.1.min.js"&gt;&lt;/script&gt;
  &lt;/head&gt;
  &lt;body&gt;
    &lt;header&gt; 
      First HTML page
    &lt;/header&gt;
    &lt;footer&gt;
      ALX - 2017
    &lt;/footer&gt;
    &lt;script type="text/javascript" src="1-script.js"&gt;&lt;/script&gt;
  &lt;/body&gt;
&lt;/html&gt;
guillaume@ubuntu:~/0x15$ 
```

**Repo:**

-   GitHub repository: `alx-higher_level_programming`
-   Directory: `0x15-javascript-web_jquery`
-   File: `1-script.js`

View results

×

#### 1\. With JQuery

##### Commit used:

-   **User:** \---
-   **URL:** Click here
-   **ID:** `---`
-   **Author:** \---
-   **Subject:** _\---_
-   **Date:** \---

### 2\. Click and turn red

mandatory

Score: 100.0% (Checks completed: 100.0%)

Write a JavaScript script that updates the text color of the `<header>` element to red (`#FF0000`) when the user clicks on the tag `DIV#red_header`:

-   You can’t use `document.querySelector` to select the HTML tag
-   You must use the JQuery API

Please test with this HTML file in your browser:

```
guillaume@ubuntu:~/0x15$ cat 2-main.html 
&lt;!DOCTYPE html&gt;
&lt;html lang="en"&gt;
  &lt;head&gt;
    &lt;title&gt;ALX&lt;/title&gt;
    &lt;script src="https://code.jquery.com/jquery-3.2.1.min.js"&gt;&lt;/script&gt;
  &lt;/head&gt;
  &lt;body&gt;
    &lt;header&gt; 
      First HTML page
    &lt;/header&gt;
    &lt;div id="red_header"&gt;Red header&lt;/div&gt;
    &lt;footer&gt;
      ALX - 2017
    &lt;/footer&gt;
    &lt;script type="text/javascript" src="2-script.js"&gt;&lt;/script&gt;
  &lt;/body&gt;
&lt;/html&gt;
guillaume@ubuntu:~/0x15$ 
```

**Repo:**

-   GitHub repository: `alx-higher_level_programming`
-   Directory: `0x15-javascript-web_jquery`
-   File: `2-script.js`

View results

×

#### 2\. Click and turn red

##### Commit used:

-   **User:** \---
-   **URL:** Click here
-   **ID:** `---`
-   **Author:** \---
-   **Subject:** _\---_
-   **Date:** \---

### 3\. Add \`.red\` class

mandatory

Score: 100.0% (Checks completed: 100.0%)

Write a JavaScript script that adds the class `red` to the `<header>` element when the user clicks on the tag `DIV#red_header`

-   You can’t use `document.querySelector` to select the HTML tag
-   You must use the JQuery API

Please test with this HTML file in your browser:

```
guillaume@ubuntu:~/0x15$ cat 3-main.html 
&lt;!DOCTYPE html&gt;
&lt;html lang="en"&gt;
  &lt;head&gt;
    &lt;title&gt;ALX&lt;/title&gt;
    &lt;script src="https://code.jquery.com/jquery-3.2.1.min.js"&gt;&lt;/script&gt;
    &lt;style&gt;
      .red {
        color: #FF0000;
      }
    &lt;/style&gt;
  &lt;/head&gt;
  &lt;body&gt;
    &lt;header&gt; 
      First HTML page
    &lt;/header&gt;
    &lt;div id="red_header"&gt;Red header&lt;/div&gt;
    &lt;footer&gt;
      ALX - 2017
    &lt;/footer&gt;
    &lt;script type="text/javascript" src="3-script.js"&gt;&lt;/script&gt;
  &lt;/body&gt;
&lt;/html&gt;
guillaume@ubuntu:~/0x15$ 
```

**Repo:**

-   GitHub repository: `alx-higher_level_programming`
-   Directory: `0x15-javascript-web_jquery`
-   File: `3-script.js`

View results

×

#### 3\. Add \`.red\` class

##### Commit used:

-   **User:** \---
-   **URL:** Click here
-   **ID:** `---`
-   **Author:** \---
-   **Subject:** _\---_
-   **Date:** \---

### 4\. Toggle classes

mandatory

Score: 100.0% (Checks completed: 100.0%)

Write a JavaScript script that toggles the class of the `<header>` element when the user clicks on the tag `DIV#toggle_header`:

-   The `<header>` element must always have one class: `red` or `green`, never both in the same time and never empty.
-   If the current class is `red`, when the user click on `DIV#toggle_header`, the class must be updated to `green` ; and the reverse.
-   You can’t use `document.querySelector` to select the HTML tag
-   You must use the JQuery API

Please test with this HTML file in your browser:

```
guillaume@ubuntu:~/0x15$ cat 4-main.html 
&lt;!DOCTYPE html&gt;
&lt;html lang="en"&gt;
  &lt;head&gt;
    &lt;title&gt;ALX&lt;/title&gt;
    &lt;script src="https://code.jquery.com/jquery-3.2.1.min.js"&gt;&lt;/script&gt;
    &lt;style&gt;
      .red {
        color: #FF0000;
      }
      .green {
        color: #00FF00;
      }
    &lt;/style&gt;
  &lt;/head&gt;
  &lt;body&gt;
    &lt;header class="green"&gt; 
      First HTML page
    &lt;/header&gt;
    &lt;div id="toggle_header"&gt;Toggle header&lt;/div&gt;
    &lt;footer&gt;
      ALX - 2017
    &lt;/footer&gt;
    &lt;script type="text/javascript" src="4-script.js"&gt;&lt;/script&gt;
  &lt;/body&gt;
&lt;/html&gt;
guillaume@ubuntu:~/0x15$ 
```

**Repo:**

-   GitHub repository: `alx-higher_level_programming`
-   Directory: `0x15-javascript-web_jquery`
-   File: `4-script.js`

View results

×

#### 4\. Toggle classes

##### Commit used:

-   **User:** \---
-   **URL:** Click here
-   **ID:** `---`
-   **Author:** \---
-   **Subject:** _\---_
-   **Date:** \---

### 5\. List of elements

mandatory

Score: 100.0% (Checks completed: 100.0%)

Write a JavaScript script that adds a `<li>` element to a list when the user clicks on the tag `DIV#add_item`:

-   The new element must be: `<li>Item</li>`
-   The new element must be added to `UL.my_list`
-   You can’t use `document.querySelector` to select the HTML tag
-   You must use the JQuery API

Please test with this HTML file in your browser:

```
guillaume@ubuntu:~/0x15$ cat 5-main.html 
&lt;!DOCTYPE html&gt;
&lt;html lang="en"&gt;
  &lt;head&gt;
    &lt;title&gt;ALX&lt;/title&gt;
    &lt;script src="https://code.jquery.com/jquery-3.2.1.min.js"&gt;&lt;/script&gt;
  &lt;/head&gt;
  &lt;body&gt;
    &lt;header&gt; 
      First HTML page
    &lt;/header&gt;
    &lt;br /&gt;
    &lt;div id="add_item"&gt;Add item&lt;/div&gt;
    &lt;br /&gt;
    &lt;ul class="my_list"&gt;
      &lt;li&gt;Item&lt;/li&gt;
    &lt;/ul&gt;
    &lt;footer&gt;
      ALX - 2017
    &lt;/footer&gt;
    &lt;script type="text/javascript" src="5-script.js"&gt;&lt;/script&gt;
  &lt;/body&gt;
&lt;/html&gt;
guillaume@ubuntu:~/0x15$ 
```

**Repo:**

-   GitHub repository: `alx-higher_level_programming`
-   Directory: `0x15-javascript-web_jquery`
-   File: `5-script.js`

View results

×

#### 5\. List of elements

##### Commit used:

-   **User:** \---
-   **URL:** Click here
-   **ID:** `---`
-   **Author:** \---
-   **Subject:** _\---_
-   **Date:** \---

### 6\. Change the text

mandatory

Score: 100.0% (Checks completed: 100.0%)

Write a JavaScript script that updates the text of the `<header>` element to `New Header!!!` when the user clicks on `DIV#update_header`

-   You can’t use `document.querySelector` to select the HTML tag
-   You must use the JQuery API

Please test with this HTML file in your browser:

```
guillaume@ubuntu:~/0x15$ cat 6-main.html 
&lt;!DOCTYPE html&gt;
&lt;html lang="en"&gt;
  &lt;head&gt;
    &lt;title&gt;ALX&lt;/title&gt;
    &lt;script src="https://code.jquery.com/jquery-3.2.1.min.js"&gt;&lt;/script&gt;
  &lt;/head&gt;
  &lt;body&gt;
    &lt;header&gt; 
      First HTML page
    &lt;/header&gt;
    &lt;br /&gt;
    &lt;div id="update_header"&gt;Update the header&lt;/div&gt;
    &lt;br /&gt;
    &lt;footer&gt;
      ALX - 2017
    &lt;/footer&gt;
    &lt;script type="text/javascript" src="6-script.js"&gt;&lt;/script&gt;
  &lt;/body&gt;
&lt;/html&gt;
guillaume@ubuntu:~/0x15$ 
```

**Repo:**

-   GitHub repository: `alx-higher_level_programming`
-   Directory: `0x15-javascript-web_jquery`
-   File: `6-script.js`

View results

×

#### 6\. Change the text

##### Commit used:

-   **User:** \---
-   **URL:** Click here
-   **ID:** `---`
-   **Author:** \---
-   **Subject:** _\---_
-   **Date:** \---

### 7\. Star wars character

mandatory

Score: 100.0% (Checks completed: 100.0%)

Write a JavaScript script that fetches the character `name` from this URL: `https://swapi-api.alx-tools.com/api/people/5/?format=json`

-   The name must be displayed in the HTML tag `DIV#character`
-   You can’t use `document.querySelector` to select the HTML tag
-   You must use the JQuery API

Please test with this HTML file in your browser:

```
guillaume@ubuntu:~/0x15$ cat 7-main.html 
&lt;!DOCTYPE html&gt;
&lt;html lang="en"&gt;
  &lt;head&gt;
    &lt;title&gt;ALX&lt;/title&gt;
    &lt;script src="https://code.jquery.com/jquery-3.2.1.min.js"&gt;&lt;/script&gt;
  &lt;/head&gt;
  &lt;body&gt;
    &lt;header&gt; 
      Star Wars character
    &lt;/header&gt;
    &lt;br /&gt;
    &lt;div id="character"&gt;&lt;/div&gt;
    &lt;br /&gt;
    &lt;footer&gt;
     ALX - 2017
    &lt;/footer&gt;
    &lt;script type="text/javascript" src="7-script.js"&gt;&lt;/script&gt;
  &lt;/body&gt;
&lt;/html&gt;
guillaume@ubuntu:~/0x15$ 
```

**Repo:**

-   GitHub repository: `alx-higher_level_programming`
-   Directory: `0x15-javascript-web_jquery`
-   File: `7-script.js`

View results

×

#### 7\. Star wars character

##### Commit used:

-   **User:** \---
-   **URL:** Click here
-   **ID:** `---`
-   **Author:** \---
-   **Subject:** _\---_
-   **Date:** \---

### 8\. Star Wars movies

mandatory

Score: 100.0% (Checks completed: 100.0%)

Write a JavaScript script that fetches and lists the `title` for all movies by using this URL: `https://swapi-api.alx-tools.com/api/films/?format=json`

-   All movie titles must be list in the HTML tag `UL#list_movies`
-   You can’t use `document.querySelector` to select the HTML tag
-   You must use the JQuery API

Please test with this HTML file in your browser:

```
guillaume@ubuntu:~/0x15$ cat 8-main.html 
&lt;!DOCTYPE html&gt;
&lt;html lang="en"&gt;
  &lt;head&gt;
    &lt;title&gt;ALX&lt;/title&gt;
    &lt;script src="https://code.jquery.com/jquery-3.2.1.min.js"&gt;&lt;/script&gt;
  &lt;/head&gt;
  &lt;body&gt;
    &lt;header&gt; 
      Star Wars movies
    &lt;/header&gt;
    &lt;br /&gt;
    &lt;ul id="list_movies"&gt;
    &lt;/ul&gt;
    &lt;br /&gt;
    &lt;footer&gt;
      ALX - 2017
    &lt;/footer&gt;
    &lt;script type="text/javascript" src="8-script.js"&gt;&lt;/script&gt;
  &lt;/body&gt;
&lt;/html&gt;
guillaume@ubuntu:~/0x15$ 
```

**Repo:**

-   GitHub repository: `alx-higher_level_programming`
-   Directory: `0x15-javascript-web_jquery`
-   File: `8-script.js`

View results

×

#### 8\. Star Wars movies

##### Commit used:

-   **User:** \---
-   **URL:** Click here
-   **ID:** `---`
-   **Author:** \---
-   **Subject:** _\---_
-   **Date:** \---

### 9\. Say Hello!

mandatory

Score: 100.0% (Checks completed: 100.0%)

Write a JavaScript script that fetches from `https://hellosalut.stefanbohacek.dev/?lang=fr` and displays the value of `hello` from that fetch in the HTML tag `DIV#hello`.

-   The translation of “hello” must be displayed in the HTML tag `DIV#hello`
-   You can’t use `document.querySelector` to select the HTML tag
-   You must use the JQuery API
-   Your script must work when it is imported from the `<head>` tag

Please test with this HTML file in your browser:

```
guillaume@ubuntu:~/0x15$ cat 9-main.html 
&lt;!DOCTYPE html&gt;
&lt;html lang="en"&gt;
  &lt;head&gt;
    &lt;title&gt;ALX&lt;/title&gt;
    &lt;script src="https://code.jquery.com/jquery-3.2.1.min.js"&gt;&lt;/script&gt;
    &lt;script type="text/javascript" src="9-script.js"&gt;&lt;/script&gt;
  &lt;/head&gt;
  &lt;body&gt;
    &lt;header&gt; 
      Say Hello!
    &lt;/header&gt;
    &lt;br /&gt;
    &lt;div id="hello"&gt;&lt;/div&gt;
    &lt;br /&gt;
    &lt;footer&gt;
      ALX - 2017
    &lt;/footer&gt;
  &lt;/body&gt;
&lt;/html&gt;
guillaume@ubuntu:~/0x15$ 
```

**Repo:**

-   GitHub repository: `alx-higher_level_programming`
-   Directory: `0x15-javascript-web_jquery`
-   File: `9-script.js`

View results

×

#### 9\. Say Hello!

##### Commit used:

-   **User:** \---
-   **URL:** Click here
-   **ID:** `---`
-   **Author:** \---
-   **Subject:** _\---_
-   **Date:** \---

### 10\. No jQuery - document loaded

#advanced

Score: 100.0% (Checks completed: 100.0%)

Write a JavaScript script that updates the text color of the `<header>` element to red (`#FF0000`):

-   You must use `document.querySelector` to select the HTML tag
-   You can’t use the jQuery API
-   Note: Your script must be imported from the `<head>` tag, not at the end of the HTML

Please test with this HTML file in your browser:

```
guillaume@ubuntu:~/0x15$ cat 100-main.html 
&lt;!DOCTYPE html&gt;
&lt;html lang="en"&gt;
  &lt;head&gt;
    &lt;title&gt;ALX&lt;/title&gt;
    &lt;script type="text/javascript" src="100-script.js"&gt;&lt;/script&gt;
  &lt;/head&gt;
  &lt;body&gt;
    &lt;header&gt; 
      First HTML page
    &lt;/header&gt;
    &lt;footer&gt;
      ALX - 2017
    &lt;/footer&gt;
  &lt;/body&gt;
&lt;/html&gt;
guillaume@ubuntu:~/0x15$ 
```

**Repo:**

-   GitHub repository: `alx-higher_level_programming`
-   Directory: `0x15-javascript-web_jquery`
-   File: `100-script.js`

View results

×

#### 10\. No jQuery - document loaded

##### Commit used:

-   **User:** \---
-   **URL:** Click here
-   **ID:** `---`
-   **Author:** \---
-   **Subject:** _\---_
-   **Date:** \---

### 11\. List, add, remove

#advanced

Score: 100.0% (Checks completed: 100.0%)

Write a JavaScript script that adds, removes and clears `LI` elements from a list when the user clicks:

-   The new element must be: `<li>Item</li>`
-   The new element must be added to `UL.my_list`
-   When the user clicks on `DIV#add_item`: a new element is added to the list
-   When the user clicks on `DIV#remove_item`: the last element is removed from the list
-   When the user clicks on `DIV#clear_list`: all elements of the list are removed
-   You can’t use `document.querySelector` to select the HTML tag
-   You must use the JQuery API
-   You script must work when it imported from the `HEAD` tag

Please test with this HTML file in your browser:

```
guillaume@ubuntu:~/0x15$ cat 101-main.html 
&lt;!DOCTYPE html&gt;
&lt;html lang="en"&gt;
  &lt;head&gt;
    &lt;title&gt;ALX&lt;/title&gt;
    &lt;script src="https://code.jquery.com/jquery-3.2.1.min.js"&gt;&lt;/script&gt;
    &lt;script type="text/javascript" src="101-script.js"&gt;&lt;/script&gt;
  &lt;/head&gt;
  &lt;body&gt;
    &lt;header&gt; 
      First HTML page
    &lt;/header&gt;
    &lt;br /&gt;
    &lt;div id="add_item"&gt;Add item&lt;/div&gt;
    &lt;div id="remove_item"&gt;Remove item&lt;/div&gt;
    &lt;div id="clear_list"&gt;Clear list&lt;/div&gt;
    &lt;br /&gt;
    &lt;ul class="my_list"&gt;
      &lt;li&gt;Item&lt;/li&gt;
    &lt;/ul&gt;
    &lt;footer&gt;
      ALX - 2017
    &lt;/footer&gt;
  &lt;/body&gt;
&lt;/html&gt;
guillaume@ubuntu:~/0x15$ 
```

**Repo:**

-   GitHub repository: `alx-higher_level_programming`
-   Directory: `0x15-javascript-web_jquery`
-   File: `101-script.js`

View results

×

#### 11\. List, add, remove

##### Commit used:

-   **User:** \---
-   **URL:** Click here
-   **ID:** `---`
-   **Author:** \---
-   **Subject:** _\---_
-   **Date:** \---

### 12\. Say hello to everybody!

#advanced

Score: 100.0% (Checks completed: 100.0%)

Write a JavaScript script that fetches and prints how to say “Hello” depending on the language

-   You should use this API service: `https://www.fourtonfish.com/hellosalut/hello/`
-   The language code will be the value entered in the tag `INPUT#language_code` (ex: `es`, `fr`, `en` etc.)
-   The translation must be fetched when the user clicks on `INPUT#btn_translate`
-   The translation of “Hello” must be displayed in the HTML tag `DIV#hello`
-   You can’t use `document.querySelector` to select the HTML tag
-   You must use the JQuery API
-   You script must work when imported from the `<head>` tag

Please test with this HTML file in your browser:

```
guillaume@ubuntu:~/0x15$ cat 102-main.html 
&lt;!DOCTYPE html&gt;
&lt;html lang="en"&gt;
  &lt;head&gt;
    &lt;title&gt;ALX&lt;/title&gt;
    &lt;script src="https://code.jquery.com/jquery-3.2.1.min.js"&gt;&lt;/script&gt;
    &lt;script type="text/javascript" src="102-script.js"&gt;&lt;/script&gt;
  &lt;/head&gt;
  &lt;body&gt;
    &lt;header&gt; 
      Say Hello
    &lt;/header&gt;
    &lt;br /&gt;
    &lt;input id="language_code" type="text" placeholder="Language code"/&gt;
    &lt;input id="btn_translate" type="button" value="Translate"/&gt;
    &lt;br /&gt;
    &lt;div id="hello"&gt;&lt;/div&gt;
    &lt;br /&gt;
    &lt;footer&gt;
      ALX - 2017
    &lt;/footer&gt;
  &lt;/body&gt;
&lt;/html&gt;
guillaume@ubuntu:~/0x15$ 
```

**Repo:**

-   GitHub repository: `alx-higher_level_programming`
-   Directory: `0x15-javascript-web_jquery`
-   File: `102-script.js`

View results

×

#### 12\. Say hello to everybody!

##### Commit used:

-   **User:** \---
-   **URL:** Click here
-   **ID:** `---`
-   **Author:** \---
-   **Subject:** _\---_
-   **Date:** \---

### 13\. And press ENTER

#advanced

Score: 100.0% (Checks completed: 100.0%)

Write a JavaScript script that fetches and prints how to say “Hello” depending on the language

-   You should use this API service: `https://www.fourtonfish.com/hellosalut/hello/`
-   The language code will be the value entered in the tag `INPUT#language_code` (ex: `es`, `fr`, `en` etc.)
-   The translation must be fetched when the user clicks on `INPUT#btn_translate` OR presses `ENTER` when the focus is on `INPUT#language_code`
-   The translation of “Hello” must be displayed in the HTML tag `DIV#hello`
-   You can’t use `document.querySelector` to select the HTML tag
-   You must use the JQuery API
-   You script must work when imported from the `<head>` tag

Please test with this HTML file in your browser:

```
guillaume@ubuntu:~/0x15$ cat 103-main.html 
&lt;!DOCTYPE html&gt;
&lt;html lang="en"&gt;
  &lt;head&gt;
    &lt;title&gt;ALX&lt;/title&gt;
    &lt;script src="https://code.jquery.com/jquery-3.2.1.min.js"&gt;&lt;/script&gt;
    &lt;script type="text/javascript" src="103-script.js"&gt;&lt;/script&gt;
  &lt;/head&gt;
  &lt;body&gt;
    &lt;header&gt; 
      Say Hello
    &lt;/header&gt;
    &lt;br /&gt;
    &lt;input id="language_code" type="text" placeholder="Language code"/&gt;
    &lt;input id="btn_translate" type="button" value="Translate"/&gt;
    &lt;br /&gt;
    &lt;div id="hello"&gt;&lt;/div&gt;
    &lt;br /&gt;
    &lt;footer&gt;
      ALX - 2017
    &lt;/footer&gt;
  &lt;/body&gt;
&lt;/html&gt;
guillaume@ubuntu:~/0x15$ 
```

**Repo:**

-   GitHub repository: `alx-higher_level_programming`
-   Directory: `0x15-javascript-web_jquery`
-   File: `103-script.js`