/*
** EPITECH PROJECT, 2021
** B-MUL-200-REN-2-1-mydefender-antonin.quilichini
** File description:
** put_tower_grid.c
*/

#include "my.h"

void put_o1(defend_t *def, int nb_grid)
{
    int nb_twr = 0;
    sfVector2f pos = sfSprite_getPosition(def->grid[nb_grid]->spr);

    for (; def->plc_o1[nb_twr] != NULL; nb_twr++);
    def->plc_o1[nb_twr] = malloc(sizeof(oeil_solo_t));
    def->plc_o1[nb_twr]->damage = 1;
    def->plc_o1[nb_twr]->range = 3;
    def->plc_o1[nb_twr]->speed = 2;
    def->plc_o1[nb_twr]->spr = sfSprite_create();
    def->plc_o1[nb_twr]->text =
                sfTexture_createFromFile("assets/obj/eye1.png", NULL);
    def->plc_o1[nb_twr]->pos.x = pos.x;
    def->plc_o1[nb_twr]->pos.y = pos.y;
    sfSprite_setPosition(def->plc_o1[nb_twr]->spr, def->plc_o1[nb_twr]->pos);
    sfSprite_setTexture(def->plc_o1[nb_twr]->spr,
                def->plc_o1[nb_twr]->text, sfFalse);
    def->plc_o1[nb_twr + 1] = NULL;
}

void put_o2(defend_t *def, int nb_grid)
{
    int nb_twr = 0;
    sfVector2f pos = sfSprite_getPosition(def->grid[nb_grid]->spr);

    for (; def->plc_o2[nb_twr] != NULL; nb_twr++);
    def->plc_o2[nb_twr] = malloc(sizeof(oeil_zone_t));
    def->plc_o2[nb_twr]->damage = 1;
    def->plc_o2[nb_twr]->range = 1;
    def->plc_o2[nb_twr]->speed = 4;
    def->plc_o2[nb_twr]->spr = sfSprite_create();
    def->plc_o2[nb_twr]->text =
                sfTexture_createFromFile("assets/obj/eye2.png", NULL);
    def->plc_o2[nb_twr]->pos.x = pos.x;
    def->plc_o2[nb_twr]->pos.y = pos.y;
    sfSprite_setPosition(def->plc_o2[nb_twr]->spr, def->plc_o2[nb_twr]->pos);
    sfSprite_setTexture(def->plc_o2[nb_twr]->spr,
                def->plc_o2[nb_twr]->text, sfFalse);
    def->plc_o2[nb_twr + 1] = NULL;
}

void pute_xan(defend_t *def, int nb_grid)
{
    int nb_twr = 0;
    sfVector2f pos = sfSprite_getPosition(def->grid[nb_grid]->spr);

    for (; def->plc_xan[nb_twr] != NULL; nb_twr++);
    def->plc_xan[nb_twr] = malloc(sizeof(xan_t));
    def->plc_xan[nb_twr]->damage = 0;
    def->plc_xan[nb_twr]->range = 3;
    def->plc_xan[nb_twr]->speed = 2;
    def->plc_xan[nb_twr]->spr = sfSprite_create();
    def->plc_xan[nb_twr]->text =
                    sfTexture_createFromFile("assets/obj/xan.png", NULL);
    def->plc_xan[nb_twr]->pos.x = pos.x;
    def->plc_xan[nb_twr]->pos.y = pos.y;
    sfSprite_setPosition(def->plc_xan[nb_twr]->spr, def->plc_xan[nb_twr]->pos);
    sfSprite_setTexture(def->plc_xan[nb_twr]->spr,
                def->plc_xan[nb_twr]->text, sfFalse);
    def->plc_xan[nb_twr + 1] = NULL;
}

void put_trou_blanc(defend_t *def, int nb_grid)
{
    int nb_twr = 0;
    sfVector2f pos = sfSprite_getPosition(def->grid[nb_grid]->spr);

    for (; def->plc_xan[nb_twr] != NULL; nb_twr++);
    def->plc_trou[nb_twr] = malloc(sizeof(tower_t));
    def->plc_trou[nb_twr]->speed = 2;
    def->plc_trou[nb_twr]->spr = sfSprite_create();
    def->plc_trou[nb_twr]->text =
                    sfTexture_createFromFile("assets/obj/tbln.png", NULL);
    def->plc_trou[nb_twr]->pos.x = pos.x;
    def->plc_trou[nb_twr]->pos.y = pos.y;
    sfSprite_setPosition(def->plc_trou[nb_twr]->spr,
                def->plc_trou[nb_twr]->pos);
    sfSprite_setTexture(def->plc_trou[nb_twr]->spr,
                def->plc_trou[nb_twr]->text, sfFalse);
    def->plc_trou[nb_twr + 1] = NULL;
}
