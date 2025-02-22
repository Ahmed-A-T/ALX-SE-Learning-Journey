# Attack is the best defense

DevOpsScriptingHacking

-   Weight: 1
-   Project over - took place from Apr 15, 2024 6:00 AM to Apr 29, 2024 7:00 AM
-   An auto review will be launched at the deadline

#### In a nutshell…

-   **Auto QA review:** 1.0/1 mandatory & 4.0/4 optional
-   **Altogether:**  **200.0%**
    -   Mandatory: 100.0%
    -   Optional: 100.0%
    -   Calculation:  100.0% + (100.0% \* 100.0%)  == **200.0%**

### Concepts

_For this project, we expect you to look at these concepts:_

-   [Network basics](https://intranet.alxswe.com/concepts/33)
-   [Docker](https://intranet.alxswe.com/concepts/65)

## Background Context

**This project is NOT mandatory** at all. It is 100% optional. Doing any part of this project will add a project grade of over 100% to your average. Your score won’t get hurt if you don’t do it, but if your current average is greater than your score on this project, your average might go down. Have fun!

## Resources

**Read or watch**:

-   [Network sniffing](https://intranet.alxswe.com/rltoken/YsZo4SWD_Q88cXH1hvZEIw "Network sniffing")
-   [ARP spoofing](https://intranet.alxswe.com/rltoken/RK-4WtV0YCSETDSG9lr1hw "ARP spoofing")
-   [Connect to SendGrid’s SMTP relay using telnet](https://intranet.alxswe.com/rltoken/Zs7WEFw3CN5MBTMi4HnAFA "Connect to SendGrid's SMTP relay using telnet")
-   [What is Docker and why is it popular?](https://intranet.alxswe.com/rltoken/56VrRmkBHFq2OKLM_FQA6w "What is Docker and why is it popular?")
-   [Dictionary attack](https://intranet.alxswe.com/rltoken/dbAwbf71VVSCTOfeR1NRmg "Dictionary attack")

**man or help**:

-   `tcpdump`
-   `hydra`
-   `telnet`
-   `docker`

## Tasks

### 0\. ARP spoofing and sniffing unencrypted traffic

#advanced

Score: 100.0% (Checks completed: 100.0%)

![](Project%20Attack%20is%20the%20best%20defense%20%20Cairo%20Intranet/01c5a1e3f29d290b188d34be5cf534d3255058a7.png)

Security is a vast topic, and network security is an important part of it. A lot of very sensitive information goes over networks that are used by many people, and some people might have bad intentions. Traffic going through a network can be intercepted by a malicious machine pretending to be another network device. Once the traffic is redirected to the malicious machine, the hacker can keep a copy of it and analyze it for potential interesting information. It is important to note that the traffic must then be forwarded to the actual device it was supposed to go (so that users and the system keep going as if nothing happened).

Any information that is not encrypted and sniffed by an attacker can be seen by the attacker - that could be your email password or credit card information. While today’s network security is much stronger than it used to be, there are still some legacy systems that are using unencrypted communication means. A popular one is `telnet`.

In this project, we will not go over ARP spoofing, but we’ll start by sniffing unencrypted traffic and getting information out of it.

[Sendgrid offers](https://intranet.alxswe.com/rltoken/3QMTkzwhiBQgRSLVpKwAyw "Sendgrid offers") is an emailing service that provides state of the art secure system to send emails, but also supports a legacy unsecured way: `telnet`. You can create an account for free, which is what I did, and send an email using `telnet`:

```
sylvain@ubuntu$ telnet smtp.sendgrid.net 587
Trying 167.89.121.145...
Connected to smtp.sendgrid.net.
Escape character is '^]'.
220 SG ESMTP service ready at ismtpd0013p1las1.sendgrid.net
EHLO ismtpd0013p1las1.sendgrid.net
250-smtp.sendgrid.net
250-8BITMIME
250-PIPELINING
250-SIZE 31457280
250-STARTTLS
250-AUTH PLAIN LOGIN
250 AUTH=PLAIN LOGIN
auth login           
334 VXNlcm5hbWU6
VGhpcyBpcyBteSBsb2dpbg==
334 UGFzc3dvcmQ6
WW91IHJlYWxseSB0aG91Z2h0IEkgd291bGQgbGV0IG15IHBhc3N3b3JkIGhlcmU/ISA6RA==
235 Authentication successful
mail from: sylvain@kalache.fr
250 Sender address accepted
rcpt to: julien@google.com
250 Recipient address accepted
data
354 Continue
To: Julien
From: Sylvain
Subject: Hello from the insecure world

I am sending you this email from a Terminal.
.
250 Ok: queued as Aq1zhMM3QYeEprixUiFYNg
quit
221 See you later
Connection closed by foreign host.
sylvain@ubuntu$ 
```

I wrote the script `user_authenticating_into_server` that performs the authentication steps that I just showed above. Your mission is to execute `user_authenticating_into_server` locally on your machine and, using `tcpdump`, sniff the network to find my password. Once you find it, paste the password in your answer file. **This script will not work on a Docker container or Mac OS, use your Ubuntu vagrant machine or any other Linux machine.**

You can download the script `user_authenticating_into_server` [here](https://intranet.alxswe.com/rltoken/GE_FoAUArlVccQlt7CuBGA "here")

**DISCLAIMER**: you will probably see `Authentication failed: Bad username / password` in the `tcpdump` trace. It’s normal, we deleted the user to our Sendgrid account. You can’t verify the password found via Sendgrid, only the correction system can!

**Repo:**

-   GitHub repository: `alx-system_engineering-devops`
-   Directory: `attack_is_the_best_defense`
-   File: `0-sniffing`

Check submission

×

#### 0\. ARP spoofing and sniffing unencrypted traffic

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

#### 0\. ARP spoofing and sniffing unencrypted traffic

##### Commit used:

-   **User:** \---
-   **URL:** Click here
-   **ID:** `---`
-   **Author:** \---
-   **Subject:** _\---_
-   **Date:** \---

### 1\. Dictionary attack

#advanced

Score: 100.0% (Checks completed: 100.0%)

Password-based authentication systems can be easily broken by using a dictionary attack (you’ll have to find your own password dictionary). Let’s try it on an SSH account.

-   Install Docker on your machine Ubuntu
-   Pull and run the Docker image `sylvainkalache/264-1` with the command `docker run -p 2222:22 -d -ti sylvainkalache/264-1`
-   Find a password dictionary (you might need multiple of them)
-   Install and use `hydra` to try to brute force the account `sylvain` via SSH on the Docker container
-   Because the Docker container is running locally, `hydra` should access the SSH account via IP `127.0.0.1` and port `2222`
-   Hint: the password is 11 characters long

Once you found the password, share it in your answer file.

**Repo:**

-   GitHub repository: `alx-system_engineering-devops`
-   Directory: `attack_is_the_best_defense`
-   File: `1-dictionary_attack`