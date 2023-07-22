# 42-Libft
### Summary
This project is about coding my own C library:<br/>
A collection of functions that will be a useful tool for the 42 cursus.

### Mandatory Part
| Program name:       | libft.a                     |
| --------------------|-----------------------------|
| Turn in files:      | Makefile, libft.h, ft_*.c   |
| Makefile:           | NAME, all, clean, clean, re |
| External functions: | Detailed on each part       |
| Description:        | Write your own C library    |

### Part 1 - Libc functions 
To begin, we must redo a set of functions from the libc. These functions will have the same prototypes and implement the same behaviours as the originals. They must comply with the definition in their manual.  
The only difference will be their names. They will begin with the ’ft_’ prefix. For instance, strlen becomes ft_strlen. 

These functions do not require any external functions:  
*• isalpha • isdigit • isalnum • isascii • isprint  
• strlen • memset • bzero • memcpy • memmove  
• strlcpy • strlcat • toupper • tolower • strchr  
• strrchr • strncmp • memchr • memcmp • strnstr • atoi*

To implement the two following functions, we can use malloc( ):  
*• calloc • strdup*

### Part 2 - Additional functions 
In this second part, we must develop a set of functions that are either not in the libc library or are part of it but in a different form.

### Bonus Part - Linked List functions
We need to write a set of functions that help us to manipulate lists.  
In the Makefile, we need to add a make bonus rule to add the bonus functions to libft.a
