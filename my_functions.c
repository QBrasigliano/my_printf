/*
** EPITECH PROJECT, 2022
** my_functions.c
** File description:
** my_functions
*/

#include <unistd.h>

int my_putchar(char c)
{
    write(1, &c, 1);
    return 1;
}

int my_putstr(char const *str)
{
    int ret = 0;

    if (*str == '\0')
        return ret;
    ret += my_putchar(*str);
    ret += my_putstr(str + 1);
    return ret;
}

int my_putnbr(int nb)
{
    int ret = 1;

    if (nb < 0) {
        my_putchar('-');
        ret++;
        nb = -nb;
    }
    char c = nb % 10 + '0';
    if (nb >= 10) {
        ret += my_putnbr(nb / 10);
    }
    my_putchar(c);
    return ret;
}

int my_putnbr_bin(unsigned int nb)
{
    int ret = 0;
    char *c = "01";

    if (nb < 2) {
        ret += my_putchar(c[nb]);
    } else {
        ret += my_putnbr_bin(nb / 2);
        ret += my_putnbr_bin(nb % 2);
    }
    return ret;
}

int my_putfloat(float nb)
{
    int ret = 0;

    if (nb < 0) {
        ret += my_putchar('-');
        nb = -nb;
    }
    ret += my_putnbr((int) nb);
    nb -= (int) nb;
    my_putchar('.');
    ret++;
    for (int i = 0; i < 6 ; i++) {
        nb *= 10.f;
        ret += my_putchar('0' + (int) nb % 10);
    }
    return ret;
}
