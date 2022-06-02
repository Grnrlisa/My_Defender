/*
** EPITECH PROJECT, 2021
** my_defender
** File description:
** my.h
*/

#pragma once

typedef struct param_opt {
    sfTexture *tx;
    sfSprite *spr;
    sfVector2f pos;
    sfIntRect rect;
} param_opt;

typedef struct pause_menu {
    param_opt goback;
    param_opt titps;
    param_opt quit;
    param_opt bg;
    param_opt resume;
    int is_pause;
} pause_t;

typedef struct opt {
    param_opt bar_1;
    param_opt bar_2;
    param_opt curs;
    param_opt vol;
    param_opt back;
    param_opt plus;
    param_opt less;
    param_opt change;
    param_opt opt_1;
    param_opt opt_2;
} opt_t;

typedef struct sound_music {
    sfMusic *start_sound;
    sfMusic *second_sound;
    sfMusic *game_over_sound;
} s_mus_t;

typedef struct money_struct {
    int sum;
    sfText *money_score;
    sfFont *money_font;
    sfVector2f money_pos;
    sfText *text;
    sfFont *font;
    sfVector2f pos_text;
    sfVector2f pos_score;
    sfColor color;
    sfColor color_sum;
} coin_t;

typedef struct infos_struct {
    sfText *infos_text;
    sfFont *infos_font;
    sfVector2f infos_pos;
    sfColor color;
} infos_towers;

typedef struct button_st {
    sfSprite *sp;
    sfTexture *texture;
    sfVector2f pos;
    sfIntRect rect;
    int i;
} button_t;
