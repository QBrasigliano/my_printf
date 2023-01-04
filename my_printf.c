/*
** EPITECH PROJECT, 2022
** my_printf.c
** File description:
** my_printf
*/

#include <stdarg.h>
#include <unistd.h>
#include "my_struct.h"
#include <stdio.h>

int my_putchar(char c);

flags_t flag[] = {
    {'d', my_putnbr_ap},
    {'i', my_putnbr_ap},
    {'c', my_putchar_ap},
    {'%', my_putchar_prct_ap},
    {'s', my_putstr_ap},
    {'b', my_putnbr_bin_ap},
    {'S', my_putnbr_pre_oct_ap},
    {'o', my_putnbr_oct_ap},
    {'x', my_putnbr_hexa_ap},
    {'X', my_putnbr_hexa_maj_ap},
    {'u', my_putnbr_un_ap},
    {'f', my_putfloat_ap},
    {'F', my_putfloat_ap},
    {'e', my_put_nbr_sci_ap},
    {'E', my_put_nbr_sci_maj_ap},
    {'g', my_put_nbr_double_ap},
    {'G', my_put_nbr_double_maj_ap},
};

int find_pcts(char const *str, int *ret, va_list list)
{
    for (int i = 0; i < 17 ; i++) {
        if (flag[i].c == *str) {
            *ret += flag[i].ptr(list);
        }
    }
    return *ret;
}

int my_printf(char const *str, ...)
{
    va_list list;
    int ret = 0;

    va_start (list, str);
    while (*str != '\0') {
        if (*str == '%') {
            str++;
            find_pcts(str, &ret, list);
        } else {
            ret += my_putchar(*str);
        }
        str++;
    }
    va_end(list);
    return ret;
}
