/*
** ETNA PROJECT, 11/01/2019 by flamen_m
** my_printf.c
** File description:
**      [...]
*/

#include "lib.h"

int my_printf(const char *str, ...)
{
    int i = 0;
    va_list list;

    va_start(list, str);
    while (str[i]) {
        if (str[i] == '%') {
            print_my_one(str, list, i);
            print_my_two(str, list, i);
            i++;
        } else
            my_putchar(str[i]);
            i++;
    }
    va_end(list);
    return (1);
}

int print_my_one(const char *str, va_list list, int i)
{
    switch (str[i + 1]) {
    case 's' :
        my_putstr(va_arg(list, *char));
        break;
    case 'd' :
        my_putnbr(va_arg(list, int));
        break;
    case 'i' :
        my_putnbr(va_arg(list, int));
        break;
    case 'c' :
        my_putchar(va_arg(list, int));
        break;
    }
    return (1);
}

int print_my_two(const char *str, va_list list, int i)
{
    switch (str[i + 1]) {
    case 'o' :
        my_putnbr_base(va_arg(list, int), "01234567");
        break;
    case 'u' :
        my_putnbr_unsigned(va_arg(list, unsigned int));
        break;
    case 'x' :
        my_putnbr_base(va_arg(list, int), "0123456789abcdef");
        break;
    case 'X' :
        my_putnbr_base(va_arg(list, int), "0123456789ABCDEF");
        break;
    case '%' :
        my_putchar('%');
        break;
    }
    return (1);
}
