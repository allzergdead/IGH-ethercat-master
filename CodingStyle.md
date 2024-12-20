vim: spelllang=en tw=78

This is a short introduction to the coding style that shall be used. The below
rules are applicable for all C source files, except the Ethernet drivers, for
which the Linux Kernel coding style shall be used to minimize the
differences).

# Line length

- Lines shall not exceed 78 characters.

# Whitespace

- Indentation shall be done using 4 space characters

- No whitespace shall be left at the end of a line.

- After commas, colons and semicolons, a single space shall be
  placed (if not followed by a line break).

- Binary operators (`=`, `==`, `~=`, `|`, `||`, etc.) shall be enclosed by 2 spaces
  (except `.` and `->`).

# Placing braces

- Braces shall be placed in the following way (K&R style):

```c
if (...) {
    ...
} else if (...) {
    ...
} else {
    ...
}

int function(...)
{
    ...
}
```

# Defines and Macros

- Defines and macros shall be named in CAPITAL letters. If a macro contains
  multiple statements, they should be enclosed by a 'do {} while (0)' loop.
  Macro parameters shall also be capital letters and shall be enclosed py
  parantheses if necessary.

```c
#define MACRO(A, B) \
    do { \
        if ((A) == 1) { \
            statement(B); \
        } while (0)
```
