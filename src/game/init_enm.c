/*
** EPITECH PROJECT, 2021
** B-MUL-200-REN-2-1-mydefender-antonin.quilichini
** File description:
** init_enm.c
*/

#include "my.h"

void init_level_1(defend_t *def, int i, int *pos_start)
{
    def->clock_enm.clock = sfClock_create();
    def->clock_enm.reset = 0;
    def->l_enm[i]->life = 200;
    def->l_enm[i]->spr = sfSprite_create();
    def->l_enm[i]->txt = sfTexture_createFromFile("assets/obj/enm1.png", NULL);
    def->l_enm[i]->is_life = 1;
    def->l_enm[i]->rect.height = 130;
    def->l_enm[i]->rect.width = 130;
    def->l_enm[i]->rect.left = 0;
    def->l_enm[i]->rect.top = 0;
    def->l_enm[i]->speed = 2;
    def->l_enm[i]->pos.x = -100 - (100 * i);
    def->l_enm[i]->pos.y = 130 * (pos_start[0] + 1) - 85;
    def->l_enm[i]->level = 1;
    def->l_enm[i]->dir = 'D';
    def->l_enm[i]->pos_map = malloc(sizeof(int) * 2);
    def->l_enm[i]->pos_map[0] = pos_start[0];
    def->l_enm[i]->pos_map[1] = pos_start[1];
    sfSprite_setPosition(def->l_enm[i]->spr, def->l_enm[i]->pos);
    sfSprite_setTexture(def->l_enm[i]->spr, def->l_enm[i]->txt, sfTrue);
    sfSprite_setTextureRect(def->l_enm[i]->spr, def->l_enm[i]->rect);
}

void init_level_2(defend_t *def, int i, int *pos_start)
{
    def->clock_enm.clock = sfClock_create();
    def->clock_enm.reset = 0;
    def->l_enm[i]->spr = sfSprite_create();
    def->l_enm[i]->txt = sfTexture_createFromFile("assets/obj/enm2.png", NULL);
    def->l_enm[i]->life = 300;
    def->l_enm[i]->is_life = 1;
    def->l_enm[i]->rect.height = 130;
    def->l_enm[i]->rect.width = 130;
    def->l_enm[i]->rect.left = 0;
    def->l_enm[i]->rect.top = 0;
    def->l_enm[i]->speed = 3;
    def->l_enm[i]->pos.x = -100 - (100 * i);
    def->l_enm[i]->pos.y = 130 * (pos_start[0] + 1) - 85;
    def->l_enm[i]->level = 2;
    def->l_enm[i]->dir = 'D';
    def->l_enm[i]->pos_map = malloc(sizeof(int) * 2);
    def->l_enm[i]->pos_map[0] = pos_start[0];
    def->l_enm[i]->pos_map[1] = pos_start[1];
    sfSprite_setTexture(def->l_enm[i]->spr, def->l_enm[i]->txt, sfTrue);
    sfSprite_setTextureRect(def->l_enm[i]->spr, def->l_enm[i]->rect);
    sfSprite_setPosition(def->l_enm[i]->spr, def->l_enm[i]->pos);
}

void init_level_3(defend_t *def, int i, int *pos_start)
{
    def->clock_enm.clock = sfClock_create();
    def->clock_enm.reset = 0;
    def->l_enm[i]->spr = sfSprite_create();
    def->l_enm[i]->txt = sfTexture_createFromFile("assets/obj/enm3.png", NULL);
    def->l_enm[i]->is_life = 1;
    def->l_enm[i]->life = 400;
    def->l_enm[i]->rect.height = 130;
    def->l_enm[i]->rect.width = 130;
    def->l_enm[i]->rect.left = 0;
    def->l_enm[i]->rect.top = 0;
    def->l_enm[i]->speed = 4;
    def->l_enm[i]->pos.x = -100 - (100 * i);
    def->l_enm[i]->pos.y = 130 * (pos_start[0] + 1) - 85;
    def->l_enm[i]->level = 3;
    def->l_enm[i]->dir = 'D';
    def->l_enm[i]->pos_map = malloc(sizeof(int) * 2);
    def->l_enm[i]->pos_map[0] = pos_start[0];
    def->l_enm[i]->pos_map[1] = pos_start[1];
    sfSprite_setPosition(def->l_enm[i]->spr, def->l_enm[i]->pos);
    sfSprite_setTexture(def->l_enm[i]->spr, def->l_enm[i]->txt, sfTrue);
    sfSprite_setTextureRect(def->l_enm[i]->spr, def->l_enm[i]->rect);
}
