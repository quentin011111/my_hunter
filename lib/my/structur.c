/*
** EPITECH PROJECT, 2022
** B-MUL-100-LYN-1-1-myhunter-quentin.charillon
** File description:
** structur.c
*/

#include "../../include/seting.h"
#include "../../include/libmy.h"

void struct_text(setting_t *setting)
{
    sfTexture *Duck = sfTexture_createFromFile("oiseaux.png", NULL);
    sfTexture *Stade = sfTexture_createFromFile("stade.jpg", NULL);
    sfTexture *Nuage = sfTexture_createFromFile("nuage.png", NULL);
    sfTexture *Lose = sfTexture_createFromFile("gameOver.png", NULL);
    setting->texture.Duck = Duck;
    setting->texture.Stade = Stade;
    setting->texture.Nuage = Nuage;
    setting->texture.Lose = Lose;
}

void struct_vector(setting_t *setting)
{
    sfVector2f pos = {300, 130};
    sfVector2f scale = {1, 1};
    sfVector2f posStade = {0, 0};
    sfVector2f scaleStade = {3.2, 3.2};
    sfVector2f posNuage = {100, 100};
    sfVector2f scaleNuage = {0.2, 0.2};
    sfVector2f posLose = {300, 40};
    sfVector2f scaleLose = {1.3, 1.3};
    sfVector2f offset = {0.2, 0};
    setting->vector.pos = pos;
    setting->vector.scale = scale;
    setting->vector.posStade = posStade;
    setting->vector.scaleStade = scaleStade;
    setting->vector.posNuage = posNuage;
    setting->vector.scaleNuage = scaleNuage;
    setting->vector.posLose = posLose;
    setting->vector.scaleLose = scaleLose;
    setting->vector.offset = offset;
}

void struct_sprite(setting_t *setting)
{
    sfSprite* Duck = sfSprite_create();
    sfSprite* lose = sfSprite_create();
    sfSprite* stade = sfSprite_create();
    sfSprite* nuage = sfSprite_create();
    sfText *text = sfText_create();
    setting->sprite.Duck = Duck;
    setting->sprite.lose = lose;
    setting->sprite.stade = stade;
    setting->sprite.nuage = nuage;
}

void struct_sons(setting_t *setting)
{
    sfMusic *theme = sfMusic_createFromFile("theme.wav");
    sfMusic *mort = sfMusic_createFromFile("mort.wav");
    setting->sound.theme = theme;
    setting->sound.mort = mort;
}
