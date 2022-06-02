/*
** EPITECH PROJECT, 2021
** B-MUL-200-REN-2-1-mydefender-antonin.quilichini
** File description:
** disp_enm.c
*/

#include "my.h"

void clock_ennemies(defend_t *def)
{
    def->clock_enm.time = sfClock_getElapsedTime(def->clock_enm.clock);
    def->clock_enm.sec = def->clock_enm.time.microseconds / 1000000.0f;
}

void ennemies_animation(defend_t *def, int i)
{
    if (def->clock_enm.sec > 0.23) {
        if (def->l_enm[i]->rect.top <= 0)
            def->clock_enm.reset = 0;
        if (def->clock_enm.reset == 0)
            def->l_enm[i]->rect.top += 130;
        if (def->l_enm[i]->rect.top >= 260)
            def->l_enm[i]->rect.top = 0;
        sfSprite_setTextureRect(def->l_enm[i]->spr, def->l_enm[i]->rect);
        sfClock_restart(def->clock_enm.clock);
    }
}

void check_cols(defend_t *def, int i)
{
    for (int j = 0, x = 3; def->plc_o1[j] != NULL &&
    x != my_strlen(def->wave[def->nb_w]); j++) {
        x = check_collisions_o_1(def, x, j);
        x++;
    }
    for (int j = 0; def->plc_o2[j] != NULL; j++)
    check_collisions_o_2(def, i, j);
    for (int j = 0; def->plc_xan[j] != NULL; j++)
    check_collisions_xan(def, i, j);
}

void cols_fct(defend_t *def, int i)
{
    apl_cols(def, i);
    if (def->plc_o1 != NULL || def->plc_o2 != NULL ||
    def->plc_xan != NULL) {
        check_cols(def, i);
    }
}

void display_enm(defend_t *def)
{
    int gain = 0;

    clock_ennemies(def);
    for (int i = 0; i != my_strlen(def->wave[def->nb_w]); i++) {
        if (def->paus.is_pause == 0)
            ennemies_animation(def, i);
        if (def->l_enm[i]->life > 0)
            sfRenderWindow_drawSprite(def->wdw, def->l_enm[i]->spr, NULL);
        else {
            if (def->l_enm[i]->is_life == 1) {
                def->money.sum += 10;
                def->comp++;
                def->l_enm[i]->is_life = 0;
            }
        }
        if (def->comp >= my_strlen(def->wave[def->nb_w]))
            def->next_wave = 1;
        cols_fct(def, i);
    }
}
