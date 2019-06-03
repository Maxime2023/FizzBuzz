/*
** EPITECH PROJECT, 2019
** modulo
** File description:
** modulo
*/

#include "../include/header.h"

int    final_print_two(int c)
{
    if (c % 3 != 0 && c % 5 != 0)
        printf("%d\n", c);
    return (0);
}

int    final_print(int c)
{
    modulo_five_and_tree(c);
    modulo_five(c);
    modulo_tree(c);
    final_print_two(c);
    return (0);
}

int    fizzbuzz(char *a, char *b)
{
    int c = atoi(a);
    int d = atoi(b);

    while (c < d) {
        modulo_five_and_tree(c);
        modulo_tree(c);
        modulo_five(c);
        final_print_two(c);
        c++;
    }
    final_print(c);
    return (0);
}

int    main(int ac, char **av)
{
    if (ac != 3)
        return (84);
    else if (atoi(av[2]) < atoi(av[1]))
        return (84);
    fizzbuzz(av[1], av[2]);
    return (0);
}
