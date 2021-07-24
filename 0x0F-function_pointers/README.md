
# # 0x0F. C - Function pointers



## Tasks
### 0. What's my name
Write a function that prints a name.

> [**0-print_name.c**](https://github.com/andresdiaz10/holbertonschool-low_level_programming/blob/main/0x0F-function_pointers/0-print_name.c)
### 1. If you spend too much time thinking about a thing, you'll never get it done
Write a function that executes a function given as a parameter on each element of an array.

> [**1-array_iterator.c**](https://github.com/andresdiaz10/holbertonschool-low_level_programming/blob/main/0x0F-function_pointers/1-array_iterator.c)
#### 2. To hell with circumstances; I create opportunities
Write a function that searches for an integer.
> [**2-int_index.c**](https://github.com/andresdiaz10/holbertonschool-low_level_programming/blob/main/0x0F-function_pointers/2-int_index.c)
### 3. A goal is not always meant to be reached, it often serves simply as something to aim at
Write a program that performs simple operations.
#### > [**3-calc.h**](https://github.com/andresdiaz10/holbertonschool-low_level_programming/blob/main/0x0F-function_pointers/3-calc.h)
This file should contain all the function prototypes and data structures used by the program.
#### > [**3-op_functions.c**](https://github.com/andresdiaz10/holbertonschool-low_level_programming/blob/main/0x0F-function_pointers/3-op_functions.c)
This file should contain the definition for all calculation functions.
#### > [**3-get_op_func.c**](https://github.com/andresdiaz10/holbertonschool-low_level_programming/blob/main/0x0F-function_pointers/3-get_op_func.c)
This file should contain the function that selects the correct function to perform the operation asked by the user.
#### > [**3-main.c**](https://github.com/andresdiaz10/holbertonschool-low_level_programming/blob/main/0x0F-function_pointers/3-main.c)
- Print the mathematical operation
- Usage:  `./out a operator b`
- if the number of arguments is wrong, print Error, followed by a new line, and exit with the status 98
- if the operator is none of the above, print Error, followed by a new line, and exit with the status 99
- if the user tries to divide (/ or %) by 0, print Error, followed by a new line, and exit with the status 100
