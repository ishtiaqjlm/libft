# Libft

## Description

**Libft** is a custom C library developed as part of the 42 Common Core curriculum.

The goal of this project is to recreate commonly used functions from the C standard library and implement additional utility functions for working with strings, memory, characters, and linked lists.

The project is written entirely in C and follows the 42 coding standards.

## Mandatory Part

The library includes functions for:

* Character checking and conversion
* String manipulation
* Memory manipulation
* Number conversion
* Dynamic memory allocation
* File descriptor output

Examples include:

```text
ft_strlen
ft_memset
ft_memcpy
ft_memmove
ft_memcmp
ft_strlcpy
ft_strlcat
ft_strchr
ft_strrchr
ft_strncmp
ft_strnstr
ft_atoi
ft_calloc
ft_strdup
ft_substr
ft_strjoin
ft_strtrim
ft_split
ft_itoa
ft_strmapi
ft_striteri
ft_putchar_fd
ft_putstr_fd
ft_putendl_fd
ft_putnbr_fd
```

## Bonus Part

The bonus part implements a singly linked list using the `t_list` structure.

Implemented functions:

```text
ft_lstnew
ft_lstadd_front
ft_lstsize
ft_lstlast
ft_lstadd_back
ft_lstdelone
ft_lstclear
ft_lstiter
ft_lstmap
```

## Compilation

Compile the mandatory part:

```bash
make
```

Compile the mandatory and bonus parts:

```bash
make bonus
```

Remove object files:

```bash
make clean
```

Remove object files and the library:

```bash
make fclean
```

Recompile the project:

```bash
make re
```

The compilation uses:

```text
-Wall -Wextra -Werror
```

and produces:

```text
libft.a
```

## Testing

The project was tested using external Libft testers, including:

* Tripouille/libftTester
* Libft War Machine

Norminette was also used to verify compliance with the 42 coding standard.

## What I Learned

Through this project, I practiced:

* C pointers
* Memory allocation and deallocation
* String manipulation
* Memory management
* Function pointers
* Structures
* Singly linked lists
* Static libraries
* Makefiles
* Error handling
* Debugging with compiler warnings and Valgrind

## Author

Ishtiaq Ahmed

