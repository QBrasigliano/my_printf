/*
** EPITECH PROJECT, 2022
** my_functions_ap3.c
** File description:
** my_functions_ap
*/

#include <stdarg.h>
#include <unistd.h>

int my_putchar(char c);
int go_back(char *str);
int my_put_nbr_sci(double nb);
int my_put_nbr_sci_maj(double nb);
int my_put_nbr_double(double nb);
int my_put_nbr_double_maj(double nb);

int my_putchar_prct_ap(void)
{
    return my_putchar('%');
}

int my_put_nbr_sci_ap(va_list list)
{
    return my_put_nbr_sci(va_arg(list, double));
}

int my_put_nbr_sci_maj_ap(va_list list)
{
    return my_put_nbr_sci_maj(va_arg(list, double));
}

int my_put_nbr_double_ap(va_list list)
{
    return my_put_nbr_double(va_arg(list, double));
}

int my_put_nbr_double_maj_ap(va_list list)
{
    return my_put_nbr_double_maj(va_arg(list, double));
}
