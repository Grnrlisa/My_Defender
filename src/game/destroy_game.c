/*
** EPITECH PROJECT, 2021
** B-MUL-200-REN-2-1-mydefender-antonin.quilichini
** File description:
** goto_scene.c
*/

#include "my.h"

void destroy_game(defend_t *def)
{
    for (int i = 0; i != 3; i++) {
        sfTexture_destroy(def->but_l[i]->texture);
        sfSprite_destroy(def->but_l[i]->sp);
    }
    free(def->but_l);
}
