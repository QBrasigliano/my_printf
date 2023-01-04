##
## EPITECH PROJECT, 2022
## Marius
## File description:
## makefile
##

CCTEST = gcc *.c tests/test.c -lcriterion --coverage && ./a.out

CFLAGS = -W -Wall -Wextra -Werror

SRC = 	my_printf.c \
		my_functions.c \
		my_functions2.c \
		my_functions3.c \
		my_functions4.c \
		my_functions_ap.c \
		my_functions_ap2.c \
		my_functions_ap3.c \
		my_functions_ap4.c

TESTS = tests/test.c

OBJ = $(SRC:.c=.o)

TARGET = libmy.a

$(TARGET): $(OBJ)
	ar rc $(TARGET) $(OBJ)

all: $(TARGET)

tests_run :
	$(CCTEST) $(SCR) $(TESTS) $(TARGET)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(TARGET)

re: fclean all
