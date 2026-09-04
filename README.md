*This project has been created as part of the 42 curriculum by ishtiahm.*

# Libft

## Description

Libft is the first project of the 42 Common Core curriculum. The objective is to recreate a subset of the C Standard Library while gaining a deeper understanding of memory management, pointers, strings, data structures, and low-level programming.

The project consists of implementing common C library functions from scratch without relying on the original implementations. In addition to the mandatory functions, the bonus part introduces a generic singly linked list library.

The final result is a reusable static library (`libft.a`) that can be linked with future 42 projects.

---

## Library Overview

The library is divided into three main parts.

### Part 1 – Standard Library Functions

This section reimplements commonly used functions from the C standard library.

#### Character functions

* ft_isalpha
* ft_isdigit
* ft_isalnum
* ft_isascii
* ft_isprint
* ft_toupper
* ft_tolower

#### String functions

* ft_strlen
* ft_strchr
* ft_strrchr
* ft_strncmp
* ft_strlcpy
* ft_strlcat
* ft_strnstr
* ft_strdup

#### Memory functions

* ft_memset
* ft_bzero
* ft_memcpy
* ft_memmove
* ft_memchr
* ft_memcmp

#### Conversion and allocation

* ft_atoi
* ft_calloc

---

### Part 2 – Additional Utility Functions

These functions provide commonly used string manipulation and output utilities.

* ft_substr
* ft_strjoin
* ft_strtrim
* ft_split
* ft_itoa
* ft_strmapi
* ft_striteri
* ft_putchar_fd
* ft_putstr_fd
* ft_putendl_fd
* ft_putnbr_fd

---

### Bonus – Linked List Library

The bonus part implements a generic singly linked list using the following structure:

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
```

Implemented linked list functions:

* ft_lstnew
* ft_lstadd_front
* ft_lstsize
* ft_lstlast
* ft_lstadd_back
* ft_lstdelone
* ft_lstclear
* ft_lstiter
* ft_lstmap

---

## Instructions

### Clone the repository

```bash
git clone <repository-url>
cd libft
```

### Compile the mandatory library

```bash
make
```

### Compile the mandatory and bonus library

```bash
make bonus
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

The compilation generates the static library:

```text
libft.a
```

which can be linked to future C projects.

---

## Technical Choices

* Programming language: C
* Compiler: cc
* Compilation flags:

  * -Wall
  * -Wextra
  * -Werror
* Build system: Makefile
* Coding standard: Norminette (42)
* Memory management performed manually using malloc() and free().

---

## Testing

The project was verified using:

* Custom unit tests
* Norminette
* Tripouille's libftTester
* Libft War Machine
* Valgrind for memory leak detection

---

## Resources

### Official documentation

* The Open Group Base Specifications (POSIX)
* Linux manual pages (`man`)
* ISO C Standard Library documentation

### Learning resources

* Beej's Guide to C Programming
* cppreference.com (for understanding standard C library behavior)
* GNU GCC documentation
* Valgrind documentation

### AI Usage

Artificial Intelligence (ChatGPT) was used as a learning assistant throughout the project.

AI was used to:

* explain the behavior of standard C library functions;
* discuss algorithms before implementation;
* understand pointers, memory allocation, and linked lists;
* help debug compilation and logic errors;
* review Makefile structure;
* suggest additional edge cases and test scenarios.

All source code was implemented, compiled, tested, and debugged by the project author. AI was used for explanations, guidance, and code review rather than generating the final implementation.

---

## Skills Acquired

During this project, I developed practical experience with:

* pointers and pointer arithmetic;
* dynamic memory allocation;
* string and memory manipulation;
* function pointers;
* linked lists;
* static libraries;
* Makefiles;
* debugging with compiler diagnostics and Valgrind;
* writing modular and reusable C code.

---

## Author

Ishtiaq Ahmed (42 login: ishtiahm)
