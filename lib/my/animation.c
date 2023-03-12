/*
** EPITECH PROJECT, 2022
** B-MUL-100-LYN-1-1-myhunter-quentin.charillon
** File description:
** animation.c
*/


#include "../../include/seting.h"
#include "../../include/libmy.h"

sfIntRect rec(setting_t *setting)
{
    sfIntRect rect;
    rect.top = 0;
    rect.left = 0;
    rect.width = 110;
    rect.height = 170;

    sfSprite_setTexture(setting->sprite.Duck, setting->texture.Duck, sfFalse);
    sfSprite_setPosition(setting->sprite.Duck, setting->vector.pos);
    sfSprite_setScale(setting->sprite.Duck, setting->vector.scale);
    return (rect);
}

sfIntRect recNua(setting_t *setting)
{
    sfIntRect rectNua;
    rectNua.top = 0;
    rectNua.left = 0;
    rectNua.width = 910;
    rectNua.height = 650;

    sfSprite_setTexture(setting->sprite.nuage, setting->texture.Nuage, sfFalse);
    sfSprite_setPosition(setting->sprite.nuage, setting->vector.posNuage);
    sfSprite_setScale(setting->sprite.nuage, setting->vector.scaleNuage);
    return (rectNua);
}

void analyse_events(sfRenderWindow *window, sfEvent event, setting_t *setting)
{
    sfVector2f current_position = sfSprite_getPosition(setting->sprite.Duck);
    sfVector2f new_scale = {0.7, 0.7};
    if (setting->touche > 6) {
        sfVector2f vit = {setting->vit + 0.3, 0};
        setting->vector.offset = vit;
    }
    if (setting->touche > 10) {
        sfSprite_setScale(setting->sprite.Duck, new_scale);
    }
    if (setting->touche > 16 && setting->touche < 20) {
        sfVector2f vit = {setting->vit, 0.3};
        setting->vector.offset = vit;
    }
    cond_jeu(window, event, setting);
}

void cond_jeu(sfRenderWindow *window, sfEvent event,  setting_t *setting)
{
    sfVector2f current_position = sfSprite_getPosition(setting->sprite.Duck);
    if (current_position.x >= 1920 || current_position.y >= 1080) {
        current_position.x = 0;
        current_position.y = 0;
        sfSprite_setPosition(setting->sprite.Duck ,current_position);
        setting->vie--;
    }
    if (event.type == sfEvtMouseButtonPressed) {
        manage_mouse_click(event.mouseButton, setting);
    }
    if (event.type == sfEvtClosed) {
        close_window(window);
    }
}
