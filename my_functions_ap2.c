/*
** EPITECH PROJECT, 2022
** my_functions_ap2.c
** File description:
** my_functions_ap
*/

#include <stdarg.h>
#include <unistd.h>

int my_putnbr_pre_oct(int nb);
int my_putnbr_oct(int nb);
int my_putnbr_hexa(int nb);
int my_putnbr_hexa_maj(int nb);
int my_putnbr_un(unsigned int nb);

int my_putnbr_pre_oct_ap(va_list list)
{
    return my_putnbr_pre_oct(va_arg(list, int));
}

int my_putnbr_oct_ap(va_list list)
{
    return my_putnbr_oct(va_arg(list, int));
}

int my_putnbr_hexa_ap(va_list list)
{
    return my_putnbr_hexa(va_arg(list, int));
}

int my_putnbr_hexa_maj_ap(va_list list)
{
    return my_putnbr_hexa_maj(va_arg(list, int));
}

int my_putnbr_un_ap(va_list list)
{
    return my_putnbr_un(va_arg(list, int));
}
