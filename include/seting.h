/*
** EPITECH PROJECT, 2022
** bsmy_hunter
** File description:
** seting.h
*/


#include <SFML/Graphics.h>
#include <SFML/Audio.h>

#ifndef SETING_H_
    #define SETING_H_

typedef struct sound {
    sfMusic *theme;
    sfMusic *mort;
} sound_t;

typedef struct sprite {
    sfSprite* Duck;
    sfSprite* lose;
    sfSprite* stade;
    sfSprite* nuage;
    sfText *text;
}sprite_t;

typedef struct texture {
    sfTexture *Duck;
    sfTexture *Stade;
    sfTexture *Nuage;
    sfTexture *Lose;
    sfFont *font;
}texture_t;

typedef struct vector {
    sfVector2f pos;
    sfVector2f scale;
    sfVector2f posStade;
    sfVector2f scaleStade;
    sfVector2f posNuage;
    sfVector2f scaleNuage;
    sfVector2f posLose;
    sfVector2f scaleLose;
    sfVector2f offset;
}vector_t;

typedef struct setting {
    sfVideoMode mode;
    sfRenderWindow *window;
    sfEvent event;
    sound_t sound;
    sprite_t sprite;
    texture_t texture;
    vector_t vector;
    int touche;
    int vie;
    float vit;
} setting_t;

#endif /*SETING_H_*/
