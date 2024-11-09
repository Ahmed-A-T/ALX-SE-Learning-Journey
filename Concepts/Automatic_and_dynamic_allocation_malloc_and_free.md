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
![1](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2020/9/8ef868cec3c5d5ab7a025a3b964471f2e266a89c.PNG?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20241109%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20241109T200813Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=902fb9ae97256174ee81fcdfd5fda5ca47c35e43d15320d046e46257e2d61eb3)
