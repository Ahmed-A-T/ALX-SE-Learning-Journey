# 0x0E. C - Structures, typedef

# Resources
## Read or watch:
> * [0x0d. Structures.pdf](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2021/1/6eb80c79c99f6125450a0dc11b300d46238d1a5a.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20241112%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20241112T171244Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=c666c75f9063aaab0a9cc526df5000aae939e8247809e3945b2b5700e4e3a230)
> * [struct (C programming language)](https://en.wikipedia.org/wiki/Struct_(C_programming_language))
> * [Documentation: structures](https://github.com/alx-tools/Betty/wiki/Documentation:-Data-structures)
> * [0x0d. Typedef and structures.pdf](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2021/1/c8ff3e6f7202be7fa489a584e41d005504a07c23.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20241112%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20241112T171317Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=9f955b62e80cf626927856fc893a2db9abd61cde85eae23b68dad36777735b4e)
> * [typedef](https://publications.gbdirect.co.uk//c_book/chapter8/typedef.html)
> * Programming in C by Stephen Kochan - Chapter 8, Working with Structures p163-189

# Additional Resource
> * [Structs & Typedef in C Explained](https://www.youtube.com/watch?feature=shared&v=V13CbI74WQc)
> * [Practical use of structs & typedef with coding examples](https://www.youtube.com/watch?feature=shared&v=0IVfazuTHU8)
> * [The Lost Art of C Structure Packing (Advanced - not mandatory)](http://www.catb.org/esr/structure-packing/)

# Learning Objectives
> * At the end of this project, you are expected to be able to [explain to anyone](https://fs.blog/feynman-learning-technique/), without the help of Google:

# General
* What are structures, when, why and how to use them
* How to use **`typedef`**

# Requirements
## General
> * Allowed editors: **`vi`**, **`vim`**, **`emacs`**
> * All your files will be compiled on Ubuntu 20.04 LTS using **`gcc`**, using the options **`-Wall -Werror -Wextra -pedantic -std=gnu89`**
> * All your files should end with a new line
> * A **`README.md`** file, at the root of the folder of the project is mandatory
> * Your code should use the **`Betty`** style. It will be checked using [betty-style.pl](https://github.com/alx-tools/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/alx-tools/Betty/blob/master/betty-doc.pl)
> * You are not allowed to use global variables
> * No more than 5 functions per file
> * The only C standard library functions allowed are **`printf`**, **`malloc`**, **`free`** and **`exit`**.
> * In the following examples, the **`main.c`** files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own **`main.c`** files at compilation. Our **`main.c`** files might be different from the one shown in the examples
> * Don’t forget to push your header file
> * All your header files should be include guarded

# Tasks
## 0. Poppy
> ![1](/Concepts/img/3b534d73d79949ef8b7535d462014518256953f2.jpg)
> Define a new type **`struct dog`** with the following elements:
> 
> * **`name`**, type = **`char *`**
> * **`age`**, type = **`float`**
> * **`owner`**, type = **`char *`**
```
julien@ubuntu:~/0x0d. structures, typedef$ cat 0-main.c
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c -o a
julien@ubuntu:~/0x0d. structures, typedef$ ./a 
My name is Poppy, and I am 3.5 :) - Woof!
julien@ubuntu:~/0x0d. structures, typedef$
```
### Repo:

* GitHub repository: **`alx-low_level_programming`**
* Directory: **`0x0E-structures_typedef`**
* File: **`dog.h`**

---

## 1. A dog is the only thing on earth that loves you more than you love yourself
> Write a function that initialize a variable of type **`struct dog`**
> 
> * Prototype: **`void init_dog(struct dog *d, char *name, float age, char *owner);`**
```
julien@ubuntu:~/0x0d. structures, typedef$ cat 1-main.c
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    init_dog(&my_dog, "Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-init_dog.c -o b
julien@ubuntu:~/0x0d. structures, typedef$ ./b 
My name is Poppy, and I am 3.5 :) - Woof!
julien@ubuntu:~/0x0d. structures, typedef$
```
### Repo:

* GitHub repository: **`alx-low_level_programming`**
* Directory: **`0x0E-structures_typedef`**
* File: **`1-init_dog.c`**

---

## 2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad
> ![2](/Concepts/img/bb940d2ab10c3a4740f3c154cb980133e65e438e.jpg)
> Write a function that prints a **`struct dog`**
>
> * Prototype: **`void print_dog(struct dog *d);`**
> * Format: see example bellow
> * You are allowed to use the standard library
> * If an element of **`d`** is **`NULL`**, print **`(nil)`** instead of this element. (if **`name`** is **`NULL`**, print **`Name: (nil)`**)
> * If **`d`** is **`NULL`** print nothing.
```
julien@ubuntu:~/0x0d. structures, typedef$ cat 2-main.c
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    print_dog(&my_dog);
    return (0);
}
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-print_dog.c -o c
julien@ubuntu:~/0x0d. structures, typedef$ ./c 
Name: Poppy
Age: 3.500000
Owner: Bob
julien@ubuntu:~/0x0d. structures, typedef$
```
### Repo:

* GitHub repository: **`alx-low_level_programming`**
* Directory: **`0x0E-structures_typedef`**
* File: **`2-print_dog.c`**

---

## 3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read
> ![3](/Concepts/img/9ef84b3fd1636992602868e45d3062719326de0e.jpg)
> Define a new type **`dog_t`** as a new name for the type **`struct dog`**.
```
julien@ubuntu:~/0x0d. structures, typedef$ cat 3-main.c
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c -o d
julien@ubuntu:~/0x0d. structures, typedef$ ./d 
My name is Poppy, and I am 3.5 :) - Woof!
julien@ubuntu:~/0x0d. structures, typedef$
```
### Repo:

* GitHub repository: **`alx-low_level_programming`**
* Directory: **`0x0E-structures_typedef`**
* File: **`dog.h`**
---

## 4. A door is what a dog is perpetually on the wrong side of
> ![4](/Concepts/img/8c1e394774fb8d25e0bbbb73a75ebc7de0c80745.jpg)
> Write a function that creates a new dog.
>
> * Prototype: **`dog_t *new_dog(char *name, float age, char *owner);`**
> * You have to store a copy of **`name`** and **`owner`**
> * Return **`NULL`** if the function fails
```
julien@ubuntu:~/0x0d. structures, typedef$ cat 4-main.c
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
    return (0);
}
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-new_dog.c -o e
julien@ubuntu:~/0x0d. structures, typedef$ ./e
My name is Poppy, and I am 3.5 :) - Woof!
julien@ubuntu:~/0x0d. structures, typedef$
```
### Repo:

* GitHub repository: **`alx-low_level_programming`**
* Directory: **`0x0E-structures_typedef`**
* File: **`4-new_dog.c`**

---

## 5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg
> ![5](/Concepts/img/683112dbdd805c36a9b366cede0653dd80da5ec3.jpg)
> Write a function that frees dogs.
>
> * **`Prototype: void free_dog(dog_t *d);`**
```
julien@ubuntu:~/0x0d. structures, typedef$ cat 5-main.c
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
    free_dog(my_dog);
    return (0);
}
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-free_dog.c 4-new_dog.c -o f
julien@ubuntu:~/0x0d. structures, typedef$ valgrind ./f
==22840== Memcheck, a memory error detector
==22840== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==22840== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==22840== Command: ./f
==22840== 
My name is Poppy, and I am 3.5 :) - Woof!
==22840== 
==22840== HEAP SUMMARY:
==22840==     in use at exit: 0 bytes in 0 blocks
==22840==   total heap usage: 4 allocs, 4 frees, 1,059 bytes allocated
==22840== 
==22840== All heap blocks were freed -- no leaks are possible
==22840== 
==22840== For counts of detected and suppressed errors, rerun with: -v
==22840== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
julien@ubuntu:~/0x0d. structures, typedef$
```
### Repo:

* GitHub repository: **`alx-low_level_programming`**
* Directory: **`0x0E-structures_typedef`**
* File: **`5-free_dog.c`**


