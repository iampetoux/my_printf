/*
** ETNA PROJECT, 11/01/2019 by flamen_m
** my_printf.c
** File description:
**      [...]
*/

#include "lib.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
