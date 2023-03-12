/*
** EPITECH PROJECT, 2022
** B-PSU-100-LYN-1-1-bsmyls-quentin.charillon
** File description:
** name.c
*/

#include "../../include/libmy.h"

int name(char *file)
{
    int e = 0;
    int i = 0;
    while (file[i] != '\0') {
        i++;
    }
    my_putchar('\n');
    i--;
    char *c = malloc(sizeof(char) * i);
    while (file[i] != '/') {
        c[e] = file[i];
        i--;
        e++;
    }
    my_printf("Name:");
    my_revstr(c);
    my_putchar('\n');
}
