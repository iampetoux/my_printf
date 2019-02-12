/*
** ETNA PROJECT, 11/01/2019 by flamen_m
** my_printf.c
** File description:
**      [...]
*/

#include "lib.h"

void my_putstr(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
}
