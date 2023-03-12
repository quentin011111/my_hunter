/*
** EPITECH PROJECT, 2022
** bsmy_hunter
** File description:
** des.c
*/

#include "../../include/seting.h"
#include "../../include/libmy.h"
void texture(setting_t *setting, sfIntRect rect, sfIntRect rectNua)
{
    sfSprite_setTextureRect(setting->sprite.Duck, rect);
    sfSprite_setTextureRect(setting->sprite.nuage, rectNua);
    sfSprite_setTexture(setting->sprite.stade, setting->texture.Stade, sfTrue);
    sfSprite_setTexture(setting->sprite.lose, setting->texture.Lose, sfTrue);
}

void draw_sprite(setting_t *setting)
{
    sfRenderWindow_drawSprite(setting->window, setting->sprite.stade, NULL);
    sfRenderWindow_drawSprite(setting->window, setting->sprite.nuage, NULL);
    sfRenderWindow_drawSprite(setting->window, setting->sprite.Duck, NULL);
}

void des (setting_t *setting, sfIntRect rect, sfIntRect rectNua)
{
    texture(setting, rect, rectNua);
    sfSprite_setPosition(setting->sprite.lose, setting->vector.posLose);
    sfSprite_setPosition(setting->sprite.stade, setting->vector.posStade);
    sfSprite_setScale(setting->sprite.stade, setting->vector.scaleStade);
    sfSprite_setScale(setting->sprite.lose, setting->vector.scaleLose);
    sfSprite_move(setting->sprite.Duck, setting->vector.offset);
    if (setting->vie > 0) {
        draw_sprite(setting);
        sfRenderWindow_display(setting->window);
    } else {
        sfRenderWindow_drawSprite(setting->window, setting->sprite.stade, NULL);
        sfRenderWindow_drawSprite(setting->window, setting->sprite.lose, NULL);
        sfMusic_stop(setting->sound.theme);
        sfRenderWindow_display(setting->window);
    }
}

void close_window(sfRenderWindow *window)
{
    sfRenderWindow_close(window);
}
