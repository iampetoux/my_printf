/*
** ETNA PROJECT, 11/01/2019 by flamen_m
** my_printf.c
** File description:
**      [...]
*/

#include <unistd.h>
#include <stdarg.h>

#ifndef LIB_H
#define LIB_H

// FUNCTIONS
int my_strlen(char *str);
void my_putstr(char *str);
void my_putchar(char c);
void my_putnbr_base(int n, char *base);
void my_putnbr(int n);
void my_putnbr_unsigned(unsigned int n);
int print_my_one(const char *str, va_list list, int i);
int print_my_two(const char *str, va_list list, int i);

#endif
