# Automatic and dynamic allocation, malloc and free
The malloc function is used to allocate a certain amount of memory during the execution of a program. It will request a block of memory from the heap. If the request is granted, the operating system will reserve the requested amount of memory and malloc will return a pointer to the reserved space.

When the amount of memory is not needed anymore, you must return it to the operating system by calling the function free.

## Automatic allocation
When you declare variables or when you use strings within double quotes, the program is taking care of all the memory allocation. You do not have to think about it.
```
julien@ubuntu:~/c/malloc$ head -n 14 cisfun.c
/**
 * cisfun - function used for concept introduction
 * @n1: number of projects
 * @n2: number of tasks
 *
 * Return: nothing.
 */
void cisfun(unsigned int n1, unsigned int n2)
{
    int n;
    char c;
    int *ptr;
    char array[3];
}
julien@ubuntu:~/c/malloc$
```
In the above example, the arguments and the local variables are stored automatically in memory when the function is called. The program reserves space and uses it without you having to think about it.
![Data](/Concepts/img/8ef868cec3c5d5ab7a025a3b964471f2e266a89c.png)
By default, the memory used to store those variables can be read and written. When the program leaves the function, the memory used for all the above variables is released for future use.
### Special case: string literals
One special case we have seen so far is the memory used to store strings that we put within double quotes (") in our programs. For instance:
```
char *str;

str = “Holberton”;
```
The string **`"Holberton"`** that was just declared is stored automatically in memory when the program is launched. But, the memory that stores the string is only readable. In fact, if you try to change a character using **`str`**, you will have a little surprise :)
```
julien@ubuntu:~/c/malloc$ cat segf.c
/**
 * segf - Let's segfault \o/
 *
 * Return: nothing.
 */
void segf(void)
{
    char *str;

    str = "Holberton";
    str[0] = 's';
}

/**
 *  main - concept introduction
 *
 * Return: 0.
 */
int main(void)
{
    segf();
    return (0);
}
julien@ubuntu:~/c/malloc$ gcc segf.c
julien@ubuntu:~/c/malloc$ ./a.out
Segmentation fault (core dumped)
julien@ubuntu:~/c/malloc$
```
In the above example, the variable **`str`** is a pointer to a char, that is initialized to the address of the first character of the string “Holberton”. But the memory storing the string “Holberton” is read-only, and will also not be released when the function returns. This is the state of the memory after the line **`str = "Holberton";`** is executed (in red: read-only memory):
![2](/Concepts/img/ee5dce288902ed874288409207dfa68e3c89f08d.png)
And this is the state of the memory after the function returns:
![3](/Concepts/img/41d48c2bb4b8bf88447bcaec3dd1c85738ab3f7e.png)
Note that when using the notation: **`char s[] = "Holberton"`**, the array **`s`** holds a copy of the string **`"Holberton"`**. So it is possible to modify this copy.
```
julien@ubuntu:~/c/malloc$ cat print_school.c 
#include <stdio.h>

/**
 * print_school - prints "Holberton"
 *
 * Return: nothing.
 */
void print_school(void)
{
    char str[] = "Holberton";

    str[0] = 's';
    printf("%s\n", str);
}

/**
 *  main - concept introduction
 *
 * Return: 0.
 */
int main(void)
{
    print_school();
    return (0);
}
julien@ubuntu:~/c/malloc$ gcc print_school.c 
julien@ubuntu:~/c/malloc$ ./a.out 
solberton
julien@ubuntu:~/c/malloc$
```
This is the memory before the call to **`print_school`**:
![4](/Concepts/img/507f804ab38c4aed683e05f21fc17b73b4b4731d.png)
Note that the string **`"Holberton"`** is always present in the memory. We will see why later.

This is the memory right before the line **`str[0] = 's';`** is executed:
![5](/Concepts/img/251495cba0cbe746b948c194eca3e6413a064666.png)
Note the differences:

* The variable **`str`** is not a pointer, it’s an array. **`str`** does not hold the memory address of the string "Holberton", but a copy of it
* The string **`“Holberton”`** is copied into this array
And this is the memory state when the program leaves the function **`print_school`**:
![6](/Concepts/img/f0e924efdc32ad90f3094d5195a89eee4d8771b2.png)
Note, again, that the string **"`Holberton`"** is still present in the memory.
### Why would I need dynamic allocation?

