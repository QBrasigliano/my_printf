/*
** EPITECH PROJECT, 2022
** my_functions3.c
** File description:
** my_functions
*/

int my_putchar(char c);
int my_putfloat(float nb);
int my_putnbr(int nb);
int my_putstr(char const *str);

int my_put_nbr_sci2(int i, int ret, double nb)
{
    if (nb < 0) {
        ret += my_putchar('-');
        nb = nb * (-1);
    }
    for (; nb >= 10 || nb <= 1; i++)
        nb = nb * 10;
    my_putfloat(nb);
    my_putstr("e-");
    if (i < 10)
        my_putchar('0');
    my_putnbr(i);
    return ret;
}

int my_put_nbr_sci(double nb)
{
    int ret = 12;
    int i = 0;

    if (nb >= 1 || nb <= -1) {
        if (nb <= -1) {
            ret += my_putchar('-');
            nb = nb * (-1);
        }
        for (; nb >= 10 || nb < 0; i++)
            nb = nb / 10;
        my_putfloat(nb);
        my_putstr("e+");
        if (nb < 10)
            my_putchar('0');
        my_putnbr(i);
    } else {
        ret = my_put_nbr_sci2(i, ret, nb);
    }
    return ret;
}

int my_put_nbr_sci_maj2(int i, int ret, double nb)
{
    if (nb < 0) {
        ret += my_putchar('-');
        nb = nb * (-1);
    }
    for (; nb >= 10 || nb <= 1; i++)
        nb = nb * 10;
    my_putfloat(nb);
    my_putstr("E-");
    if (i < 10)
        my_putchar('0');
    my_putnbr(i);
    return ret;
}

int my_put_nbr_sci_maj(double nb)
{
    int ret = 12;
    int i = 0;

    if (nb >= 1 || nb <= -1) {
        if (nb <= -1) {
            ret += my_putchar('-');
            nb = nb * (-1);
        }
        for (; nb >= 10 || nb < 0; i++)
            nb = nb / 10;
        my_putfloat(nb);
        my_putstr("E+");
        if (nb < 10)
            my_putchar('0');
        my_putnbr(i);
    } else {
        ret = my_put_nbr_sci_maj2(i, ret, nb);
    }
    return ret;
}
