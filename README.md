_This activity has been created as part of the 42 curriculum by ccabanne._

# Description
Libft is a pure C89 library. Consisting of re-implementing :
- A subset of the C Standard Library
- Some useful string manipulation functions
- Functions for writing a character, string or integer to a file descriptor
- Singly Linked Lists and some basic operations on them

Easiest way to look at the full list is to look at [libft's header](libft.h).

# Instructions
To compile this library, simply run `make`.  
You may use the supplied additional rules to cleanup or (re)compile :
- `all` (default rule): makes libft.a
- `libft.a`: compiles each source file, then bundles the resulting object files into the libft.a archive
- `clean`: deletes each individual object file
- `fclean`: runs the `clean` rule then deletes libft.a
- `re`: runs `fclean` then `all`

To use this library, simply add libft.a to your compile command. Such as :
`cc main.c libft.a` or `cc -L $LIBFT_PATH main.c -lft`

# Resources
Function prototypes and behaviors are taken from manpages on a Fedora 44 system.
A good online resource for them is [Arch Linux's manpages website](https://man.archlinux.org/).  
Function behavior was also tested against libraries installed on a Fedora 44 system.  
No AI was used in this project.
