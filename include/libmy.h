/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** libmy.h
*/

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "../include/seting.h"

#ifndef MYPRINT_H_
    #define MYPRINT_H_

void my_putchar(char c);
double my_abs(double x);
int my_putstr(char const *str);
int my_find (char a);
void my_putnbr(int nb);
int my_strlen(char const *str);
long convert_octal(long dec);
int my_putnbr_long(long nbr, char *base);
void my_putnbr_long_unsigned(unsigned long nbr, char *base);
void my_putfloat(float f);
void hexa_convertor(long dec_nbr);
int check_nsignd(unsigned int a);
char my_non_printable_str(char const *str);
void convertor_binaire(unsigned long int a);
void hexa_convertor_up(int dec_nbr);
void cond1(const char *format, int i, va_list list);
void cond2(const char *format, int i, va_list list);
void cond3(const char *format, int i, va_list list);
void cond4(const char *format, int i, va_list list);
void my_printf( const char * format , ...);
void my_revstr(char *str);
int name(char *file);
setting_t set_param (setting_t *setting);
void des (setting_t *setting, sfIntRect rect, sfIntRect rectNua);
void stade(setting_t *setting);
void manage_mouse_click(sfMouseButtonEvent event, setting_t *setting);
void close_window(sfRenderWindow *window);
sfIntRect rec(setting_t *setting);
sfIntRect recNua(setting_t *setting);
void analyse_events(sfRenderWindow *window, sfEvent event, setting_t *setting);
void struct_text(setting_t *setting);
void struct_vector(setting_t *setting);
void struct_sprite(setting_t *setting);
void struct_sons(setting_t *setting);
void description_game(void);
void ddd(setting_t setting, sfIntRect rect,sfClock *clock, sfTime time, sfIntRect rectNua );

#endif /* MYPRINT_H_ */
