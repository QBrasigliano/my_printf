/*
** EPITECH PROJECT, 2022
** my_functions2.c
** File description:
** my_functions
*/

#include <unistd.h>

int my_putchar(char c);

int my_putnbr_oct(unsigned int nb)
{
    int ret = 0;
    char *c = "01234567";

    if (nb < 8) {
        ret += my_putchar(c[nb]);
    } else {
        ret += my_putnbr_oct(nb / 8);
        ret += my_putnbr_oct(nb % 8);
    }
    return ret;
}

int my_putnbr_pre_oct(int nb)
{
    int ret = 0;
    ret += my_putchar('\\');

    if (nb < 8) {
        ret += my_putchar('0');
        ret += my_putchar('0');
    }
    if (nb >= 8 && nb < 64)
        ret += my_putchar('0');
    ret += my_putnbr_oct(nb);
    return ret;
}

int my_putnbr_hexa_maj(int nb)
{
    int ret = 0;
    char *c = "0123456789ABCDEF";

    if (nb < 16) {
        ret += my_putchar(c[nb]);
    } else {
        ret += my_putnbr_hexa_maj(nb / 16);
        ret += my_putnbr_hexa_maj(nb % 16);
    }
    return ret;
}

int my_putnbr_hexa(int nb)
{
    int ret = 0;
    char *c = "0123456789abcdef";

    if (nb < 16) {
        ret += my_putchar(c[nb]);
    } else {
        ret += my_putnbr_hexa(nb / 16);
        ret += my_putnbr_hexa(nb % 16);
    }
    return ret;
}

int my_putnbr_un(unsigned int nb)
{
    int ret = 0;
    char c = nb % 10 + '0';

    if (nb >= 10) {
        ret += my_putnbr_un(nb / 10);
    }
    my_putchar(c);
    return ret + 1;
}
