# 0x0B. C - malloc, free

## Concepts
> For this project, we expect you to look at this concept:
> * [Automatic and dynamic allocation, malloc and free](/Concepts/Automatic_and_dynamic_allocation_malloc_and_free.md)

# Resources
## Read or watch:
> * [0x0a - malloc & free - quick overview.pdf](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2021/1/a094c90e7f466bbeaa49cb24c8f04e7f27aaad41.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20241110%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20241110T181631Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=02b8c3828c9eb89e5f7288b7cd92f22d33b3a494a69face78722b4ce606f0f09)
> * [Dynamic memory allocation in C - malloc calloc realloc free](https://www.youtube.com/watch?v=xDVC3wKjS64) (stop at 6:50)

### man or help:
> * malloc
> * free

## Additional Resources
> * [Dynamic Memory Allocation in C Programming Explained](https://www.youtube.com/watch?feature=shared&v=-za3kDtaMvY)

## Learning Objectives
>  At the end of this project, you are expected to be able to [explain to anyone](https://fs.blog/feynman-learning-technique/), without the help of Google:

### General
> * What is the difference between automatic and dynamic allocation
> * What is **`malloc`** and **`free`** and how to use them
> * Why and when use **`malloc`**
> * How to use **`valgrind`** to check for memory leak

## Requirements
> ### General
> * Allowed editors: **`vi`**, **`vim`**, **`emacs`**
> * All your files will be compiled on Ubuntu 20.04 LTS using **`gcc`**, using the options **`-Wall -Werror -Wextra -pedantic -std=gnu89`**
> * All your files should end with a new line
> * A **`README.md`** file, at the root of the folder of the project is mandatory
> * Your code should use the **`Betty`** style. It will be checked using [betty-style.pl](https://github.com/alx-tools/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/alx-tools/Betty/blob/master/betty-doc.pl)
> * You are not allowed to use global variables
> * No more than 5 functions per file
> * The only C standard library functions allowed are **`malloc`** and **`free`**. Any use of functions like **`printf`**, **`puts`**, **`calloc`**, **`realloc`** etc… is forbidden
> * You are allowed to use [_putchar](https://github.com/alx-tools/_putchar.c/blob/master/_putchar.c)
> * You don’t have to push **`_putchar.c`**, we will use our file. If you do it won’t be taken into account
> * In the following examples, the **`main.c`** files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account).   >   We will use our own **`main.c`** files at compilation. Our **`main.c`** files might be different from the one shown in the examples
> * The prototypes of all your functions and the prototype of the function **`_putchar`** should be included in your header file called main.h
> * Don’t forget to push your header file

## More Info
> You do not have to learn about **`calloc`** and **`realloc`**.

# Tasks

## 0. Float like a butterfly, sting like a bee
> Write a function that creates an array of chars, and initializes it with a specific char.
>
> * Prototype: char *create_array(unsigned int size, char c);
> * Returns NULL if size = 0
> * Returns a pointer to the array, or NULL if it fails
```
julien@ubuntu:~/0x0a. malloc, free$ cat 0-main.c 
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *buffer;

    buffer = create_array(98, 'H');
    if  (buffer == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    simple_print_buffer(buffer, 98);
    free(buffer);
    return (0);
}
julien@ubuntu:~/0x0a. malloc, free$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-create_array.c -o a
julien@ubuntu:~/0x0a. malloc, free$ ./a 
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
julien@ubuntu:~/0x0a. malloc, free$
```
### Repo:
* GitHub repository: **`alx-low_level_programming`**
* Directory: **`0x0B-malloc_free`**
* File: **`0-create_array.c`**

---

## 1. The woman who has no imagination has no wings
> Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
>
> * Prototype: **`char *_strdup(char *str);`**
> * The **`_strdup()`** function returns a pointer to a new string which is a duplicate of the string str. Memory for the new string is obtained with **`malloc`**, and can be freed with **`free`**.
> * Returns **`NULL`** if str = NULL
> * On success, the **`_strdup`** function returns a pointer to the duplicated string. It returns NULL if insufficient memory was available
>   
> FYI: The standard library provides a similar function: **`strdup`**. Run **`man strdup`** to learn more.
```
julien@ubuntu:~/0x0a. malloc, free$ cat 1-main.c
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s;

    s = _strdup("ALX SE");
    if (s == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}
julien@ubuntu:~/0x0a. malloc, free$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-strdup.c -o s
julien@ubuntu:~/0x0a. malloc, free$ ./s 
ALX SE
julien@ubuntu:~/0x0a. malloc, free$
```
### Repo:

* GitHub repository: **`alx-low_level_programming`**
* Directory: **`0x0B-malloc_free`**
* File: **`1-strdup.c`**

---

## 2. He who is not courageous enough to take risks will accomplish nothing in life
> Write a function that concatenates two strings.
> 
> * Prototype: **`char *str_concat(char *s1, char *s2);`**
> * The returned pointer should point to a newly allocated space in memory which contains the contents of **`s1`**, followed by the contents of **`s2`**, and null terminated
> * if **`NULL`** is passed, treat it as an empty string
> * The function should return **`NULL`** on failure
```
julien@ubuntu:~/0x0a. malloc, free$ cat 2-main.c
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s;

    s = str_concat("Betty ", "Holberton");
    if (s == NULL)
    {
        printf("failed\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}
julien@ubuntu:~/0x0a. malloc, free$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-str_concat.c -o c
julien@ubuntu:~/c/curriculum_by_julien/holbertonschool-low_level_programming/0x0a. malloc, free$ ./c | cat -e
Betty Holberton$
julien@ubuntu:~/c/curriculum_by_julien/holbertonschool-low_level_programming/0x0a. malloc, free$
```
### Repo:

* GitHub repository: **`alx-low_level_programming`**
* Directory: **`0x0B-malloc_free`**
* File: **`2-str_concat.c`**

---