So far we only have seen functions and programs that had fixed inputs. What happens when we do not know in advance how much memory you need and we will only know this at runtime, after compilation?

For instance, imagine we have to create a program that will store all the words contained in a file in an array. That file is passed as an argument to our program. There is no way we could know in advance how many words the file will contain. We can not declare a big array like char ***`words[1024];`** and assume that there will never be more than 1024 words in the file. That’s when **`malloc`** and friends come to the rescue, and will permit us to allocate dynamically the amount of memory we need.
## Dynamic allocation
### Malloc
The malloc function allocates a specific number of bytes in memory and returns a pointer to the allocated memory. This memory will have read and write permissions.

* Prototype: void *malloc(size_t size);
* where void * means it is a pointer to the type of your choice
* and size is the number of bytes your need to allocate
```
julien@ubuntu:~/c/malloc$ cat malloc_example.c 
#include <stdio.h>
#include <stdlib.h>

/**
 * main - introduction to malloc and free
 *
 * Return: 0.
 */
int main(void)
{
    char *str;

    str = malloc(sizeof(char) * 3);
    str[0] = 'O';
    str[1] = 'K';
    str[2] = '\0';
    printf("%s\n", str);
    return (0);
}
julien@ubuntu:~/c/malloc$ gcc malloc_example.c -o m
julien@ubuntu:~/c/malloc$ ./m
OK
julien@ubuntu:~/c/malloc$
```
In the above example we use **`malloc`** to create a 3 byte allocated space in memory, and we fill this space with characters. Note the use the operator **`sizeof`**. It is very important because as you know, the size of the different types will be different on different machines: we want 3 times the size of a **`char`** (which happens to be 3 times 1 byte on our 64-bit machine). Always use **`sizeof`** for a better portability.

Let’s see another example, with integers.
```
julien@ubuntu:~/c/malloc$ cat malloc_example2.c 
#include <stdio.h>
#include <stdlib.h>

/**
 * main - introduction to malloc and free
 *
 * Return: 0.
 */
int main(void)
{
    int *tab;

    tab = malloc(sizeof(*tab) * 3);
    tab[0] = 98;
    tab[1] = -1024;
    tab[2] = 402;
    printf("%d, %d, %d\n", tab[0], tab[1], tab[2]);
    return (0);
}
julien@ubuntu:~/c/malloc$ gcc malloc_example2.c -o m2
julien@ubuntu:~/c/malloc$ ./m2
98, -1024, 402
julien@ubuntu:~/c/malloc$
```
In the above example, we are using **`malloc`** to create a space in memory where we can store three integers. Again, by using **`sizeof`** instead of directly a number of bytes (**`12`** for instance in this case if using a 64 bits machine) we are sure to get the right amount of memory, no matter what system we are compiling and running on.
### memory
Contrary to local variables and function parameters, the memory that is allocated with **`malloc`** is not automatically released when the function returns.
```
julien@ubuntu:~/c/malloc$ cat malloc_mem.c
#include <stdio.h>
#include <stdlib.h>

/**
 * m - stores 3 int in a new allocated space in memory and prints the sum
 * @n0: integer to store and print
 * @n1: integer to store and print
 * @n2: integer to store and print
 *
 * Return: nothing
 */
void m(int n0, int n1, int n2)
{
    int *t;
    int sum;

    t = malloc(sizeof(*t) * 3);
    t[0] = n0;
    t[1] = n1;
    t[2] = n2;
    sum = t[0] + t[1] + t[2];
    printf("%d + %d + %d = %d\n", t[0], t[1], t[2], sum);
}

/**
 * main - introduction to malloc and free
 *
 * Return: 0.
 */
int main(void)
{
    m(98, 402, -1024);
    return (0);
}
julien@ubuntu:~/c/malloc$
```
This is what the memory would look like before the function m returns:
![7](/Concepts/img/b85d599111ab5ddf834ca90e7f0b589b0f7a3de7.png)
And this will be the state of the memory after the function **`m`** returns:
![8](/Concepts/img/4956b6e9fce3999ce47a1a39766c7c6f742c09a6.png)
