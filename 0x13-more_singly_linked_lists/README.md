## C - More singly linked lists
This project continued the practice aof building and using singly linked lists in C.

lists.h: Header file containing definitions and prototypes for all types and functions written for the project.
Tasks
Print list
0-print_listint.c: C function that prints all the elements of a listint_t linked list.
Returns the number of nodes in the listint_t list.
Prototype: size_t print_listint(const listint_t *h);
List length

1-listint_len.c: C function that returns the number of elements in a listint_t linked list.
Prototype: size_t listint_len(const listint_t *h);
Add node

2-add_nodeint.c: C function that adds a new node at the beginning of a listint_t linked list.
Prototype: listint_t *add_nodeint(listint_t **head, const int n);
If the function fails - returns NULL.
Otherwise - returns the address of the new element.
Add node at the end

3-add_nodeint_end.c: C function that adds a new node at the end of a listint_t linked list.
Prototype: listint_t *add_nodeint_end(listint_t **head, const int n);
If the function fails - returns NULL.
Otherwise - returns the address of the new element.
Free list

4-free_listint.c: C function that frees a listint_t linked list.
Prototype: void free_listint(listint_t *head);
Free

5-free_listint2.c: C function that frees a listint_t linked list.
Sets the head to NULL.
Prototype: void free_listint2(listint_t **head);
Pop

6-pop_listint.c: C function that deletes the head node of a listint_t linked list.
If the linked list is empty - returns 0.
Otherwise - returns the head node's data (n).
Prototype: int pop_listint(listint_t **head);
Get node at index

7-get_nodeint.c: C function that returns the nth node of a listint_t linked list.
Prototype: listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
where index is the index of the node, starting at 0
if the node does not exist, return NULL
Sum list

8-sum_listint.c: C function that returns the sum of all the data (n) of a listint_t linked list.
If the linked list is empty - returns 0.
Otherwise - returns the sum of all the data (n).
Prototype: int sum_listint(listint_t *head);
Insert

9-insert_nodeint.c: C function that inserts a new node at a given position.
Prototype: listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
where idx is the index of the list where the new node should be added. Index starts at 0
Returns: the address of the new node, or NULL if it failed
if it is not possible to add the new node at index idx, do not add the new node and return NULL
Delete at index

10-delete_nodeint.c: C function that deletes the node at a given index of a listint_t linked list.
Prototype: int delete_nodeint_at_index(listint_t **head, unsigned int index);
where index is the index of the node that should be deleted. Index starts at 0
Returns: 1 if it succeeded, -1 if it failed
Reverse list

100-reverse_listint.c: C function that reverses a listint_t linked list.
Prototype: listint_t *reverse_listint(listint_t **head);
Returns: a pointer to the first node of the reversed list
You are not allowed to use more than 1 loop.
You are not allowed to use malloc, free or arrays
You can only declare a maximum of two variables in your function
Print (safe version)

101-print_listint_safe.c: C function that prints a listint_t linked list safely (ie. can free lists containing loops).
Prototype: size_t print_listint_safe(const listint_t *head);
Returns: the number of nodes in the list
This function can print lists with a loop
You should go through the list only once
If the function fails, exit the program with status 98
Free (safe version)

102-free_listint_safe.c: C function that frees a listint_t linked list safely (ie. can free lists containing loops).
Prototype: size_t free_listint_safe(listint_t **h);
Returns the size of the list that was freed.
Sets the head to NULL.
Find the loop

103-find_loop.c: C function that finds the loop contained in a listint_t linked list using a maximum of two variables.
Prototype: listint_t *find_listint_loop(listint_t *head);
If no loop is found - returns NULL.
Otherwise - returns the address of the node where the loop starts.
