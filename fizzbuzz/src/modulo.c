/*
** EPITECH PROJECT, 2019
** modulo
** File description:
** modulo
*/

#include "../include/header.h"

int    modulo_tree(int c)
{
    if (c % 3 == 0 && c % 5 != 0)
        printf("Fizz\n");
    return (0);
}

int    modulo_five(int c)
{
    if (c % 5 == 0 && c % 3 != 0)
        printf("Buzz\n");
    return (0);
}

int    modulo_five_and_tree(int c)
{
    if (c % 5 == 0 && c % 3 == 0)
        printf("FizzBuzz\n");
    return (0);
}
