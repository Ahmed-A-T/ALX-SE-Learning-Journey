# 0x06. Regular expression

RegexDevOps

-   Weight: 1
-   Project over - took place from Feb 27, 2024 6:00 AM to Feb 28, 2024 6:00 AM
-   An auto review will be launched at the deadline

#### In a nutshell…

-   **Auto QA review:** 0.0/24 mandatory & 0.0/9 optional
-   **Altogether:**  **0.0%**
    -   Mandatory: 0.0%
    -   Optional: 0.0%
    -   Calculation:  0.0% + (0.0% \* 0.0%)  == **0.0%**

### Concepts

_For this project, we expect you to look at this concept:_

-   [Regular Expression](https://intranet.alxswe.com/concepts/29)

## Background Context

For this project, you have to build your regular expression using Oniguruma, a regular expression library that which is used by Ruby by default. Note that other regular expression libraries sometimes have different properties.

Because the focus of this exercise is to play with regular expressions (regex), here is the Ruby code that you should use, just replace the regexp part, meaning the code in between the `//`:

```
sylvain@ubuntu$ cat example.rb
#!/usr/bin/env ruby
puts ARGV[0].scan(/127.0.0.[0-9]/).join
sylvain@ubuntu$
sylvain@ubuntu$ ./example.rb 127.0.0.2
127.0.0.2
sylvain@ubuntu$ ./example.rb 127.0.0.1
127.0.0.1
sylvain@ubuntu$ ./example.rb 127.0.0.a
```

## Resources

**Read or watch**:

-   [Regular expressions - basics](https://intranet.alxswe.com/rltoken/rtBWhqR4L-6p9PRwzlNLug "Regular expressions - basics")
-   [Regular expressions - advanced](https://intranet.alxswe.com/rltoken/grJS5VDnUKBYwDpBTM7yCg "Regular expressions - advanced")
-   [Rubular is your best friend](https://intranet.alxswe.com/rltoken/RGkVuw1lZ_hoCCbLsiOAhg "Rubular is your best friend")
-   [Use a regular expression against a problem: now you have 2 problems](https://intranet.alxswe.com/rltoken/Vwm8lpMUGa4x_FBtlyUQ8g "Use a regular expression against a problem: now you have 2 problems")
-   [Learn Regular Expressions with simple, interactive exercises](https://intranet.alxswe.com/rltoken/XsQ6rzS1uy-E6bnswUqIKg "Learn Regular Expressions with simple, interactive exercises")

## Requirements

### General

-   Allowed editors: `vi`, `vim`, `emacs`
-   All your files will be interpreted on Ubuntu 20.04 LTS
-   All your files should end with a new line
-   A `README.md` file, at the root of the folder of the project, is mandatory
-   All your Bash script files must be executable
-   The first line of all your Bash scripts should be exactly `#!/usr/bin/env ruby`
-   All your regex must be built for the Oniguruma library

### Quiz questions

**Great!** You've completed the quiz successfully! Keep going! (Show quiz)

## Tasks

### 0\. Simply matching School

mandatory

Score: 0.0% (Checks completed: 0.0%)

![](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/medias/2020/9/ec65557f0da1fbfbff6659413885e4d4822f5b1d.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20250211%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20250211T185629Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=3d0121eb30070d4020d3aee7679e74d4541cb6bbaae16207100c7c40f222a9b0)

Requirements:

-   The regular expression must match `School`
-   Using the project instructions, create a Ruby script that accepts one argument and pass it to a regular expression matching method

Example:

```
sylvain@ubuntu$ ./0-simply_match_school.rb School | cat -e
School$
sylvain@ubuntu$ ./0-simply_match_school.rb "Best School" | cat -e
School$
sylvain@ubuntu$ ./0-simply_match_school.rb "School Best School" | cat -e
SchoolSchool$
sylvain@ubuntu$ ./0-simply_match_school.rb "Grace Hopper" | cat -e
$
```

**Repo:**

-   GitHub repository: `alx-system_engineering-devops`
-   Directory: `0x06-regular_expressions`
-   File: `0-simply_match_school.rb`

Check submission Mark submission Get a sandbox View results

### 1\. Repetition Token #0

mandatory

Score: 0.0% (Checks completed: 0.0%)

![](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/medias/2020/9/e7db3c377d46453588fc84f3a975661d142fee91.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20250211%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20250211T185629Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=b8bd71a8a2056c824fa04ac7e507e04d3ae6a65d5b3aa242cb60448e7972ac20)

Requirements:

-   Find the regular expression that will match the above cases
-   Using the project instructions, create a Ruby script that accepts one argument and pass it to a regular expression matching method

**Repo:**

-   GitHub repository: `alx-system_engineering-devops`
-   Directory: `0x06-regular_expressions`
-   File: `1-repetition_token_0.rb`

Check submission Mark submission Get a sandbox View results

### 2\. Repetition Token #1

mandatory

Score: 0.0% (Checks completed: 0.0%)

![](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/medias/2020/9/c59ff11db195d5cf17d1790a5141ae2f234786d2.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20250211%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20250211T185629Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=5ffa48ea73a4fbb2e857f5beed5284d36104b44f5f6d47d7f6523179807e6de8)

Requirements:

-   Find the regular expression that will match the above cases
-   Using the project instructions, create a Ruby script that accepts one argument and pass it to a regular expression matching method

**Repo:**

-   GitHub repository: `alx-system_engineering-devops`
-   Directory: `0x06-regular_expressions`
-   File: `2-repetition_token_1.rb`

Check submission Mark submission Get a sandbox View results

### 3\. Repetition Token #2

mandatory

Score: 0.0% (Checks completed: 0.0%)

![](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/medias/2020/9/3b6bf4aeca6a0c2de584e7f5d68d11eef57ce205.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20250211%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20250211T185629Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=e1bbbdeb18ccdcc00381d3e9d9163b335d0c79f12057b1be3b2a0547cc1a4bcd)

Requirements:

-   Find the regular expression that will match the above cases
-   Using the project instructions, create a Ruby script that accepts one argument and pass it to a regular expression matching method

**Repo:**

-   GitHub repository: `alx-system_engineering-devops`
-   Directory: `0x06-regular_expressions`
-   File: `3-repetition_token_2.rb`

Check submission Mark submission Get a sandbox View results

### 4\. Repetition Token #3

mandatory

Score: 0.0% (Checks completed: 0.0%)

![](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/medias/2020/9/f8dbcb9cf5ae569a8645027dc46e81cb372ce28e.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20250211%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20250211T185629Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=e4c228580570c6086b7efec3630bf2653593e40df1bf1c021dda4a7dbb72bb92)

Requirements:

-   Find the regular expression that will match the above cases
-   Using the project instructions, create a Ruby script that accepts one argument and pass it to a regular expression matching method
-   Your regex should not contain square brackets

**Repo:**

-   GitHub repository: `alx-system_engineering-devops`
-   Directory: `0x06-regular_expressions`
-   File: `4-repetition_token_3.rb`

Check submission Mark submission Get a sandbox View results

### 5\. Not quite HBTN yet

mandatory

Score: 0.0% (Checks completed: 0.0%)

Requirements:

-   The regular expression must be exactly matching a string that starts with `h` ends with `n` and can have any single character in between
-   Using the project instructions, create a Ruby script that accepts one argument and pass it to a regular expression matching method

Example:

```
sylvain@ubuntu$ ./5-beginning_and_end.rb 'hn' | cat -e
$
sylvain@ubuntu$ ./5-beginning_and_end.rb 'hbn' | cat -e
hbn$
sylvain@ubuntu$ ./5-beginning_and_end.rb 'hbtn' | cat -e
$
sylvain@ubuntu$ ./5-beginning_and_end.rb 'h8n' | cat -e
h8n$
sylvain@ubuntu$
$
```

**Repo:**

-   GitHub repository: `alx-system_engineering-devops`
-   Directory: `0x06-regular_expressions`
-   File: `5-beginning_and_end.rb`

Check submission Mark submission Get a sandbox View results

### 6\. Call me maybe

mandatory

Score: 0.0% (Checks completed: 0.0%)

This task is brought to you by a professional advisor [Neha Jain](https://intranet.alxswe.com/rltoken/Od2JNuPNuMoHFlaG4v3vNA "Neha Jain"), Senior Software Engineer at LinkedIn.

Requirement:

-   The regular expression must match a 10 digit phone number

Example:

```
sylvain@ubuntu$ ./6-phone_number.rb 4155049898 | cat -e
4155049898$
sylvain@ubuntu$ ./6-phone_number.rb " 4155049898" | cat -e
$
sylvain@ubuntu$ ./6-phone_number.rb "415 504 9898" | cat -e
$
sylvain@ubuntu$ ./6-phone_number.rb "415-504-9898" | cat -e
$
sylvain@ubuntu$
```

**Repo:**

-   GitHub repository: `alx-system_engineering-devops`
-   Directory: `0x06-regular_expressions`
-   File: `6-phone_number.rb`

Check submission Mark submission Get a sandbox View results

### 7\. OMG WHY ARE YOU SHOUTING?

mandatory

Score: 0.0% (Checks completed: 0.0%)

![](https://intranet.alxswe.com/images/contents/sysadmin/projects/78/shouting.jpg)

Requirement:

-   The regular expression must be only matching: capital letters

Example:

```
sylvain@ubuntu$ ./7-OMG_WHY_ARE_YOU_SHOUTING.rb "I realLy hOpe VancouvEr posseSs Yummy Soft vAnilla Dupper Mint Ice Nutella cream" | cat -e
ILOVESYSADMIN$
sylvain@ubuntu$ ./7-OMG_WHY_ARE_YOU_SHOUTING.rb "WHAT do you SAY?" | cat -e
WHATSAY$
sylvain@ubuntu$ ./7-OMG_WHY_ARE_YOU_SHOUTING.rb "cannot read you" | cat -e
$
sylvain@ubuntu$
```

**Repo:**

-   GitHub repository: `alx-system_engineering-devops`
-   Directory: `0x06-regular_expressions`
-   File: `7-OMG_WHY_ARE_YOU_SHOUTING.rb`

Check submission Mark submission Get a sandbox View results

### 8\. Textme

#advanced

Score: 0.0% (Checks completed: 0.0%)

This exercise was prepared for you by [Guillaume Plessis](https://intranet.alxswe.com/rltoken/q-XxV5dl95Qn0BBR7vvg4g "Guillaume Plessis"), VP of Infrastructure at TextMe. It is something he uses daily. You can thank Guillaume for his project [on Twitter](https://intranet.alxswe.com/rltoken/aJWBtfO3wMoT9QvoSt0dUA "on Twitter").

For this task, you’ll be taking over Guillaume’s responsibilities: one afternoon, a TextMe VoIP Engineer comes to you and explains she wants to run some statistics on the TextMe app text messages transactions.

Requirements:

-   Your script should output: `[SENDER],[RECEIVER],[FLAGS]`
    -   The sender phone number or name (including country code if present)
    -   The receiver phone number or name (including country code if present)
    -   The flags that were used

You can find a [\[log file here\]](http://intranet-projects-files.s3.amazonaws.com/holbertonschool-sysadmin_devops/78/text_messages.log).

Example:

```
$ ./100-textme.rb 'Feb 1 11:00:00 ip-10-0-0-11 mdr: 2016-02-01 11:00:00 Receive SMS [SMSC:SYBASE1] [SVC:] [ACT:] [BINF:] [FID:] [from:Google] [to:+16474951758] [flags:-1:0:-1:0:-1] [msg:127:This planet has - or rather had - a problem, which was this: most of the people on it were unhappy for pretty much of the time.] [udh:0:]'
Google,+16474951758,-1:0:-1:0:-1
$
$
$ ./100-textme.rb 'Feb 1 11:00:00 ip-10-0-64-10 mdr: 2016-02-01 11:00:00 Receive SMS [SMSC:SYBASE2] [SVC:] [ACT:] [BINF:] [FID:] [from:+17272713208] [to:+19172319348] [flags:-1:0:-1:0:-1] [msg:136:Orbiting this at a distance of roughly ninety-two million miles is an utterly insignificant little blue green planet whose ape-descended] [udh:0:]'
+17272713208,+19172319348,-1:0:-1:0:-1
$
$ ./100-textme.rb 'Feb 1 11:00:00 ip-10-0-64-11 mdr: 2016-02-01 11:00:00 Sent SMS [SMSC:SYBASE1] [SVC:backendtextme] [ACT:] [BINF:] [FID:] [from:18572406905] [to:14022180266] [flags:-1:0:-1:-1:-1] [msg:136:Far out in the uncharted backwaters of the unfashionable end of the western spiral arm of the Galaxy lies a small unregarded yellow sun.] [udh:0:]'
18572406905,14022180266,-1:0:-1:-1:-1
$
$
$ ./100-textme.rb 'Feb 1 11:00:00 ip-10-0-64-11 mdr: 2016-02-01 11:00:00 Sent SMS [SMSC:SYBASE1] [SVC:backendtextme] [ACT:] [BINF:] [FID:] [from:12392190384] [to:19148265919] [flags:-1:0:-1:-1:-1] [msg:99:life forms are so amazingly primitive that they still think digital watches are a pretty neat idea.] [udh:0:]'
12392190384,19148265919,-1:0:-1:-1:-1
$

```

**Repo:**

-   GitHub repository: `alx-system_engineering-devops`
-   Directory: `0x06-regular_expressions`
-   File: `100-textme.rb`
