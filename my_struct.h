/*
** EPITECH PROJECT, 2022
** my_struct.h
** File description:
** my_struct
*/
#pragma once
#include <unistd.h>
#include <stdarg.h>

int my_putchar_ap(va_list);
int my_putnbr_ap(va_list);
int my_putstr_ap(va_list);
int my_putnbr_bin_ap(va_list);
int my_putnbr_pre_oct_ap(va_list);
int my_putnbr_oct_ap(va_list);
int my_putnbr_hexa_ap(va_list);
int my_putnbr_hexa_maj_ap(va_list);
int my_putnbr_un_ap(va_list);
int my_putchar_prct_ap(va_list);
int my_putfloat_ap(va_list);
int go_back_ap(va_list);
int my_put_nbr_sci_ap(va_list);
int my_put_nbr_sci_maj_ap(va_list);
int my_put_nbr_double_ap(va_list);
int my_put_nbr_double_maj_ap(va_list);

typedef struct flag_s {
    char c;
    int (*ptr)(va_list);
} flags_t;
