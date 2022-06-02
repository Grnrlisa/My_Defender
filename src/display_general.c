/*
** EPITECH PROJECT, 2021
** CSFML
** File description:
** my_def
*/

#include "my.h"

void display_scnes(defend_t *def)
{
    if (def->scene == 1)
        menu_is_open(def);
    if (def->scene == 4)
        is_game_over(def);
    if (def->scene == 3)
        settings_is_open(def);
}

void display_butt(defend_t *def)
{
    for (int i = 0; i != 3; i++) {
        sfRenderWindow_drawSprite(def->wdw, def->but_l[i]->sp, NULL);
    }
}
