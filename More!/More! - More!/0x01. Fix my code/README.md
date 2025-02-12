# 0x01. Fix my code

Debugging

-   Weight: 1
-   Project over - took place from May 2, 2024 7:00 AM to May 16, 2024 7:00 AM
-   Manual QA review was done on May 23, 2024 11:15 AM
-   An auto review will be launched at the deadline

#### In a nutshell…

-   **Manual QA review:** 0.0/0 mandatory & 0.0/14 optional
-   **Auto QA review:** 0.0/0 mandatory & 0.0/16 optional
-   **Altogether:**  **0.0%**
    -   Mandatory: no mandatory tasks
    -   Optional: 0.0%

**Overall comment:**

Project was failed automatically.

## Background Context

`Fix my code` is a new type of project, where we’ll jump into an existing code base and fix it!

Sometime you will know the language, sometime not.

Please download the repository [0x01-Fix\_My\_Code\_Challenge](https://intranet.alxswe.com/rltoken/H1D38vm3qtejhlFTuoxUrA "0x01-Fix_My_Code_Challenge") and use it as initial files for all solutions.

You should not recode everything, just fix it!

**This project is NOT mandatory** at all. It is 100% optional. Doing any part of this project will add a project grade of over 100% to your average. Your score won’t get hurt if you don’t do it, but if your current average is greater than your score on this project, your average might go down. Have fun!

## Requirements

### General

-   Allowed editors: `vi`, `vim`, `emacs`
-   All your files will be compiled on Ubuntu 14.04 LTS
-   All your files should end with a new line
-   A `README.md` file, at the root of the folder of the project is mandatory

## More Info

### Manual QA Review

**It is your responsibility to request a review for this project from a peer before the project’s deadline. If no peers have been reviewed, you should request a review from a TA or staff member.**

## Tasks

### 0\. Server status

#advanced

Score: 0.0% (Checks completed: 0.0%)

I just started a new Flask project and the first thing I’m putting in place is a route for the status of my API (super important for a load balancer implementation).

But I don’t know why it’s not working…

Could you look at it and fix it please?

My code is [here](https://intranet.alxswe.com/rltoken/vmpN5vUN4MtMna3lMEjTLA "here")

```
$ python -m api.v1.app 
 * Running on http://0.0.0.0:5000/ (Press CTRL+C to quit)
....
```

```
$ curl -XGET http://0.0.0.0:5000/api/v1/status
{
  "error": "Not found"
}
$
```

**Repo:**

-   GitHub repository: `Fix_My_Code_Challenge`
-   Directory: `0x01-challenge`
-   File: `status_server/`

Check submission

×

#### 0\. Server status

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

Mark submission : in progress... : an error occurred View results

×

#### 0\. Server status

##### Commit used:

-   **User:** \---
-   **URL:** Click here
-   **ID:** `---`
-   **Author:** \---
-   **Subject:** _\---_
-   **Date:** \---

### 1\. My square

#advanced

Score: 0.0% (Checks completed: 0.0%)

I love geometry!

Look [my square](https://github.com/alx-tools/0x01-Fix_My_Code_Challenge/blob/master/square.py "my square"), it’s perfect? No? Should I change something?

**Repo:**

-   GitHub repository: `Fix_My_Code_Challenge`
-   Directory: `0x01-challenge`
-   File: `square.py`

Check submission

×

#### 1\. My square

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

Mark submission : in progress... : an error occurred View results

×

#### 1\. My square

##### Commit used:

-   **User:** \---
-   **URL:** Click here
-   **ID:** `---`
-   **Author:** \---
-   **Subject:** _\---_
-   **Date:** \---

### 2\. Step 2: User model

#advanced

Score: 0.0% (Checks completed: 0.0%)

I’m running into a serious problem!

I just start my OOP project and nothing works…

Could you help me please? My code is [here](https://github.com/alx-tools/0x01-Fix_My_Code_Challenge/blob/master/user.py "here").

Thank you!

**Repo:**

-   GitHub repository: `Fix_My_Code_Challenge`
-   Directory: `0x01-challenge`
-   File: `user.py`

Check submission

×

#### 2\. Step 2: User model

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

Mark submission : in progress... : an error occurred View results

×

#### 2\. Step 2: User model

##### Commit used:

-   **User:** \---
-   **URL:** Click here
-   **ID:** `---`
-   **Author:** \---
-   **Subject:** _\---_
-   **Date:** \---

### 3\. Blog access

#advanced

Score: 0.0% (Checks completed: 0.0%)

I finished and deployed my Rails blog but people are contacting me because they can’t access any of my blog posts… Weird, it works for me…

Could you take a look and fix it? My code base is [here](https://intranet.alxswe.com/rltoken/vAycz2gysCRD7oMhut1Efw "here").

Also, when you’re done, could you add a new feature please?

I would like to add a boolean `online` for each `Post` object with a default value `true`. With this boolean, I will be able to hide/show some blog posts from the listing. I will also need a way to change this boolean in the `Post#edit` route. Could you do this for me?

Thank you!

**Repo:**

-   GitHub repository: `Fix_My_Code_Challenge`
-   Directory: `0x01-challenge`
-   File: `blog`

View results

×

#### 3\. Blog access

##### Commit used:

-   **User:** \---
-   **URL:** Click here
-   **ID:** `---`
-   **Author:** \---
-   **Subject:** _\---_
-   **Date:** \---

### 4\. Never leave the office

#advanced

Score: 0.0% (Checks completed: 0.0%)

I’m coming back from 2 weeks of holidays in France and when I arrived at the office, the first words from my marketing co-worker were: “Hi, how was your holiday? by the way, I think I broke the website…”

**WHAT???**

Ok, let’s jump on it and fix [it](https://intranet.alxswe.com/rltoken/LXMu_Aw1quVjCMM37EVL-g "it")!

Arf, I have also the pagination to fix… I didn’t have time before my break to look at it…

**Repo:**

-   GitHub repository: `Fix_My_Code_Challenge`
-   Directory: `0x01-challenge`
-   File: `react-blog`