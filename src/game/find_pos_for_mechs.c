/*
** EPITECH PROJECT, 2021
** B-MUL-200-REN-2-1-mydefender-antonin.quilichini
** File description:
** goto_scene.c
*/

#include "my.h"

int nb_ils_annex(defend_t *def, int y, int x, int nb_il)
{
    if (def->map[y][x] != '0' && def->map[y][x] != '4') {
        def->isls[nb_il] = disp_isls(def, y, x);
        sfRenderWindow_drawSprite(def->wdw, def->isls[nb_il]->spr, NULL);
        nb_il++;
    }
    return (nb_il);
}

int nb_ils(defend_t *def, int y, int x, int nb_il)
{
    if (def->map[y][x] != '0')
        nb_il++;
    return (nb_il);
}

int find_nb_place(defend_t *def, int y, int x, int nb_place)
{
    if (def->map[y][x] == '0')
        nb_place++;
    return (nb_place);
}
