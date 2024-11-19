# Everything you need to know to start coding your own shell

# PID & PPID
> A process is an instance of an executing program, that has a unique process ID. This process ID is used by many functions and system calls to interact with and manipulate processes. In order to retrieve the current process’ ID, you can use the system call **`getpid`** (man 2 **`getpid`**):
>
>> ```
>> julien@ubuntu:~/c/shell$ cat pid.c
>> #include <stdio.h>
>> #include <unistd.h>
>> 
>> /**
>>  * main - PID
>>  *
>>  * Return: Always 0.
>>  */
>> int main(void)
>> {
>>     pid_t my_pid;
>> 
>>     my_pid = getpid();
>>     printf("%u\n", my_pid);
>>     return (0);
>> }
>> julien@ubuntu:~/c/shell$ gcc -Wall -Werror -pedantic pid.c -o mypid && ./mypid
>> 3237
>> julien@ubuntu:~/c/shell$ ./mypid 
>> 3238
>> julien@ubuntu:~/c/shell$ ./mypid 
>> 3239
>> julien@ubuntu:~/c/shell$
>> ```
>
> Note in the example above, that every time you run the program, a new process is created, and its ID is different.
> 
> Each process has a parent: the process that created it. It is possible to get the PID of a parent process by using the **`getppid`** system call (man 2 **`getppid`**), from within the child process.


# Exercises
## 0. getppid
>
> Write a program that prints the PID of the parent process. Run your program several times within the same shell. It should be the same. Does **`echo $$`** print the same value? Why?
>
## 1. /proc/sys/kernel/pid_max
>
> Write a shell script that prints the maximum value a process ID can be.
>

# Arguments
> The command line arguments are passed through the **`main`** function: **`int main(int ac, char **av);`**
>
> * **`av`** is a **`NULL`** terminated array of strings
> * **`ac`** is the number of items in **`av`**
>   
> **`av[0]`** usually contains the name used to invoke the current program. **`av[1]`** is the first argument of the program, **`av[2]`** the second, and so on.

# Exercises
## 0. av
>
> Write a program that prints all the arguments, without using **`ac`**.
>
## 1. Read line
>
> Write a program that prints **`"$ "`**, wait for the user to enter a command, prints it on the next line.
>
> man 3 **`getline`**
> 
> **important** make sure you read the man, and the RETURN VALUE section, in order to know when to stop reading Keyword: “end-of-file”, or **EOF** (or **Ctrl+D**).

> _#advanced_: Write your own version of **`getline`**.
>
> ```
> julien@ubuntu:~/c/shell$ gcc -Wall -Wextra -Werror -pedantic prompt.c -o prompt
> julien@ubuntu:~/c/shell$ ./prompt 
> $ cat prompt.c
> cat prompt.c
> julien@ubuntu:~/c/shell$
> ```

## 2. command line to av
