/*
** ETNA PROJECT, 11/01/2019 by flamen_m
** my_printf.c
** File description:
**      [...]
*/

#include "lib.h"

void my_putnbr_base(int n, char *base)
{
    int i;

    i = my_strlen(base);
    if (n >= i) {
        my_putnbr_base(n / i, base);
        my_putchar(base[n % i]);
    } else if (n >= 0 && n < i)
        my_putchar(base[n % i]);
}
