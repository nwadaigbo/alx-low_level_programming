##C - Variadic functions
This project covers the use of variadic functions with the va_start, va_arg, and va_end macros as well as why and how to use the const type qualifier in C.

Variadic_functions.h: Header file containing definitions and prototypes for all types and functions written in the project.

Tasks
Beauty is variable, ugliness is constant

0-sum_them_all.c: C function that returns the sum of all its paramters.
If the parameter n==0, the function returns 0.
To be is to be the value of a variable

1-print_numbers.c: C function that prints numbers, followed by a new line.
Prototype: void print_numbers(const char *separator, const unsigned int n, ...);
where separator is the string to be printed between numbers
and n is the number of integers passed to the function
You are allowed to use printf
If separator is NULL, don’t print it
Print a new line at the end of your function
One woman's constant is another woman's variable

2-print_strings.c: C function that prints strings, followed by a new line.
Prototype: void print_strings(const char *separator, const unsigned int n, ...);
where separator is the string to be printed between the strings
and n is the number of strings passed to the function
You are allowed to use printf
If separator is NULL, don’t print it
If one of the string is NULL, print (nil) instead
Print a new line at the end of your function
To be is a to be the value of a variable

3-print_all.c: C function that prints anything.
where format is a list of types of arguments passed to the function
c: char
i: integer
f: float
s: char * (if the string is NULL, print (nil) instead
any other char should be ignored.
You are not allowed to use for, goto, ternary operator, else, do ... while
You can use a maximum of
2 while loops
2 if
You can declare a maximum of 9 variables
You are allowed to use printf
Print a new line at the end of your function.
