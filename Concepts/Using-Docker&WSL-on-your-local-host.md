# Struggling with the sandbox? Try this: Using Docker & WSL on your local host

In this software engineering training, all projects are designed to be done in the Ubuntu 20.04 Linux environment.

There are several ways of acquiring an Ubuntu 20.04 Linux environment in case your [host operating system](https://lemp.io/what-is-a-host-operating-system-2/) is not one:

1. **Dual booting**: Install Linux alongside Windows on your computer, allowing you to choose which operating system to use at startup.
2. **Via Windows Subsystem for Linux (WSL)**: provides a compatibility layer that lets you run Linux binary executables natively on Windows. **`Recommended`**.
3. **Via Virtual Machine (VM)**: allows you to run multiple operating systems and applications on a single physical machine simultaneously.
4. **Via Linux Docker containers**: **`Recommended`**.

Whichever method you choose to obtain a Linux working environment for yourself is okay, We recommend using docker for its flexibility, lightweight, and ease of use. You can use docker to create a lightweight Linux environment that is isolated from the rest of your computer.


# What is Docker?
Docker is a containerization platform that allows you to package your code and dependencies into isolated containers.

# What are containers?
Containers are lightweight, standalone, executable packages of software that include everything needed to run an application: **`code`**, **`runtime`**, **`system tools`**, **`system libraries`**, and **`settings`**.

