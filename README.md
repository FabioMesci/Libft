_This project has been created as part of the 42 curriculum by fmesci._

# Libft

## Description

Libft is the first project of the 42 common core. The goal is to build, from scratch
in C, our own static library (`libft.a`) that re-implements a set of standard libc
functions, plus additional utility functions. The library will be reused in all
later projects of the curriculum.

The project teaches low-level fundamentals: pointers, dynamic memory management
(`malloc`/`free`), string manipulation, linked lists, `Makefile` writing, and
respecting the 42 Norm.

### Library contents

**Part 1 - libc re-implementations**

| Category                      | Functions                                                                                                              |
| ----------------------------- | ---------------------------------------------------------------------------------------------------------------------- |
| Character checks / conversion | `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`                       |
| Strings                       | `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`, `ft_atoi` |
| Memory                        | `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`                              |

**Part 2 - additional functions**

`ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`, `ft_strmapi`,
`ft_striteri`, `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`.

**Singly linked lists** (`t_list`)

`ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`,
`ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`.

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
```

## Instructions

Requirements: `cc` (or `gcc`/`clang`), `make`, `ar`.

```sh
make        # builds libft.a
make clean  # removes object files
make fclean # removes object files and libft.a
make re     # fclean + all
```

Compilation flags: `-Wall -Wextra -Werror`.

To use the library in your own program:

```c
#include "libft.h"
```

```sh
cc -Wall -Wextra -Werror main.c -L. -lft -o my_program
```

## Resources

- `man 3` pages for each re-implemented function (`man 3 strlcpy`, `man 3 memmove`...)
- [GNU C Library reference](https://www.gnu.org/software/libc/manual/)
- [GNU Make manual](https://www.gnu.org/software/make/manual/)
- [42 Norm](https://github.com/42School/norminette)
- [cppreference - C standard library](https://en.cppreference.com/w/c)
- [Beej's Guide to C Programming](https://beej.us/guide/bgc/)

### Use of AI

AI was used as a support tool to learn and better understand the concepts behind
the functions implemented in the library (e.g. pointers, dynamic memory
allocation, overlapping memory regions, linked lists). It was used for
explanations only; the code of the library was written by the author.
