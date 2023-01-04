/*
** EPITECH PROJECT, 2022
** test.c
** File description:
** test
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

int my_printf(char const *str, ...);

Test(my_printf, multi, .init=cr_redirect_stdout) {
    int res = my_printf ("%d%%%d", 4, 4);
    cr_assert_stdout_eq_str ("4%4");
    cr_assert_eq (res, 3);
}

Test(my_printf, d, .init=cr_redirect_stdout) {
    int res = my_printf ("mange tes %d morts", -90);
    cr_assert_stdout_eq_str ("mange tes -90 morts");
    cr_assert_eq (res, 19);
}

Test(my_printf, i, .init=cr_redirect_stdout) {
    int res = my_printf("mange tes %i morts", 1734);
    cr_assert_stdout_eq_str("mange tes 1734 morts");
    cr_assert_eq (res, 20);
}

Test(my_printf, c, .init=cr_redirect_stdout) {
    int res = my_printf ("mange tes %c morts", 'J');
    cr_assert_stdout_eq_str ("mange tes J morts");
    cr_assert_eq (res, 17);
}

Test(my_printf, s, .init=cr_redirect_stdout) {
    int res = my_printf ("mange tes morts %s", "mon ami");
    cr_assert_stdout_eq_str ("mange tes morts mon ami");
    cr_assert_eq (res, 23);
}

Test(my_printf, prct, .init=cr_redirect_stdout) {
    int res = my_printf ("mange tes %% morts");
    cr_assert_stdout_eq_str ("mange tes % morts");
    cr_assert_eq (res, 17);
}

Test(my_printf, b, .init=cr_redirect_stdout) {
    int res = my_printf("mange tes %b morts", 42);
    cr_assert_stdout_eq_str("mange tes 101010 morts");
    cr_assert_eq (res, 22);
}

Test(my_printf, S, .init=cr_redirect_stdout) {
    int res = my_printf ("mange tes %S morts", 42);
    cr_assert_stdout_eq_str ("mange tes \\052 morts");
    cr_assert_eq (res, 20);
}

Test(my_printf, S1, .init=cr_redirect_stdout) {
    int res = my_printf ("mange tes %S morts", 2);
    cr_assert_stdout_eq_str ("mange tes \\002 morts");
    cr_assert_eq (res, 20);
}

Test(my_printf, o, .init=cr_redirect_stdout) {
    int res = my_printf ("mange tes%omorts", 9);
    cr_assert_stdout_eq_str ("mange tes11morts");
    cr_assert_eq (res, 16);
}

Test(my_printf, o1, .init=cr_redirect_stdout) {
    int res = my_printf ("mange tes %o morts", 1);
    cr_assert_stdout_eq_str ("mange tes 1 morts");
    cr_assert_eq (res, 17);
}

Test(my_printf, x, .init=cr_redirect_stdout) {
    int res = my_printf ("mange tes %x morts", 90);
    cr_assert_stdout_eq_str ("mange tes 5a morts");
    cr_assert_eq (res, 18);
}

Test(my_printf, x1, .init=cr_redirect_stdout) {
    int res = my_printf ("mange tes %x morts", 12);
    cr_assert_stdout_eq_str ("mange tes c morts");
    cr_assert_eq (res, 17);
}

Test(my_printf, X, .init=cr_redirect_stdout) {
    int res = my_printf ("mange tes %X morts", 12);
    cr_assert_stdout_eq_str ("mange tes C morts");
    cr_assert_eq (res, 17);
}

Test(my_printf, X1, .init=cr_redirect_stdout) {
    int res = my_printf ("mange tes %X morts", 90);
    cr_assert_stdout_eq_str ("mange tes 5A morts");
    cr_assert_eq (res, 18);
}

Test(my_printf, u, .init=cr_redirect_stdout) {
    int res = my_printf ("mange tes %u morts", 90);
    cr_assert_stdout_eq_str ("mange tes 90 morts");
    cr_assert_eq (res, 18);
}

Test(my_printf, u1, .init=cr_redirect_stdout) {
    int res = my_printf ("mange tes %u morts", -90);
    cr_assert_stdout_eq_str ("mange tes 4294967206 morts");
    cr_assert_eq (res, 26);
}

Test(my_printf, f, .init=cr_redirect_stdout) {
    int res = my_printf ("mange tes %f morts", 9.0);
    cr_assert_stdout_eq_str ("mange tes 9.000000 morts");
    cr_assert_eq (res, 24);
}

Test(my_printf, f_neg, .init=cr_redirect_stdout) {
    int res = my_printf ("mange tes %f morts", -9.0);
    cr_assert_stdout_eq_str ("mange tes -9.000000 morts");
    cr_assert_eq (res, 25);
}

Test(my_printf, f1, .init=cr_redirect_stdout) {
    int res = my_printf ("mange tes %f morts", 0.1212299);
    cr_assert_stdout_eq_str ("mange tes 0.121229 morts");
    cr_assert_eq (res, 24);
}

Test(my_printf, F, .init=cr_redirect_stdout) {
    int res = my_printf ("mange tes %F morts", 9.0);
    cr_assert_stdout_eq_str ("mange tes 9.000000 morts");
    cr_assert_eq (res, 24);
}

Test(my_printf, F1, .init=cr_redirect_stdout) {
    int res = my_printf ("mange tes %F morts", 0.1212299);
    cr_assert_stdout_eq_str ("mange tes 0.121229 morts");
    cr_assert_eq (res, 24);
}

/*Test (my_printf, n, .init=cr_redirect_stdout) {
    int res = my_printf ("mange tes %n morts");
    cr_assert_stdout_eq_str ("mange tes 16 morts");
    cr_assert_eq (res, 18);
}*/

