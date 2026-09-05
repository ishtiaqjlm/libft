# *This project has been created as part of the 42 curriculum by ishtiahm.*

# Libft

## Description

Libft is the first Common Core project at 42. Its goal is to recreate a collection of standard C library functions while following the 42 coding standard (Norminette). The project provides a reusable static library (`libft.a`) that can be linked with future 42 projects.

The library is divided into three mandatory parts:

* **Part 1:** Reimplementation of standard libc functions.
* **Part 2:** Additional utility functions for string and memory manipulation.
* **Part 3:** Singly linked list functions for creating and manipulating linked lists.

All functions are implemented in C without using the original libc implementations (except where explicitly allowed).

---

## Features

### Part 1 – Libc Functions

| Function   | Description                                            |
| ---------- | ------------------------------------------------------ |
| ft_isalpha | Checks whether a character is alphabetic.              |
| ft_isdigit | Checks whether a character is a digit.                 |
| ft_isalnum | Checks whether a character is alphanumeric.            |
| ft_isascii | Checks whether a character is a valid ASCII character. |
| ft_isprint | Checks whether a character is printable.               |
| ft_strlen  | Returns the length of a string.                        |
| ft_memset  | Fills a block of memory with a byte value.             |
| ft_bzero   | Sets a block of memory to zero.                        |
| ft_memcpy  | Copies memory from one location to another.            |
| ft_memmove | Safely copies overlapping memory regions.              |
| ft_strlcpy | Copies a string with size protection.                  |
| ft_strlcat | Concatenates strings with buffer size protection.      |
| ft_toupper | Converts a character to uppercase.                     |
| ft_tolower | Converts a character to lowercase.                     |
| ft_strchr  | Finds the first occurrence of a character in a string. |
| ft_strrchr | Finds the last occurrence of a character in a string.  |
| ft_strncmp | Compares two strings up to n characters.               |
| ft_memchr  | Searches memory for a byte.                            |
| ft_memcmp  | Compares two memory blocks.                            |
| ft_strnstr | Finds a substring within a limited length.             |
| ft_atoi    | Converts a string to an integer.                       |

---

### Part 2 – Additional Functions

| Function      | Description                                                    |
| ------------- | -------------------------------------------------------------- |
| ft_calloc     | Allocates zero-initialized memory.                             |
| ft_strdup     | Duplicates a string.                                           |
| ft_substr     | Extracts a substring.                                          |
| ft_strjoin    | Joins two strings into a new string.                           |
| ft_strtrim    | Removes specified characters from both ends of a string.       |
| ft_split      | Splits a string using a delimiter.                             |
| ft_itoa       | Converts an integer to a string.                               |
| ft_strmapi    | Applies a function to each character and returns a new string. |
| ft_striteri   | Applies a function to each character in place.                 |
| ft_putchar_fd | Writes a character to a file descriptor.                       |
| ft_putstr_fd  | Writes a string to a file descriptor.                          |
| ft_putendl_fd | Writes a string followed by a newline to a file descriptor.    |
| ft_putnbr_fd  | Writes an integer to a file descriptor.                        |

---

### Part 3 – Linked List Functions

| Function        | Description                                             |
| --------------- | ------------------------------------------------------- |
| ft_lstnew       | Creates a new linked list node.                         |
| ft_lstadd_front | Adds a node to the beginning of a list.                 |
| ft_lstsize      | Returns the number of nodes in a list.                  |
| ft_lstlast      | Returns the last node of a list.                        |
| ft_lstadd_back  | Adds a node to the end of a list.                       |
| ft_lstdelone    | Deletes a single node using a user-provided function.   |
| ft_lstclear     | Deletes an entire linked list.                          |
| ft_lstiter      | Applies a function to every node in a list.             |
| ft_lstmap       | Creates a new list by applying a function to each node. |

---

## Instructions

### Compile the library

```bash
make
```

### Remove object files

```bash
make clean
```

### Remove object files and the library

```bash
make fclean
```

### Rebuild the project

```bash
make re
```

After compilation, the static library `libft.a` can be linked with other C projects.

---

## Technical Details

* Language: C
* Compiler: cc
* Compilation Flags:

  * `-Wall`
  * `-Wextra`
  * `-Werror`
* Library Type: Static Library (`libft.a`)
* Coding Standard: Norminette

---

## Resources

### Official Documentation

* 42 Libft Subject
* Linux Manual Pages (`man`)
* The Open Group Base Specifications (POSIX)
* C Standard Library Reference (cplusplus.com)
* cppreference.com

All source code was implemented, tested, and validated by the project author.
