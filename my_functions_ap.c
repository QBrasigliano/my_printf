/*
** EPITECH PROJECT, 2022
** my_functions_ap
** File description:
** my_functions_ap
*/

#include <stdarg.h>
#include <unistd.h>

int my_putnbr(int nb);
int my_putchar(char c);
int my_putstr(char const *str);
int my_putfloat(float l);
int my_putnbr_bin(int nb);

int my_putnbr_ap(va_list list)
{
    return my_putnbr(va_arg(list, int));
}

int my_putchar_ap(va_list list)
{
    return my_putchar(va_arg(list, int));
}

int my_putstr_ap(va_list list)
{
    return my_putstr(va_arg(list, char*));
}

int my_putnbr_bin_ap(va_list list)
{
    return my_putnbr_bin(va_arg(list, int));
}

int my_putfloat_ap(va_list list)
{
    return my_putfloat(va_arg(list, double));
}
