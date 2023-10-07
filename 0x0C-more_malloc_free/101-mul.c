#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * 
int is_digit(char c)
{
    return c >= '0' && c <= '9';
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        _putchar('E');
        _putchar('r');
        _putchar('r');
        _putchar('o');
        _putchar('r');
        _putchar('\n');
        exit(98);
    }

    char *num1 = argv[1];
    char *num2 = argv[2];
    int result_len = strlen(num1) + strlen(num2);
    int *result = (int *)malloc(result_len * sizeof(int));

    if (result == NULL) {
        _putchar('E');
        _putchar('r');
        _putchar('r');
        _putchar('o');
        _putchar('r');
        _putchar('\n');
        exit(98);
    }

    for (int i = 0; i < result_len; i++) {
        result[i] = 0;
    }

    for (int i = strlen(num1) - 1; i >= 0; i--) {
        if (!is_digit(num1[i])) {
            _putchar('E');
            _putchar('r');
            _putchar('r');
            _putchar('o');
            _putchar('r');
            _putchar('\n');
            free(result);
            exit(98);
        }

        for (int j = strlen(num2) - 1; j >= 0; j--) {
            if (!is_digit(num2[j])) {
                _putchar('E');
                _putchar('r');
                _putchar('r');
                _putchar('o');
                _putchar('r');
                _putchar('\n');
                free(result);
                exit(98);
            }

            int product = (num1[i] - '0') * (num2[j] - '0');
            int sum = result[i + j + 1] + product;
            result[i + j + 1] = sum % 10;
            result[i + j] += sum / 10;
        }
    }

    int printed = 0;
    for (int i = 0; i < result_len; i++) {
        if (result[i] != 0) {
            printed = 1;
        }
        if (printed) {
            _putchar(result[i] + '0');
        }
    }

    if (!printed) {
        _putchar('0');
    }

    _putchar('\n');

    free(result);
    return (0);
