# Struggling with the sandbox? Try this: Using Docker & WSL on your local host
>
> In this software engineering training, all projects are designed to be done in the Ubuntu 20.04 Linux environment.
> 
> There are several ways of acquiring an Ubuntu 20.04 Linux environment in case your [host operating system](https://lemp.io/what-is-a-host-operating-system-2/) is not one:
> 
> 1. **Dual booting**: Install Linux alongside Windows on your computer, allowing you to choose which operating system to use at startup.
> 2. **Via Windows Subsystem for Linux (WSL)**: provides a compatibility layer that lets you run Linux binary executables natively on Windows. **`Recommended`**.
> 3. **Via Virtual Machine (VM)**: allows you to run multiple operating systems and applications on a single physical machine simultaneously.
> 4. **Via Linux Docker containers**: **`Recommended`**.
> 
> Whichever method you choose to obtain a Linux working environment for yourself is okay, We recommend using docker for its flexibility, lightweight, and ease of use. You can use docker to create a lightweight Linux > environment that is isolated from the rest of your computer.


# What is Docker?
Docker is a containerization platform that allows you to package your code and dependencies into isolated containers.

# What are containers?
Containers are lightweight, standalone, executable packages of software that include everything needed to run an application: **`code`**, **`runtime`**, **`system tools`**, **`system libraries`**, and **`settings`**.

# How do Docker containers work?
> When you run a Docker container, Docker creates a lightweight virtual machine that runs your application. The virtual machine is isolated from the host machine (regardless of the type of operating system you use) and from other containers, so each container has its own filesystem, network, and process space.

# Docker containers offer many benefits, including:
>
> * **Portability**: Docker containers can be run on any machine with Docker installed, making them easy to deploy and share.
> * **Reproducibility**: Docker containers are reproducible, meaning you can create the exact same environment on any machine. This helps debug and test your code.
> * **Isolation**: Docker containers isolate your applications from each other and the host machine, helping to prevent conflicts and security vulnerabilities.
> * **Efficiency**: Docker containers are lightweight and efficient, taking up less space and resources than traditional virtual machines.
> * **Scalability**: Docker containers are scalable, making it easy to add or remove containers as needed

# What is Docker used for?
> There are many ways to use Docker, but some of the most common tasks include:
> * **Building Docker images**: A Docker image is a blueprint for a Docker container. You can build a Docker image from a Dockerfile, which is a text file that describes the contents of the image.
> * **Running Docker containers**: Once you have built a Docker image, you can run it as a Docker container. To do this, you use the **`docker run`** command.
> * **Managing Docker containers**: Once you have run a Docker container, you can manage it using the **`docker ps`**, **`docker stop`**, and **`docker start`** commands.
> * **Networking Docker containers**: Docker containers can communicate with each other using Docker networks. You can create a Docker network using the **`docker network create`** command.
> * **Storing Docker images**: Docker images can be stored in Docker registries. You can push and pull Docker images from Docker registries using the **`docker push`** and **`docker pull`** commands.

# Setting up a development environment in Docker
> Your development environment is the hardware and software you use to write code. As a developer, it is usually your responsibility to set up your environment based on the work you will be doing at your new job. As tasks change, you’ll often need to update or reconfigure your environment for new software, packages, or versions.
> 
> Please follow the appropriate guide (PC, Mac, or Linux) to set up your development environment on your operating system.
> 
> We’re always here to help, but it is your responsibility to configure your development machine.
> 
> In order to be successful in this program, your computer needs to be set up in a very specific way. If the setup is correct, you will not waste your time fighting the set up of tools and applications, so you can concentrate on the new material you are learning.
> 
> First, head to the guide for your particular operating system. This will give you an overview of anything in particular you should be aware of for your system.

## 1. Docker Installation on Windows
[![Watch the video](/Concepts/img/Screenshot_2024-11-19_13-55-37.png)](https://www.youtube.com/watch?v=rATNU0Fr8zs)
