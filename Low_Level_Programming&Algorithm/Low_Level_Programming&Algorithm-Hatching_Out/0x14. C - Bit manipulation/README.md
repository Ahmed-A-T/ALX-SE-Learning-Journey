# 0x14. C - Bit manipulation

![1](/Concepts/img/bitwise.png)

# Resources
## Read or watch:
> * [Operators in C - Part 6](https://www.youtube.com/watch?feature=shared&v=egUyaWtsQc0)
> * [Operators in C - Part 7 (Bitwise Operators-II)](https://www.youtube.com/watch?feature=shared&v=LP0acaj3ZLE)
> * [Bitwise Operators 1: The AND Operation](https://www.youtube.com/watch?feature=shared&v=bizj3dle8Qc)
> * [Bitwise Operators 2: The OR Operation](https://www.youtube.com/watch?feature=shared&v=TMFnWGJEJuI)
> * [Bitwise Operators 3: The XOR Operation](https://www.youtube.com/watch?feature=shared&v=O9VELMn3jIY)
> * [Bitwise Operators 4: The Logical Shift Operation](https://www.youtube.com/watch?feature=shared&v=mjqswwqE1RQ)
> * [Bit Manipulation](https://pebble.gitbooks.io/learning-c-with-pebble/content/chapter12.html)
> * [Bitwise Operators](https://www.programiz.com/c-programming/bitwise-operators)
> * [Google](https://www.google.com/webhp?q=bit+manipulation+C)
> * [Youtube](https://www.youtube.com/results?search_query=bitwise+operators+in+c)

# Learning Objectives
> At the end of this project, you are expected to be able to [explain to anyone](https://fs.blog/feynman-learning-technique/), without the help of Google:

## General
> * Look for the right source of information without too much help
> * How to manipulate bits and use bitwise operators

# Requirements
## General
> * Allowed editors: **`vi`**, **`vim`**, **`emacs`**
> * All your files will be compiled on Ubuntu 20.04 LTS using **`gcc`**, using the options **`-Wall -Werror -Wextra -pedantic -std=gnu89`**
> * All your files should end with a new line
> * A **`README.md`** file, at the root of the folder of the project is mandatory
> * Your code should use the **`Betty`** style. It will be checked using [betty-style.pl](https://github.com/alx-tools/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/alx-tools/Betty/blob/master/betty-doc.pl)
> * You are not allowed to use global variables
> * No more than 5 functions per file
> * The only C standard library functions allowed are **`malloc`**, **`free`** and **`exit`**. Any use of functions like **`printf`**, **`puts`**, **`calloc`**, **`realloc`** etc… is forbidden
> * You are allowed to use [_putchar](https://github.com/alx-tools/_putchar.c/blob/master/_putchar.c)
> * You don’t have to push **`_putchar.c`**, we will use our file. If you do it won’t be taken into account
> * In the following examples, the **`main.c`** files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own **`main.c`** files at compilation. Our **`main.c`** files might be different from the one shown in the examples
> * The prototypes of all your functions and the prototype of the function **`_putchar`** should be included in your header file called **`main.h`**
> * Don’t forget to push your header file
> * All your header files should be include guarded

# Tasks
## 0. 0
> Write a function that converts a binary number to an **`unsigned int`**.
>
> * Prototype: **`unsigned int binary_to_uint(const char *b);`**
> * where **`b`** is pointing to a string of **`0`** and **`1`** chars
> * Return: the converted number, or 0 if
>   * there is one or more chars in the string **`b`** that is not **`0`** or **`1`**
>   * **`b`** is **`NULL`**
>> ```
>> julien@ubuntu:~/0x14. Binary$ cat 0-main.c
>> #include <stdio.h>
>> #include "main.h"
>> 
>> /**
>>  * main - check the code
>>  *
>>  * Return: Always 0.
>>  */
>> int main(void)
>> {
>>     unsigned int n;
>> 
>>     n = binary_to_uint("1");
>>     printf("%u\n", n);
>>     n = binary_to_uint("101");
>>     printf("%u\n", n);
>>     n = binary_to_uint("1e01");
>>     printf("%u\n", n);
>>     n = binary_to_uint("1100010");
>>     printf("%u\n", n);
>>     n = binary_to_uint("0000000000000000000110010010");
>>     printf("%u\n", n);
>>     return (0);
>> }
>> julien@ubuntu:~/0x14. Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-binary_to_uint.c -o a
>> julien@ubuntu:~/0x14. Binary$ ./a 
>> 1
>> 5
>> 0
>> 98
>> 402
>> julien@ubuntu:~/0x14. Binary$
>> ```

### Repo:

* GitHub repository: **`alx-low_level_programming`**
* Directory: **`0x14-bit_manipulation`**
* File: **`0-binary_to_uint.c`**

---

## 1. 1
> Write a function that prints the binary representation of a number.
>
> * Prototype: void print_binary(unsigned long int n);
> * Format: see example
> * You are not allowed to use arrays
> * You are not allowed to use malloc
> * You are not allowed to use the % or / operators
