/*
** EPITECH PROJECT, 2022
** B-PSU-100-LYN-1-1-bsmyls-quentin.charillon
** File description:
** my_revstr.c
*/

#include "../../include/libmy.h"

void my_revstr(char *str)
{
    for (int i = my_strlen(str) - 1; i >= 0; i--)
        my_putchar(str[i]);
}