Test(my_printf, e, .init=cr_redirect_stdout) {
    int res = my_printf ("mange tes %e morts", 0.000007);
    cr_assert_stdout_eq_str ("mange tes 7.000000e-06 morts");
    cr_assert_eq (res, 28);
}

Test(my_printf, e1, .init=cr_redirect_stdout) {
    int res = my_printf ("mange tes %e morts", 998698.986987);
    cr_assert_stdout_eq_str ("mange tes 9.986990e+05 morts");
    cr_assert_eq (res, 28);
}

Test(my_printf, e_neg, .init=cr_redirect_stdout) {
    int res = my_printf ("mange tes %E morts", -0.000086654768676);
    cr_assert_stdout_eq_str ("mange tes -8.665476E-05 morts");
    cr_assert_eq (res, 29);
}

Test(my_printf, e_neg1, .init=cr_redirect_stdout) {
    int res = my_printf ("mange tes %e morts", -0.000086654768676);
    cr_assert_stdout_eq_str ("mange tes -8.665476e-05 morts");
    cr_assert_eq (res, 29);
}

Test(my_printf, E, .init=cr_redirect_stdout) {
    int res = my_printf ("mange tes %E morts", 89767.857);
    cr_assert_stdout_eq_str ("mange tes 8.976785E+04 morts");
    cr_assert_eq (res, 28);
}

Test(my_printf, E1, .init=cr_redirect_stdout) {
    int res = my_printf ("mange tes %E morts", 0.000086654768676);
    cr_assert_stdout_eq_str ("mange tes 8.665476E-05 morts");
    cr_assert_eq (res, 28);
}

Test(my_printf, E_neg, .init=cr_redirect_stdout) {
    int res = my_printf ("mange tes %E morts", -0.000086654768676);
    cr_assert_stdout_eq_str ("mange tes -8.665476E-05 morts");
    cr_assert_eq (res, 29);
}

Test(my_printf, E_neg1, .init=cr_redirect_stdout) {
    int res = my_printf ("mange tes %E morts", -0.000086654768676);
    cr_assert_stdout_eq_str ("mange tes -8.665476E-05 morts");
    cr_assert_eq (res, 29);
}

Test(my_printf, g, .init=cr_redirect_stdout) {
    int res = my_printf ("%g", -0.00001234567);
    cr_assert_stdout_eq_str ("-1.234567e-05");
    cr_assert_eq (res, 13);
}

Test(my_printf, g1, .init=cr_redirect_stdout) {
    int res = my_printf ("%g", -1234567.0);
    cr_assert_stdout_eq_str ("-1.234567e+06");
    cr_assert_eq (res, 13);
}

Test(my_printf, g2, .init=cr_redirect_stdout) {
    int res = my_printf ("%g", 0.001234567);
    cr_assert_stdout_eq_str ("0.001234");
    cr_assert_eq (res, 8);
}

Test(my_printf, G, .init=cr_redirect_stdout) {
    int res = my_printf ("%G", 0.00001234567);
    cr_assert_stdout_eq_str ("1.234567E-05");
    cr_assert_eq (res, 12);
}

Test(my_printf, G1, .init=cr_redirect_stdout) {
    int res = my_printf ("%G", 1234567.0);
    cr_assert_stdout_eq_str ("1.234567E+06");
    cr_assert_eq (res, 12);
}