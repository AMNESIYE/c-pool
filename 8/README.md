# Groupe de meritt_j

[ETNA](https://etna.io) Pool exercises, rendered by **Julien Méritte**.

*October/November 2020*

# Linked Lists

## Instructions

Your repository must contain the totality of your source files, but no useless files (binary, temp files, obj files,...).

Don’t push your main function into your delivery directory, we will be adding
 our own. Your files will be compiled adding our ***main.c*** and our
  ***my_putchar.c*** files.

You are only allowed to use the ***my_putchar*** function to complete the
 following tasks, but don’t push it into your delivery directory, and don’t copy it in any of your delivered files.

If one of your files prevents you from compiling with ****.c***, the Autograder
 will not be able to correct your work and you will receive a 0.
 
For the tasks regarding linked lists, we will be using the following structure:
```C
typedef struct linked_list
{
int data;
struct linked_list *next;
} linked_list_t;
```
This structure must be found in a file named, my_list.h in your include folder

## Tasks

* my_push_back_from_list
* my_pop_back_to_list
* my_list_size
* my_find_node
* my_delete_nodes

## Allowed functions

Allowed system function(s): ***write***, ***malloc***, ***free***

## Coding Style

At ETNA, every C code must comply with our Coding Style: ***etna_c_coding_style
.pdf***.

Read it carefully! The code quality is an important factor and will be evaluated!

## Advise

Create your repository at the beginning of the day and submit your work on a
 regular basis! The delivery directory is specified within the instructions
  for each task. In order to keep your repository clean, pay attention to
   ***gitignore***.