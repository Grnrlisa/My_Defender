/*
** EPITECH PROJECT, 2021
** B-MUL-200-REN-2-1-mydefender-antonin.quilichini
** File description:
** move_enm.c
*/

#include "my.h"

void move_enm_anex(defend_t *def, int i)
{
    if (def->l_enm[i]->pos.x > 1390 && def->l_enm[i]->pos.x < 1650 &&
        def->l_enm[i]->pos.y > 350 && def->l_enm[i]->pos.y < 370)
        def->l_enm[i]->pos.x += def->l_enm[i]->speed;
    if (def->l_enm[i]->pos.x > 1640 && def->l_enm[i]->pos.x < 1670 &&
        def->l_enm[i]->pos.y > 200 && def->l_enm[i]->pos.y < 380)
        def->l_enm[i]->pos.y -= def->l_enm[i]->speed;
    if (def->l_enm[i]->pos.x > 1640 && def->l_enm[i]->pos.x < 1920 &&
        def->l_enm[i]->pos.y > 180 && def->l_enm[i]->pos.y < 220)
        def->l_enm[i]->pos.x += def->l_enm[i]->speed;
}

void move_enm(defend_t *def)
{
    for (int i = 0; i != my_strlen(def->wave[def->nb_w]); i++) {
        if (def->l_enm[i]->pos.x > -1000 && def->l_enm[i]->pos.x < 760 &&
            def->l_enm[i]->pos.y > 130 && def->l_enm[i]->pos.y < 260)
            def->l_enm[i]->pos.x += def->l_enm[i]->speed;
        if (def->l_enm[i]->pos.x > 700 && def->l_enm[i]->pos.x < 770 &&
            def->l_enm[i]->pos.y > 120 && def->l_enm[i]->pos.y < 630)
            def->l_enm[i]->pos.y += def->l_enm[i]->speed;
        if (def->l_enm[i]->pos.x > 700 && def->l_enm[i]->pos.x < 1400 &&
            def->l_enm[i]->pos.y > 560 && def->l_enm[i]->pos.y < 630)
            def->l_enm[i]->pos.x += def->l_enm[i]->speed;
        if (def->l_enm[i]->pos.x > 1390 && def->l_enm[i]->pos.x < 1410 &&
            def->l_enm[i]->pos.y > 360 && def->l_enm[i]->pos.y < 640)
            def->l_enm[i]->pos.y -= def->l_enm[i]->speed;
        move_enm_anex(def, i);
        sfSprite_setPosition(def->l_enm[i]->spr, def->l_enm[i]->pos);
    }
}
