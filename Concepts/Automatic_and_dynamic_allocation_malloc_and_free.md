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
