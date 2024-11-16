# 0x13. C - More singly linked lists

# Resources
## Read or watch:
>
> * [Google](https://www.google.com/#q=linked+lists)
> * [Youtube](https://www.youtube.com/results?search_query=linked+lists)

# Learning Objectives
> At the end of this project, you are expected to be able to [explain to anyone](https://fs.blog/feynman-learning-technique/), without the help of Google:

# General
> * How to use linked lists
> * Start to look for the right source of information without too much help

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
> * In the following examples, the **main.c** files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own **`main.c`** files at compilation. Our **`main.c`** files might be different from the one shown in the examples
> * The prototypes of all your functions and the prototype of the function **`_putchar`** should be included in your header file called **`lists.h`**
> * Don’t forget to push your header file
> * All your header files should be include guarded

# More Info
> Please use this data structure for this project:
>> ```
>> /**
>>  * struct listint_s - singly linked list
>>  * @n: integer
>>  * @next: points to the next node
>>  *
>>  * Description: singly linked list node structure
>>  * 
>>  */
>> typedef struct listint_s
>> {
>>     int n;
>>     struct listint_s *next;
>> } listint_t;
>> ```

# Tasks
## 0. Print list
> Write a function that prints all the elements of a **`listint_t`** list.
> 
> * Prototype: **`size_t print_listint(const listint_t *h);`**
> * Return: the number of nodes
> * Format: see example
> * You are allowed to use **`printf`**
>
>> ```
>> julien@ubuntu:~/0x13. More singly linked lists$ cat 0-main.c 
>> #include <stdlib.h>
>> #include <string.h>
>> #include <stdio.h>
>> #include "lists.h"
>> 
>> /**
>>  * main - check the code
>>  * 
>>  * Return: Always 0.
>>  */
>> int main(void)
>> {
>>     listint_t *head;
>>     listint_t *new;
>>     listint_t hello = {8, NULL};
>>     size_t n;
>> 
>>     head = &hello;
>>     new = malloc(sizeof(listint_t));
>>     if (new == NULL)
>>     {
>>         printf("Error\n");
>>         return (1);
>>     }
>>     new->n = 9;
>>     new->next = head;
>>     head = new;
>>     n = print_listint(head);
>>     printf("-> %lu elements\n", n);
>>     free(new);
>>     return (0);
>> }
>> julien@ubuntu:~/0x13. More singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_listint.c -o a
>> julien@ubuntu:~/0x13. More singly linked lists$ ./a 
>> 9
>> 8
>> -> 2 elements
>> julien@ubuntu:~/0x13. More singly linked lists$
>> ```

### Repo:

* GitHub repository: **`alx-low_level_programming`**
* Directory: **`0x13-more_singly_linked_lists`**
* File: **`0-print_listint.c`**

---

## 1. List length
> Write a function that returns the number of elements in a linked listint_t list.
>
> * Prototype: **`size_t listint_len(const listint_t *h);`**
>
>> ```
>> julien@ubuntu:~/0x13. More singly linked lists$ cat 1-main.c 
>> #include <stdlib.h>
>> #include <string.h>
>> #include <stdio.h>
>> #include "lists.h"
>> 
>> /**
>>  * main - check the code
>>  *
>>  * Return: Always 0.
>>  */
>> int main(void)
>> {
>>     listint_t *head;
>>     listint_t *new;
>>     listint_t hello = {8, NULL};
>>     size_t n;
>> 
>>     head = &hello;
>>     new = malloc(sizeof(listint_t));
>>     if (new == NULL)
>>     {
>>         printf("Error\n");
>>         return (1);
>>     }
>>     new->n = 9;
>>     new->next = head;
>>     head = new;
>>     n = listint_len(head);
>>     printf("-> %lu elements\n", n);
>>     free(new);
>>     return (0);
>> }
>> julien@ubuntu:~/0x13. More singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-listint_len.c -o b
>> julien@ubuntu:~/0x13. More singly linked lists$ ./b 
>> -> 2 elements
>> julien@ubuntu:~/0x13. More singly linked lists$
>> ```

### Repo:

* GitHub repository: **`alx-low_level_programming`**
* Directory: **`0x13-more_singly_linked_lists`**
* File: **`1-listint_len.c`**

---

## 2. Add node
> Write a function that adds a new node at the beginning of a **`listint_t`** list.
>
> * Prototype: **`listint_t *add_nodeint(listint_t **head, const int n);`**
> * Return: the address of the new element, or **`NULL`** if it failed
>
>> ```
>> julien@ubuntu:~/0x13. More singly linked lists$ cat 2-main.c 
>> #include <stdlib.h>
>> #include <string.h>
>> #include <stdio.h>
>> #include "lists.h"
>> 
>> /**
>>  * main - check the code
>>  *
>>  * Return: Always 0.
>>  */
>> int main(void)
>> {
>>     listint_t *head;
>> 
>>     head = NULL;
>>     add_nodeint(&head, 0);
>>     add_nodeint(&head, 1);
>>     add_nodeint(&head, 2);
>>     add_nodeint(&head, 3);
>>     add_nodeint(&head, 4);
>>     add_nodeint(&head, 98);
>>     add_nodeint(&head, 402);
>>     add_nodeint(&head, 1024);
>>     print_listint(head);
>>     return (0);
>> }
>> julien@ubuntu:~/0x13. More singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-add_nodeint.c 0-print_listint.c -o c
>> julien@ubuntu:~/0x13. More singly linked lists$ ./c 
>> 1024
>> 402
>> 98
>> 4
>> 3
>> 2
>> 1
>> 0
>> julien@ubuntu:~/0x13. More singly linked lists$ 
>> ```

### Repo:

* GitHub repository: **`alx-low_level_programming`**
* Directory: **`0x13-more_singly_linked_lists`**
* File: **`2-add_nodeint.c`**

---

## 3. Add node at the end
> Write a function that adds a new node at the end of a **`listint_t`** list.
> 
> * Prototype: **`listint_t *add_nodeint_end(listint_t **head, const int n);`**
> * Return: the address of the new element, or **`NULL`** if it failed
