# 0x1D. C - Binary trees

# Resources
## Read or watch:
> * [Binary tree](https://en.wikipedia.org/wiki/Binary_tree) (note the first line: **`Not to be confused with B-tree`**.)
> * [Data Structure and Algorithms - Tree](https://www.tutorialspoint.com/data_structures_algorithms/tree_data_structure.htm)
> * [Tree Traversal](https://www.programiz.com/dsa/tree-traversal)
> * [Binary Search Tree](https://en.wikipedia.org/wiki/Binary_search_tree)
> * [Data structures: Binary Tree](https://www.youtube.com/watch?v=H5JubkIy_p8)

# Learning Objectives
> At the end of this project, you are expected to be able to [explain to anyone](https://fs.blog/feynman-learning-technique/), **without the help of Google**:

# General
> * What is a binary tree
> * What is the difference between a binary tree and a Binary Search Tree
> * What is the possible gain in terms of time complexity compared to linked lists
> * What are the depth, the height, the size of a binary tree
> * What are the different traversal methods to go through a binary tree
> * What is a complete, a full, a perfect, a balanced binary tree

# Requirements
## General
> * Allowed editors: **`vi`**, **`vim`**, **`emacs`**
> * All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
> * All your files should end with a new line
> * A **`README.md`** file, at the root of the folder of the project, is mandatory
> * Your code should use the **`Betty`** style. It will be checked using [betty-style.pl](https://github.com/alx-tools/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/alx-tools/Betty/blob/master/betty-doc.pl)
> * You are not allowed to use global variables
> * No more than 5 functions per file
> * You are allowed to use the standard library
> * In the following examples, the **`main.c`** files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own **`main.c`** files at compilation. Our **`main.c`** files might be different from the one shown in the examples
> * The prototypes of all your functions should be included in your header file called **`binary_trees.h`**
> * Don’t forget to push your header file
> * All your header files should be include guarded

# More Info
## Data structures
> Please use the following data structures and types for binary trees. Don’t forget to include them in your header file.

## Basic Binary Tree
> ```
> /**
>  * struct binary_tree_s - Binary tree node
>  *
>  * @n: Integer stored in the node
>  * @parent: Pointer to the parent node
>  * @left: Pointer to the left child node
>  * @right: Pointer to the right child node
>  */
> struct binary_tree_s
> {
>     int n;
>     struct binary_tree_s *parent;
>     struct binary_tree_s *left;
>     struct binary_tree_s *right;
> };
> 
> typedef struct binary_tree_s binary_tree_t;
> ```

## Binary Search Tree
> ``` typedef struct binary_tree_s bst_t; ```

## AVL Tree
> ``` typedef struct binary_tree_s avl_t; ```

## Max Binary Heap
> ``` typedef struct binary_tree_s heap_t; ```
>
> **Note**: For tasks 0 to 23 (included), you have to deal with simple binary trees. They are not BSTs, thus they don’t follow any kind of rule.

## Print function
> To match the examples in the tasks, you are given [this function](https://github.com/alx-tools/0x1C.c)
>
> This function is used only for visualization purposes. You don’t have to push it to your repo. It may not be used during the correction

# Tasks
---
## 0. New node
> Write a function that creates a binary tree node
> 
> * Prototype: **`binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);`**
> * Where **`parent`** is a pointer to the parent node of the node to create
> * And **`value`** is the value to put in the new node
> * When created, a node does not have any child
> * Your function must return a pointer to the new node, or **`NULL`** on failure
>
>> ```
>> alex@/tmp/binary_trees$ cat 0-main.c 
>> #include <stdlib.h>
>> #include "binary_trees.h"
>> 
>> /**
>>  * main - Entry point
>>  *
>>  * Return: Always 0 (Success)
>>  */
>> int main(void)
>> {
>>     binary_tree_t *root;
>> 
>>     root = binary_tree_node(NULL, 98);
>> 
>>     root->left = binary_tree_node(root, 12);
>>     root->left->left = binary_tree_node(root->left, 6);
>>     root->left->right = binary_tree_node(root->left, 16);
>> 
>>     root->right = binary_tree_node(root, 402);
>>     root->right->left = binary_tree_node(root->right, 256);
>>     root->right->right = binary_tree_node(root->right, 512);
>> 
>>     binary_tree_print(root);
>>     return (0);
>> }
>> alex@/tmp/binary_trees$ gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 0-main.c 0-binary_tree_node.c -o 0-node
>> alex@/tmp/binary_trees$ ./0-node
>>        .-------(098)-------.
>>   .--(012)--.         .--(402)--.
>> (006)     (016)     (256)     (512)
>> alex@/tmp/binary_trees$
>> ```

### Repo:

* GitHub repository: **`binary_trees`**
* File: **`0-binary_tree_node.c`**
