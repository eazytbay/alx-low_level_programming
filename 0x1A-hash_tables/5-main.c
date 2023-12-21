#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_print(ht);
    custom_hash_table_fix(ht, "c", "fun");
    custom_hash_table_fix(ht, "python", "awesome");
    custom_hash_table_fix(ht, "Bob", "and Kris love asm");
    custom_hash_table_fix(ht, "N", "queens");
    custom_hash_table_fix(ht, "Asterix", "Obelix");
    custom_hash_table_fix(ht, "Betty", "Cool");
    custom_hash_table_fix(ht, "98", "Battery Street");
    hash_table_print(ht);
    return (EXIT_SUCCESS);
}
