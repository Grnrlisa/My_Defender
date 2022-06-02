/*
** EPITECH PROJECT, 2021
** my_defender
** File description:
** my.h
*/

#include "ui.h"
#pragma once

typedef struct oeil_zone_st {
    int range;
    int damage;
    int speed;
    sfSprite *spr;
    sfTexture *text;
    sfVector2f pos;
} oeil_zone_t;

typedef struct oeil_solo_st {
    int range;
    int damage;
    int speed;
    sfSprite *spr;
    sfTexture *text;
    sfVector2f pos;
} oeil_solo_t;

typedef struct xan_st {
    int range;
    int damage;
    int speed;
    sfSprite *spr;
    sfTexture *text;
    sfVector2f pos;
} xan_t;

typedef struct trou_st {
    int speed;
    sfSprite *spr;
    sfTexture *text;
    sfVector2f pos;
    sfIntRect rect;
} trou_t;

typedef struct isles_st {
    sfSprite *spr;
    sfTexture *tx;
    sfVector2f pos;
    sfIntRect rect;
} isles_t;

typedef struct enm_st {
    sfSprite *spr;
    sfTexture *txt;
    sfVector2f pos;
    sfIntRect rect;
    int speed;
    int level;
    int *pos_map;
    char dir;
    int life;
    int is_life;
} enm_t;

typedef struct clock_ennemies {
    sfClock *clock;
    sfTime time;
    float sec;
    int reset;
} clock_enm_t;

typedef struct grid_st {
    sfTexture *tx;
    sfSprite *spr;
    sfVector2f pos;
    sfIntRect rect;
    int is_buying;
    int is_tower;
} grid_t;

typedef struct tower_st {
    oeil_solo_t eye_1;
    oeil_zone_t eye_2;
    xan_t xan;
    trou_t trblc;
} tower_t;

typedef struct obj_st {
    sfSprite *spr;
    sfTexture *text;
    sfIntRect rect;
    sfVector2f pos;
} obj_t;

typedef struct game_over {
    sfSprite *spr;
    sfTexture *tx;
} game_over_t;

typedef struct defend_st {
    sfRenderWindow *wdw;
    sfVideoMode mode;
    sfEvent event;
    sfSprite *sp_back;
    sfTexture *back;
    sfSprite *titlsp;
    sfTexture *titltx;
    button_t **but_l;
    grid_t **grid;
    opt_t opt;
    button_t button;
    s_mus_t music;
    isles_t **isls;
    tower_t tw;
    oeil_solo_t **plc_o1;
    oeil_zone_t **plc_o2;
    xan_t **plc_xan;
    trou_t **plc_trou;
    obj_t coin;
    coin_t money;
    obj_t apl;
    enm_t **l_enm;
    clock_enm_t clock_enm;
    pause_t paus;
    infos_towers info;
    game_over_t game_over;
    int next_wave;
    int check_grid;
    int scene;
    char **map;
    char **wave;
    int nb_w;
    int comp;
    int life;
} defend_t;
