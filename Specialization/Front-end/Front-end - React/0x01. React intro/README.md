# 0x01. React intro

Front-endJavaScriptES6React

-   Weight: 1
-   Project over - took place from Aug 20, 2024 7:00 AM to Aug 22, 2024 7:00 AM
-   An auto review will be launched at the deadline

### Concepts

_For this project, we expect you to look at this concept:_

-   [React](https://intranet.alxswe.com/concepts/547)

![](Project%200x01.%20React%20intro%20%20Cairo%20Intranet/79df527164ac54981039.jpg)

## Resources

**Read or watch**:

-   [React Official Website](https://intranet.alxswe.com/rltoken/gTvHLsLFztlLKOsHVG2wFw "React Official Website")
-   [Getting started with React](https://intranet.alxswe.com/rltoken/sIVpPWBHBHRzp9cFX946_g "Getting started with React")
-   [Quick Start with React](https://intranet.alxswe.com/rltoken/S9hYxNyohGDvkfQb_DgO6Q "Quick Start with React ")
-   [create-react-app](https://intranet.alxswe.com/rltoken/XRP9_jP0G0vQODINFymubQ "create-react-app")
-   [React Developer Tools](https://intranet.alxswe.com/rltoken/-no3Szs-PJQ_P_urpa4FSQ "React Developer Tools")
-   [What is Babel?](https://intranet.alxswe.com/rltoken/FOdRx4EZKIpoMEny-jxMXQ "What is Babel?")
-   [Enzyme](https://intranet.alxswe.com/rltoken/AlilVwpyEpGwPOK40d5dXw "Enzyme")

## Learning Objectives

At the end of this project, you are expected to be able to [explain to anyone](https://intranet.alxswe.com/rltoken/sh0lj4-LCpf1zas5UfkDuQ "explain to anyone"), **without the help of Google**:

-   How to create a basic Javascript application using React
-   How to use the package `create-react-app` to start developing quickly with React
-   What JSX is and how to use it
-   How to use the React Developer Tools to debug your code
-   How to use Enzyme’s Shadow rendering to test your application
-   How to use React with Webpack & Babel

## Requirements

-   All your files will be interpreted/compiled on Ubuntu 18.04 LTS using `node 12.x.x` and `npm 6.x.x`
-   Allowed editors: `vi`, `vim`, `emacs`, `Visual Studio Code`
-   All your files should end with a new line
-   A `README.md` file, at the root of the folder of the project, is mandatory

## Tasks

### 0\. Basic application

mandatory

**Create a basic app named `dashboard` using `create-react-app` in your `task_0` directory**

You will need a favicon and the ALX logo. Download them and add them to the `src/` directory under `dashboard/`

**ALX Logo**

![](Project%200x01.%20React%20intro%20%20Cairo%20Intranet/175b85183ecedb529e14.jpg)

**Favicon**

![](Project%200x01.%20React%20intro%20%20Cairo%20Intranet/e240f8157634d33a9757.ico)

**Remove the unused files:**

-   `service-worker`
-   `index.css`
-   `App.test.js`

**in `task_0/dashboard/src/App.js`, create a function `App` that returns:**

-   a header div with a class named `App-header` containing the ALX logo and a h1 with the text `School dashboard`
-   a body div with a class named `App-body` containing at least one paragraph with the text `Login to access the full dashboard`
-   a footer div with a class named `App-footer` containing at least one paragraph with the text `Copyright 2020 - ALX`

**Modify the App.css to make the project looks like the following screenshot:**

![](Project%200x01.%20React%20intro%20%20Cairo%20Intranet/7743eba00239687a6fdd.png)

**Requirements:**

-   When running, there should not be any lint error in the console

**Repo:**

-   GitHub repository: `alx-react`
-   Directory: `0x01-react_intro`
-   File: `task_0/dashboards/src/, task_0/dashboard/src/App.css, task_0/dashboard/src/App.js`

Get a sandbox

### 1\. Basic Application

mandatory

**Repo:**

-   GitHub repository: `alx-react`
-   Directory: `0x00-react_introduction`
-   File: `task_0/dashboards/src/, task_0/dashboard/src/App.css, task_0/dashboard/src/App.js`

### 2\. Embedding expressions, functions

mandatory

**Using your code from the previous task, in `task_1/dashboard/src/utils.js`:**

-   Create a function named `getFullYear` that will return the current year
-   Create a function named `getFooterCopy`:
    -   It accepts one argument `isIndex`(boolean). When true, the function should return `ALX`. When false, the function should return `ALX main dashboard`
-   Modify the footer returned in `task_1/dashboard/src/App.js` to use these two functions

**in `task_1/dashboard/src/Notifications.js`, create a Notifications element:**

-   It should import React
-   It should export a function
-   The function should return a `div` with the class `Notifications`
-   The div should contain a paragraph with the text `Here is the list of notifications`
-   import the file `Notifications.css`.

**in `task_1/dashboard/src/Notifications.css`, style the Notifications class:**

-   Add a border and some padding around the `div`

**Render the Notifications element:**

-   Modify `task_1/dashboard/src/index.js` to render the new element (`Notifications`) in a `div` named `root-notifications`
-   Check that you can see the two elements on the browser, and using the React browser extension

**Requirements:**

-   When running, there should not be any lint error in the console

**Repo:**

-   GitHub repository: `alx-react`
-   Directory: `0x01-react_intro`
-   File: `task_1/dashboard/src/, task_1/dashboard/src/utils.js, task_1/dashboard/src/App.js, task_1/dashboard/src/Notifications.css, task_1/dashboard/src/Notifications.js, task_1/dashboard/src/index.js`

### 3\. Modify the App

mandatory

**using your code from the previous task, in `task_2/dashboard/src/App.js` under the paragraph that says `Login to access the full dashboard`:**

-   add a label and input for email
-   add a label and input for password
-   when the user clicks on a label, it should select the corresponding input
-   add one button element with the text “OK”

**Repo:**

-   GitHub repository: `alx-react`
-   Directory: `0x01-react_intro`
-   File: `task_2/dashboard/src/, task_2/dashboard/src/App.js`

### 4\. Modify the Notifications

mandatory

**in `task_2/dashboard/src/utils.js`:**

-   Create a function named `getLatestNotification` that returns the following string: `<strong>Urgent requirement</strong> - complete by EOD`

**in `task_2/dashboard/src/Notifications.js` in the Notifications div:**

-   add a button element with inline styling (without using the CSS file):
    -   show button on right side of notifications box
    -   `aria-label` is `Close`
    -   when user clicks on the button it logs to the console `Close button has been clicked`
-   in the button element add a children `img` element that will import the `close-icon.png` image
-   after the paragraph add an unordered list
    -   the list has the following items:
        -   The first one has a default priority and says `New course available`
        -   The second one has a urgent priority and says `New resume available`
        -   Add the priority to the first and second items of the list using a `data` attribute
        -   The last item correctly displays the content of `getLatestNotification` using `dangerouslySetInnerHTML`

**in `task_2/dashboard/src/Notifications.css`:**

-   style the notification priorities using their data attribute: set the color of default items to blue, and the color of urgent items to red.

**Requirements:**

-   When running, there should not be any lint error in the console
-   Your app should look like the following screenshot:

![](Project%200x01.%20React%20intro%20%20Cairo%20Intranet/8d639e2671ebe15575ad.png)

**Repo:**

-   GitHub repository: `alx-react`
-   Directory: `0x01-react_intro`
-   File: `task_2/dashboard/src/, task_2/dashboard/src/utils.js, task_2/dashboard/src/Notifications.js, task_2/dashboard/src/Notifications.css`

### 5\. Create basic tests with four tests

mandatory

**in `task_3/dashboard/src/utils.test.js`:**

-   Write a test to check that the function `getFullYear` returns the correct year (be careful to not create a time bomb)
-   Write a test to check that `getFooterCopy` returns the correct string when the argument is true or false
-   Write a test checking the returned string for `getLatestNotification`

**Repo:**

-   GitHub repository: `alx-react`
-   Directory: `0x01-react_intro`
-   File: `task_3/dashboard/src/utils.test.js`

### 6\. Install Enzyme

mandatory

-   Install Enzyme with `npm`
-   Create a file named `setupTests.js` and configure the adapter for Enzyme

**Repo:**

-   GitHub repository: `alx-react`
-   Directory: `0x01-react_intro`
-   File: `task_3/dashboard/src/setupTests.js`

Check submission

×

#### 6\. Install Enzyme

Request a new review Close

Requirement success

Requirement fail

Code success

Code fail

Efficiency success

Efficiency fail

Text answer success

Text answer fail

Skipped - Previous check failed

### 7\. Create React tests

mandatory

**in `task_3/dashboard/src/App.test.js` create four tests:**

-   test that App renders without crashing
-   verify that App renders a div with the class `App-header`
-   verify that App renders a div with the class `App-body`
-   verify that App renders a div with the class `App-footer`

**in `task_3/dashboard/src/Notifications.test.js` create three tests**

-   test that Notifications renders without crashing
-   verify that Notifications renders three list items
-   verify that Notifications renders the text `Here is the list of notifications`

**Requirements:**

-   When running the test suites, you should see the following result
-   You must use shallow rendering to write the React tests

```
Test Suites: 3 passed, 3 total
Tests: 11 passed, 11 total
```

**Repo:**

-   GitHub repository: `alx-react`
-   Directory: `0x01-react_intro`
-   File: `task_3/dashboard/src/App.test.js, task_3/dashboard/src/Notifications.test.js`

### 8\. Deploy to a GitHub page

mandatory

Deploy your application to GitHub Pages using `gh-pages` branch and `create-react-app`

Your application should be working correctly when accessing the GitHub URL.

**Repo:**

-   GitHub repository: `alx-react`
-   Directory: `0x01-react_intro`
-   File: `task_4/`

### 9\. Create a project using Webpack

mandatory

Without reusing `create-react-app` or the code from the previous exercise, start a brand new npm project

Reusing what you learned during the Webpack module:

-   Set up a system to output a `bundle.js` file in a `dist` folder
-   Set up a dev server with hot reloading
-   Create a `src` folder that will contain your Javascript
-   Set up a simple html file in the `dist` folder that will import the bundle file in the `body` tag.

Install and configure the various plugins to support:

-   inline source map
-   style loader
-   css loader
-   image webpack loader

**Repo:**

-   GitHub repository: `alx-react`
-   Directory: `0x01-react_intro`
-   File: `task_5/dashboard/config/webpack.config.js, task_5/dashboard/dist/index.html, task_5/dashboard/src/index.js`

Check submission

×

#### 9\. Create a project using Webpack

Request a new review Close

Requirement success

Requirement fail

Code success

Code fail

Efficiency success

Efficiency fail

Text answer success

Text answer fail

Skipped - Previous check failed

### 10\. Install Babel

mandatory

-   Install Babel, and in `task_5/dashboard/.babelrc`, add the presets for `preset-env` and `preset-react`
-   Add a `babel-loader` to the Webpack configuration so you can support `js` and `jsx` files
-   Import the files that you wrote in the previous task. All the Javascript and React code should be within the `src` folder

At this point, running `webpack-dev-server` should correctly execute your code, and you should be able to see the dashboard like in the last task

**Repo:**

-   GitHub repository: `alx-react`
-   Directory: `0x01-react_intro`
-   File: `task_5/dashboard/.babelrc, task_5/dashboard/config/webpack.config.js`

### 11\. Reorganize the files

mandatory

Let’s reorganize the files in our project:

-   Every file related to the App, should be within a `App` folder
-   Every file related to the Notifications, should be within a `Notifications` folder
-   Every file related to the utils functions, should be within a `utils` folder
-   Every asset file should be within the `assets` folder
-   Set up the `favicon.ico` in the `dist` folder
-   Webpack config file should be within a `config` folder if it isn’t already

**Repo:**

-   GitHub repository: `alx-react`
-   Directory: `0x01-react_intro`
-   File: `task_5/dashboard/src/App/App.css, task_5/dashboard/src/App/App.js, task_5/dashboard/src/App/App.test.js, task_5/dashboard/src/Notifications/Notifications.css, task_5/dashboard/src/Notifications/Notifications.js, task_5/dashboard/src/Notifications/Notifications.test.js, task_5/dashboard/src/utils/utils.js, task_5/dashboard/src/utils/utils.test.js, task_5/dashboard/config/webpack.config.js, task_5/dashboard/src/assets/holberton-logo.jpg, task_5/dashboard/dist/favicon.ico`

Check submission

×

#### 11\. Reorganize the files

Request a new review Close

Requirement success

Requirement fail

Code success

Code fail

Efficiency success

Efficiency fail

Text answer success

Text answer fail

Skipped - Previous check failed

### 12\. Testing

mandatory

Install Jest and Enzyme to run your test suites

move the `setupTests.js` file to `config` folder if you have not already

**Requirements:**

-   Your `package.json` should have the two following scripts:

```
    "start": "webpack-dev-server --mode development --config config/webpack.config.js",
    "test": "jest"
```

-   Running the first script should start your dev server and build without any error
-   Running the second script should start your test suites and pass for each test

**Repo:**

-   GitHub repository: `alx-react`
-   Directory: `0x01-react_intro`
-   File: `task_5/dashboard/config/setupTests.js, task_5/dashboard/package.json`