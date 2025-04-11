# Setting up your local coding environment

# Concepts
> 
> _For this project, we expect you to look at this concept:_
> 
> -   [Struggling with the sandbox? Try this: Using Docker & WSL on your local host](https://github.com/Ahmed-A-T/ALX-SE-Learning-Journey/blob/main/Concepts/Using-Docker%26WSL-on-your-local-host.md)

> Most of the projects in this program are supposed to be done in a Linux (Ubuntu) environment.
> 
> For that matter, you will need to set up a similar environment for that purpose. It is for this reason  
> that we have the sandboxes but to be able to work locally even when you do not have internet  
> access, we highly recommend that you set up your own local coding environment.
> 
> This project is therefore a guide for you to set up the necessary coding environment irrespective  
of the operating system that you are using. Once you have set this up, you can stop using the  
Sandboxes and just use your local environment.

## Guide to running Ubuntu 20.04 on different operating systems
> 
> **Windows** You have **three** options for running Ubuntu on Windows:
> 
> -   **WSL**: **`WSL (Windows Subsystem for Linux)`** is a feature that allows you to run Linux distributions natively on Windows.  
>     WSL is the easiest option to set up and use, and it provides a good introduction to Ubuntu.  
>     
> -   **Vagrant**: **`Vagrant`** is a tool for creating and managing virtual machines. It is a good option if you need to run Ubuntu  
>     for development or testing purposes, as it allows you to create isolated environments that are easy to replicate and share.  
>     
> -   **Docker**: **`Docker`** is a tool for containerizing applications. It is a good option if you need to run Ubuntu for specific tasks,  
>     such as running a web server or database. But also remember using docker will need an installation of WSL.  
>     
> 
> **macOS** If you have:
> 
> -   a Mac with an **Apple Silicon chip**, you can only use Docker to run **`Ubuntu`**.
> -   a Mac with an **Intel chip**, you can use **`Vagrant`** or **`Docker`**.
> 
> This project introduces you to all the available options. Go through them and choose the one that works for you.

### Vagrant - or - how to code in your local computer
> 
> Sandboxes are great, but you can also do your ALX assessments on your local computer - having a virtual machine (VM) is the perfect tool for that.
> 
> Let’s dig into **Vagrant** today!
> 
> Also:
> 
> -   This project **can’t be done in Sandboxes** - it can be done only in your local computer.

# Resources

## **Read or watch**:
> -   [Virtual machine](https://en.wikipedia.org/wiki/Virtual_machine "Virtual machine")
> -   [man uname](https://linux.die.net/man/1/uname "man uname")

# Learning Objectives
> At the end of this project, you are expected to be able to [explain to anyone](https://fs.blog/feynman-learning-technique/?fbclid=IwAR2K5_BGPVo0QjJXkOIIqNsqcXK4lTskPWJvA0asKQIGtCPWaQBdKmj1Ztg "explain to anyone"), **without the help of Google**:

## General
> -   What is a virtual machine
> -   What is Vagrant
> -   Who wrote Vagrant
> -   What is Ubuntu
> -   What does “Ubuntu” mean
> -   How to use VMs with Vagrant
> -   What does the command **`uname`** do

# Requirements

## General
> 
> -   A **`README.md`** file at the root of the repo, containing a description of the repository
> -   A **`README.md`** file, at the root of the folder of _this_ project (i.e. **`0x00-vagrant`**), describing what this project is about

# More Info

## Install **`git`**
> 
> If **`git`** is not already installed on your terminal:
> 
>> ```
>> $ sudo apt-get update
>> $ sudo apt-get upgrade
>> $ sudo apt-get install git
>> ```

## Basic usage
> 
> At the end of this project you should be able to reproduce and understand these command lines:
> 
>> ```
>> $ git clone &lt;repo&gt;
>> $ touch test
>> $ git add test
>> $ git commit -m "Initial commit"
>> $ git push origin main
>> ```

## Warning
> 
> This project **can’t be done in Sandboxes** - it can be done only in your local computer. Please refer to our concept pages for your operating system.

---

# Tasks

## 0\. Create and setup your Git and GitHub account
> You will need Git for this project, you might have to [install it](https://git-scm.com/book/en/v2/Getting-Started-Installing-Git "install it") on your computer if it’s not done yet.
> 
> -   Configure your basic info (name, email) on your local machine – they will be part of your commits. [Tips](https://git-scm.com/book/en/v2/Getting-Started-First-Time-Git-Setup "Tips")
> 
> On [GitHub.com](https://github.com/ "GitHub.com"):
> 
> -   Using the graphic interface on the website, create the repository (if it’s not done yet)
>     -   Description: **`This is my first repository as a full-stack engineer`**
>     -   Public repo: **`zero_day`**
>     -   No **`README`**, **`.gitignore`**, or license
> 
> On your computer, open a terminal and do the following:
> 
> -   Navigate to your home directory. [Tips](https://linuxconfig.org/single-linux-command-to-return-to-home-directory "Tips")
> -   Create a directory **`zero_day`**. [Tips](https://help.ubuntu.com/community/Beginners/BashScripting "Tips")
> -   Navigate to this new directory. [Tips](https://askubuntu.com/questions/232442/how-do-i-navigate-between-directories-in-terminal "Tips")
> -   Initialize git and add the remote origin
> -   Create a file **`README.md`** with Emacs (or other command line editors) and write a small [Markdown](https://wordpress.com/support/markdown-quick-reference/ "Markdown") text to present this project. **This file is mandatory in projects**
> -   Add this new file to git, commit the change with this message “My first commit” and push to the remote server / origin (Note: You will probably need to set your login/password to push to the remote server)
> 
> Good job!
> 
> You pushed your first file in your **first repository** of the **first task** of your **first School project**.

### **Repo:**

-   GitHub repository: ****`zero_day`****
-   File: ****`README.md`****

---

## 1\. Hello Ubuntu
> Inside the **`zero_day`** repo, create a new directory called **`0x00-vagrant`**. Add a **`README.md`** file to this directory.
> 
> **`ssh`** into your Ubuntu VM. What does the command **`uname`** print when you run it without any option?
> 
> Type your answer into a file in the **`0x00-vagrant`** directory and push it to GitHub. Name your file accordingly as shown below.

### **Repo:**

-   GitHub repository: **`zero_day`**
-   Directory: **`0x00-vagrant`**
-   File: **`0-hello_ubuntu`**

---
