/*
** EPITECH PROJECT, 2022
** bsmy_hunter
** File description:
** set_param.c
*/

#include "../../include/seting.h"
#include "../../include/libmy.h"
#include <assert.h>

setting_t set_param (setting_t *setting)
{
    sfVideoMode mode = {1920, 1080, 32};
    sfRenderWindow *window = sfRenderWindow_create(mode, "myWindow",
                                sfDefaultStyle | sfResize, NULL);
    sfEvent event;
    int touche = 0;
    int vie = 10;
    float vit = 0.3;
    setting->touche = touche;
    setting->vie = vie;
    setting->vit = vit;
    setting->mode = mode;
    setting->window = window;
    setting->event = event;
    struct_text(setting);
    struct_vector(setting);
    struct_sprite(setting);
    struct_sons(setting);
}

void manage_mouse_click(sfMouseButtonEvent event, setting_t *setting)
{
    sfVector2f position_sprite = sfSprite_getPosition(setting->sprite.Duck);
    sfVector2f position_Mort = sfSprite_getPosition(setting->sprite.lose);
    sfVector2f new_position_y = {0, rand() % 1080};
    sfIntRect rect = sfSprite_getTextureRect(setting->sprite.Duck);
    if (event.x >= position_sprite.x
        & event.y >= position_sprite.y
        & event.x <= position_sprite.x + rect.width
        & event.y <= position_sprite.y + rect.height) {
        setting->touche++;
        sfMusic_play(setting->sound.mort);
        my_printf("touché %d\n", setting->touche);
        sfSprite_setPosition(setting->sprite.Duck, new_position_y);
    } else {
        setting->vie--;
        my_printf("manqué %d\n", setting->vie);
    }
    aff_gameover(event, setting);
}

void aff_gameover(sfMouseButtonEvent event, setting_t *setting)
{
    sfVector2f position_Mort = sfSprite_getPosition(setting->sprite.lose);
    if (event.x >= position_Mort.x
        & event.y >= position_Mort.y
        & event.x <= position_Mort.x + 1000
        & event.y <= position_Mort.y + 1000
        & setting->vie <= 0) {
        sfRenderWindow_close(setting->window);
    }
}

void move_rect(sfIntRect *rect, int offset, int max_value)
{
    rect->left += offset;
    if (rect->left == max_value) {
        rect->left = 0;
    }
}
