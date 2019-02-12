/*
** ETNA PROJECT, 11/01/2019 by flamen_m
** my_printf.c
** File description:
**      [...]
*/

#include "lib.h"

void my_putnbr(int n)
{
    long nb = n;

    if (nb < 0) {
        my_putchar('-');
        nb *= -1;
    }
    if (nb >= 0 && nb <= 9)
        my_putchar(nb + 48);
    else {
        my_putnbr(nb / 10);
        my_putnbr(nb % 10);
    }
}

void my_putnbr_unsigned(unsigned int n)
{
    long nb = n;

    if (nb < 0) {
        my_putchar('-');
        nb *= -1;
    }
    if (nb >= 0 && nb <= 9)
        my_putchar(nb + 48);
    else {
        my_putnbr(nb / 10);
        my_putnbr(nb % 10);
    }
}
