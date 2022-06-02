/*
** EPITECH PROJECT, 2021
** B-MUL-200-REN-2-1-mydefender-antonin.quilichini
** File description:
** goto_scene.c
*/

#include "my.h"

void get_start(defend_t *def, int y, int x, int *pos_start)
{
    if (def->map[y][x] == '2')
        pos_start[0] = y;
        pos_start[1] = x;
}

void start_wave_annex(defend_t *def, int i, int *pos_start)
{
    if (def->wave[def->nb_w][i] == '1')
        init_level_1(def, i, pos_start);
    if (def->wave[def->nb_w][i] == '2')
        init_level_2(def, i, pos_start);
    if (def->wave[def->nb_w][i] == '3')
        init_level_3(def, i, pos_start);
}

void start_wave(defend_t *def)
{
    int *pos_start = malloc(sizeof(int) * 2);

    def->comp = 0;
    if (def->next_wave == 1)
        def->nb_w++;
    def->next_wave = 0;
    if (def->nb_w != 0) {
        free(def->l_enm);
    }
    for (int y = 0; def->map[y] != NULL; y++) {
        for (int x = 0; def->map[y][x] != '\0'; y++) {
            get_start(def, y, x, pos_start);
        }
    }
    def->l_enm = malloc(sizeof(enm_t *) * my_strlen(def->wave[def->nb_w]) + 1);
    for (int i = 0; i != my_strlen(def->wave[def->nb_w]); i++)
        def->l_enm[i] = malloc(sizeof(enm_t));
    for (int i = 0; i != my_strlen(def->wave[def->nb_w]); i++) {
        start_wave_annex(def, i, pos_start);
    }
}

void init_everything(defend_t *def)
{
    init_game(def);
    init_tower_sprites(def);
    init_grid(def);
    init_isle(def);
    init_tower(def);
    init_money_score(def);
    init_pause_menu(def);
}

void goto_game(defend_t *def)
{
    def->check_grid = 0;
    def->scene = 2;
    init_everything(def);
    while (sfRenderWindow_isOpen(def->wdw)) {
        if (def->comp == my_strlen(def->wave[def->nb_w]))
            start_wave(def);
        while (sfRenderWindow_pollEvent(def->wdw, &def->event)) {
            game_event(def);
        }
        display_game(def);
        if (def->paus.is_pause == 0)
            move_enm(def);
        if (def->paus.is_pause == 0)
            game_ui_evs(def);
        sfRenderWindow_display(def->wdw);
    }
}
