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
    char *key;
    char *value;

    ht = hash_table_create(1024);
    custom_hash_table_fix(ht, "c", "fun");
    custom_hash_table_fix(ht, "python", "awesome");
    custom_hash_table_fix(ht, "Bob", "and Kris love asm");
    custom_hash_table_fix(ht, "N", "queens");
    custom_hash_table_fix(ht, "Asterix", "Obelix");
    custom_hash_table_fix(ht, "Betty", "Cool");
    custom_hash_table_fix(ht, "98", "Battery Streetz");
    key = strdup("Tim");
    value = strdup("Britton");
    custom_hash_table_fix(ht, key, value);
    key[0] = '\0';
    value[0] = '\0';
    free(key);
    free(value);
    custom_hash_table_fix(ht, "98", "Battery Street"); 
    custom_hash_table_fix(ht, "hetairas", "Bob");
    custom_hash_table_fix(ht, "hetairas", "Bob Z");
    custom_hash_table_fix(ht, "mentioner", "Bob");
    custom_hash_table_fix(ht, "hetairas", "Bob Z Chu");
    hash_table_print(ht);
    hash_table_delete(ht);
    return (EXIT_SUCCESS);
}
