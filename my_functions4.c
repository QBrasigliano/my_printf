/*
** EPITECH PROJECT, 2022
** my_functions4.c
** File description:
** my_functions
*/

int my_putchar(char c);
int my_putfloat(float nb);
int my_putnbr(int nb);
int my_putstr(char const *str);
int my_put_nbr_sci(double nb);
int my_put_nbr_sci_maj(double nb);

int my_put_nbr_double(double nb)
{
    int ret = 0;
    if (nb > 0.0001 && nb <= 1000000) {
        ret += my_putfloat(nb);
    } else if (nb < -0.0001 && nb >= -1000000) {
        ret += my_putfloat(nb);
    } else {
        ret += my_put_nbr_sci(nb);
    }
    return ret;
}

int my_put_nbr_double_maj(double nb)
{
    int ret = 0;
    if (nb == 0)
        my_putchar(1);
    if (nb > 0.0001 && nb <= 1000000) {
        ret += my_putfloat(nb);
    } else if (nb < -0.0001 && nb >= -1000000) {
        ret += my_putfloat(nb);
    } else {
        ret += my_put_nbr_sci_maj(nb);
    }
    return ret;
}
