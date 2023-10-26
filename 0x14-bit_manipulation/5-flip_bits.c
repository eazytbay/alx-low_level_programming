#include "main.h"
/**
 * flip_bits - A function that Calculates the number of bits
 * that need to change to transform one number into another.
 * @n: The first number.
 * @m: The second number.
 * Return: The count of bits that must be flipped to reach the other number.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor_rslt = n ^ m;
unsigned int cnt = 0;
while (xor_rslt > 0)
{
cnt += xor_rslt & 1;
xor_rslt >>= 1;
}
return (cnt);
}
