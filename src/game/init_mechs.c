/*
** EPITECH PROJECT, 2021
** B-MUL-200-REN-2-1-mydefender-antonin.quilichini
** File description:
** goto_scene.c
*/

#include "my.h"

void init_game(defend_t *def)
{
    int fd = open("map", O_RDONLY);
    char *buff = malloc(sizeof(char) * (112 + 1));

    read(fd, buff, 112);
    buff[112] = '\0';
    def->map = my_stwa(buff, '\n');
    char *buff_2 = malloc(sizeof(char) * (164 + 1));
    int fd_2 = open("wave", O_RDONLY);
    read(fd_2, buff_2, 163);
    buff_2[164] = '\0';
    def->wave = my_stwa(buff_2, '\n');
    def->nb_w = 0;
    def->next_wave = 0;
    def->comp = my_strlen(def->wave[0]);
    def->clock_enm.clock = sfClock_create();
    def->clock_enm.reset = 0;
}

void init_isle(defend_t *def)
{
    int nb_il = 0;

    for (int y = 0; def->map[y] != NULL; y++) {
        for (int x = 0; def->map[y][x] != '\0'; x++) {
            nb_il = nb_ils(def, y, x, nb_il);
        }
    }
    def->isls = malloc(sizeof(isles_t *) * (nb_il + 1));
    def->isls[nb_il - 1] = NULL;
    nb_il = 0;
    for (int y = 0; def->map[y] != NULL; y++) {
        for (int x = 0; def->map[y][x] != '\0'; x++) {
            nb_il = nb_ils_annex(def, y, x, nb_il);
        }
    }
}

void init_tower(defend_t *def)
{
    int nb_place = 0;

    for (int y = 0; def->map[y] != NULL; y++) {
        for (int x = 0; def->map[y][x] != '\0'; x++) {
            nb_place = find_nb_place(def, y, x, nb_place);
        }
    }
    def->plc_o1 = malloc(sizeof(oeil_solo_t) * nb_place);
    def->plc_o2 = malloc(sizeof(oeil_zone_t) * nb_place);
    def->plc_xan = malloc(sizeof(xan_t) * nb_place);
    def->plc_trou = malloc(sizeof(trou_t) * nb_place);
    def->plc_o1[0] = NULL;
    def->plc_o2[0] = NULL;
    def->plc_xan[0] = NULL;
    def->plc_trou[0] = NULL;
}
