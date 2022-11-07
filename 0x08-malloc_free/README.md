##C - malloc, free
This project is covers what I learned about the difference between automatic and dynamic location as well as how to use malloc, free, and valgrind in C.

Tasks
Float like a butterfly, sting like a bee

0-create_array.c: C function that returns a pointer to a newly-allocated space in memory containing an array of characters.
The array of characters is initialized to the parameter c.
If the function fails or receives size equal to 0 - returns NULL.
The woman who has no imagination has no wings

1-strdup.c: C function that returns a pointer to a newly-allocated space in memory containing a copy of the string passed as parameter.
Returns a pointer to a new string which is a duplicate of the string str.
Memory for the new string is obtained with malloc and can be freed with free.
If str is NULL or insufficient memory was available - returns NULL.
He who is not courageous enough to take risks will accomplish nothing in life

2-str_concat.c: C function that returns a pointer to a newly-allocated space in memory containing the concatenation of two strings passed as parameters.
The returned pointer contains the contents of s1 followed by s2 and is null-terminated.
The function treats NULL as an empty string.
If the function fails - returns NULL.
If you even dream of beating me you'd better wake up and apologize

3-alloc_grid.c: C function that returns a pointer to a newly-allocated space in memory containing a two-dimensional array of integers.
Each element of the two-dimensional array is initialized to 0.
If the function fails or either of width or height is 0 or negative - returns NULL.
It's not bragging if you can back it up

4-free_grid.c: C function that frees a two-dimensional array previsouly created by the alloc_grid function defined in 3-alloc_grid.c.
The program does not crash upon receiving invalid two-dimensional arrays.
