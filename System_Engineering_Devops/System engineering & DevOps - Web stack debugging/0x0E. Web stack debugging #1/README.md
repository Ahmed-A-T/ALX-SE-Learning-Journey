# 0x0E. Web stack debugging #1

DevOpsSysAdminScriptingDebugging

-   Weight: 1
-   Project over - took place from Apr 29, 2024 7:00 AM to May 3, 2024 7:00 AM
-   An auto review will be launched at the deadline

#### In a nutshell…

-   **Auto QA review:** 3.0/3 mandatory & 3.0/3 optional
-   **Altogether:**  **200.0%**
    -   Mandatory: 100.0%
    -   Optional: 100.0%
    -   Calculation:  100.0% + (100.0% \* 100.0%)  == **200.0%**

### Concepts

_For this project, we expect you to look at these concepts:_

-   [Network basics](https://intranet.alxswe.com/concepts/33)
-   [Web stack debugging](https://intranet.alxswe.com/concepts/68)

![](Project%200x0E.%20Web%20stack%20debugging%201%20%20Cairo%20Intranet/B4eeypV.jpg)

## Requirements

### General

-   Allowed editors: `vi`, `vim`, `emacs`
-   All your files will be interpreted on Ubuntu 20.04 LTS
-   All your files should end with a new line
-   A `README.md` file at the root of the folder of the project is mandatory
-   All your Bash script files must be executable
-   Your Bash scripts must pass `Shellcheck` without any error
-   Your Bash scripts must run without error
-   The first line of all your Bash scripts should be exactly `#!/usr/bin/env bash`
-   The second line of all your Bash scripts should be a comment explaining what is the script doing
-   You are not allowed to use `wget`

## Tasks

### 0\. Nginx likes port 80

mandatory

Score: 100.0% (Checks completed: 100.0%)

Using your debugging skills, find out what’s keeping your Ubuntu container’s Nginx installation from listening on port `80`. Feel free to install whatever tool you need, start and destroy as many containers as you need to debug the issue. Then, write a Bash script with the minimum number of commands to automate your fix.

Requirements:

-   Nginx must be running, and listening on port `80` of all the server’s active IPv4 IPs
-   Write a Bash script that configures a server to the above requirements

```
root@966c5664b21f:/# curl 0:80
curl: (7) Failed to connect to 0 port 80: Connection refused
root@966c5664b21f:/#
root@966c5664b21f:/# ./0-nginx_likes_port_80 &gt; /dev/null 2&amp;&gt;1
root@966c5664b21f:/#
root@966c5664b21f:/# curl 0:80
&lt;!DOCTYPE html&gt;
&lt;html&gt;
&lt;head&gt;
&lt;title&gt;Welcome to nginx!&lt;/title&gt;
&lt;style&gt;
    body {
        width: 35em;
        margin: 0 auto;
        font-family: Tahoma, Verdana, Arial, sans-serif;
    }
&lt;/style&gt;
&lt;/head&gt;
&lt;body&gt;
&lt;h1&gt;Welcome to nginx!&lt;/h1&gt;
&lt;p&gt;If you see this page, the nginx web server is successfully installed and
working. Further configuration is required.&lt;/p&gt;

&lt;p&gt;For online documentation and support please refer to
&lt;a href="http://nginx.org/"&gt;nginx.org&lt;/a&gt;.&lt;br/&gt;
Commercial support is available at
&lt;a href="http://nginx.com/"&gt;nginx.com&lt;/a&gt;.&lt;/p&gt;

&lt;p&gt;&lt;em&gt;Thank you for using nginx.&lt;/em&gt;&lt;/p&gt;
&lt;/body&gt;
&lt;/html&gt;
root@966c5664b21f:/#
```

**Repo:**

-   GitHub repository: `alx-system_engineering-devops`
-   Directory: `0x0E-web_stack_debugging_1`
-   File: `0-nginx_likes_port_80`

Check submission

×

#### 0\. Nginx likes port 80

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

Get a sandbox View results

×

#### 0\. Nginx likes port 80

##### Commit used:

-   **User:** \---
-   **URL:** Click here
-   **ID:** `---`
-   **Author:** \---
-   **Subject:** _\---_
-   **Date:** \---

### 1\. Make it sweet and short

#advanced

Score: 100.0% (Checks completed: 100.0%)

Using what you did for task #0, make your fix short and sweet.

Requirements:

-   Your Bash script must be 5 lines long or less
-   There must be a new line at the end of the file
-   You must respect usual Bash script requirements
-   You cannot use `;`
-   You cannot use `&&`
-   You cannot use `wget`
-   You cannot execute your previous answer file (Do not include the name of the previous script in this one)
-   `service` (init) must say that `nginx` is not running ← for real

```
root@966c5664b21f:/# curl 0:80
curl: (7) Failed to connect to 0 port 80: Connection refused
root@966c5664b21f:/#
root@966c5664b21f:/# cat -e 1-debugging_made_short | wc -l
5
root@966c5664b21f:/# ./1-debugging_made_short
root@966c5664b21f:/# curl 0:80
&lt;!DOCTYPE html&gt;
&lt;html&gt;
&lt;head&gt;
&lt;title&gt;Welcome to nginx!&lt;/title&gt;
&lt;style&gt;
    body {
        width: 35em;
        margin: 0 auto;
        font-family: Tahoma, Verdana, Arial, sans-serif;
    }
&lt;/style&gt;
&lt;/head&gt;
&lt;body&gt;
&lt;h1&gt;Welcome to nginx!&lt;/h1&gt;
&lt;p&gt;If you see this page, the nginx web server is successfully installed and
working. Further configuration is required.&lt;/p&gt;

&lt;p&gt;For online documentation and support please refer to
&lt;a href="http://nginx.org/"&gt;nginx.org&lt;/a&gt;.&lt;br/&gt;
Commercial support is available at
&lt;a href="http://nginx.com/"&gt;nginx.com&lt;/a&gt;.&lt;/p&gt;

&lt;p&gt;&lt;em&gt;Thank you for using nginx.&lt;/em&gt;&lt;/p&gt;
&lt;/body&gt;
&lt;/html&gt;
root@966c5664b21f:/#
root@966c5664b21f:/# service nginx status
 * nginx is not running
root@966c5664b21f:/# 
```

**Repo:**

-   GitHub repository: `alx-system_engineering-devops`
-   Directory: `0x0E-web_stack_debugging_1`
-   File: `1-debugging_made_short`