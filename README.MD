# 🧱 Libft — My Custom C Standard Library

A small custom C library reimplementing common functions from the C standard library plus handy utility functions and a simple linked list implementation.

This repository is a personal implementation of foundational C routines used at 42 School (Heilbronn) and is intended as a reusable library for other C projects.
---

🧰 Skills Demonstrated
- Low-level C programming

- Dynamic memory management (memory allocation and pointer arithmetic)

- Functional programming patterns

- Data structure design (linked lists)

- Clean code, modularity and reusability

- updated the libft with printf functionality

---

## Description

The project involves reimplementing standard C library functions and developing additional utilities for string manipulation, memory management, file descriptor output, and linked lists.

The goal is to gain a deeper understanding of how C functions work internally, particularly pointers, memory allocation, string operations, and data structures.

The result is **`libft.a`**, a static library containing 43 functions that can be reused in future C projects.

## Library Overview

The library contains **43 functions**, organized into three main categories.
### 1. Standard C Library Functions

Reimplementations of commonly used C functions, prefixed with `ft_`.

| Category | Functions | Purpose |
| --- | --- | --- |
| Character checks | `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint` | Classify characters |
| Character conversion | `ft_toupper`, `ft_tolower` | Convert letter case |
| String operations | `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr` | Measure, copy, concatenate, compare, and search strings |
| Memory operations | `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp` | Initialize, copy, move, search, and compare memory |
| Conversion | `ft_atoi` | Convert a string to an integer |
| Allocation | `ft_calloc`, `ft_strdup` | Allocate memory and duplicate strings |

### 2. Additional Functions

Utilities for manipulating strings, applying functions to characters, and writing to file descriptors.

| Function | Description |
| --- | --- |
| `ft_substr` | Creates a substring starting at a specified index |
| `ft_strjoin` | Concatenates two strings into a new string |
| `ft_strtrim` | Removes specified characters from both ends of a string |
| `ft_split` | Splits a string into a NULL-terminated array of strings |
| `ft_itoa` | Converts an integer into a string |
| `ft_strmapi` | Creates a new string by applying a function to each character |
| `ft_striteri` | Applies a function to each character of an existing string |
| `ft_putchar_fd` | Writes a character to a file descriptor |
| `ft_putstr_fd` | Writes a string to a file descriptor |
| `ft_putendl_fd` | Writes a string followed by a newline |
| `ft_putnbr_fd` | Writes an integer to a file descriptor |