/*
** EPITECH PROJECT, 2022
** bsmy_hunter
** File description:
** my_hunter.c
*/

#include "include/seting.h"
#include "include/libmy.h"

int main (int argc, char **argv)
{
    if (argc == 2 && argv[1][1] == 'h') {
        description_game();
    } else {
        setting_t setting = set_param(&setting);
        sfIntRect rect = rec(&setting);
        sfIntRect rectNua = recNua(&setting);
        sfClock *clock;
        sfTime time;
        clock = sfClock_create();
        sfMusic_play(setting.sound.theme);
        ddd(setting, rect, clock, time, rectNua);
        destroy(&setting, clock);
    }
    return (0);
}

void description_game()
{
    const char *msg = "le jeu va consister a tirer sur"
    "des oiseaux en cliquant sur la souris ou le pad"
    "de votre clavier pour les tuer et le but sera d'avoir"
    "le score le plus élevé"
    "en fin de partie."
    "La partie se terminera quand le joueur aura perdu"
    "ces 10 vies."
    "le joueur perd une vie si il rate sa cible."
    "la seule commande est le clic de souris ou du pad";
    my_putstr(msg);
}

void destroy (setting_t *setting, sfClock *clock)
{
    sfClock_destroy(clock);
    sfSprite_destroy(setting->sprite.Duck);
    sfSprite_destroy(setting->sprite.nuage);
    sfSprite_destroy(setting->sprite.stade);
    sfSprite_destroy(setting->sprite.lose);
    sfMusic_destroy(setting->sound.theme);
    sfMusic_destroy(setting->sound.mort);
    sfTexture_destroy(setting->texture.Duck);
    sfTexture_destroy(setting->texture.Stade);
    sfTexture_destroy(setting->texture.Nuage);
    sfTexture_destroy(setting->texture.Lose);
    sfRenderWindow_destroy(setting->window);
}

void ddd(setting_t setting, sfIntRect rect,sfClock *clock, sfTime time, sfIntRect rectNua )
{
    while (sfRenderWindow_isOpen(setting.window)) {
        sfRenderWindow_clear(setting.window, sfBlue);
        while (sfRenderWindow_pollEvent(setting.window, &setting.event)) {
            analyse_events(setting.window, setting.event, &setting);
        }
        time = sfClock_getElapsedTime(clock);
        float seconde = time.microseconds / 1000000.0;
        if (seconde > 0.1) {
            move_rect(&rect, 110, 330);
            sfClock_restart(clock);
        }
        if (seconde > 0.005) {
            move_rect(&rectNua, 910, 1820);
            sfClock_restart(clock);
        }
        des(&setting, rect, rectNua);
    }
}
