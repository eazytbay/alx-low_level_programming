0x12. C - Singly linked lists
TASKS
0. Print list
This is a function that prints all the elements of a list_t list.
Prototype: size_t print_list(const list_t *h);

1. List length

This is a function that returns the number of elements in a linked list_t list.
Prototype: size_t list_len(const list_t *h);

2. Add node
This is a function that adds a new node at the beginning of a list_t list.

Prototype: list_t *add_node(list_t **head, const char *str);

3. Add node at the end

This a function that adds a new node at the end of a list_t list.

Prototype: list_t *add_node_end(list_t **head, const char *str);

4. Free list
This is a function that frees a list_t list.

Prototype: void free_list(list_t *head);

FOR THE ADVANCED TASKS
5. The Hare and the Tortoise
This is a function that prints You're beat! and yet, you must allow,\nI bore my house upon my back!\n beforethe main function is executed.

6. Real programmers can write assembly code in any language
This is a 64-bit program in assembly that prints Hello, Holberton, followed by a new line.
