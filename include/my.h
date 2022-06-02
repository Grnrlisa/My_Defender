/*
** EPITECH PROJECT, 2021
** my_defender
** File description:
** my.h
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <SFML/Audio.h>
#include <SFML/Audio/SoundStatus.h>
#include <SFML/Audio/Types.h>
#include <SFML/System/InputStream.h>
#include <SFML/System/Time.h>
#include <SFML/System/Vector3.h>
#include <stddef.h>
#include <sys/stat.h>
#include "assets.h"
#pragma once

#define PARAM (sfResize | sfFullscreen)

char **my_stwa(char *str, char sep);
char *my_strcat(char *to_join, char *str);
int my_strlen(char const *str);
char *my_itoa(int nb);

void menu_main();
void analyse_event(defend_t *def);

void init_sound(defend_t *def, s_mus_t *s_music);
void init_enm_sprites(defend_t *def);
void init_tower_sprites(defend_t *def);
void init_game_ui(defend_t *def);
void init_game(defend_t *def);
void init_money_score(defend_t *def);
void init_pause_menu(defend_t *def);
void goto_game(defend_t *def);
void pause_events(defend_t *def);
void game_event(defend_t *def);
void game_ui_evs(defend_t *def);

int nb_ils(defend_t *def, int y, int x, int nb_il);
int nb_ils_annex(defend_t *def, int y, int x, int nb_il);
int find_nb_place(defend_t *def, int y, int x, int nb_place);

void destroy_game(defend_t *def);
void display_game(defend_t *def);

void display_scnes(defend_t *def);
void display_butt(defend_t *def);

void ini_menu(defend_t *def);
void init_settings_bar(defend_t *def);
void ini_button(defend_t *def);
void init_tower(defend_t *def);
void menu_is_open(defend_t *def);
void menu_events_1(defend_t *def);
void is_click(defend_t *def);

void init_settings_bar(defend_t *def);
void settings_is_open(defend_t *def);
void change_music_evs(defend_t *def, sfVector2i mouse);

void init_grid(defend_t *def);
void init_isle(defend_t *def);

isles_t *disp_isls(defend_t *def, int y, int x);
grid_t *disp_grid(defend_t *def, int y, int x);

void put_indic_tower(defend_t *def, int nb_grid);
void infos_on_selected_towers(defend_t *def);
void set_buying_grid(defend_t *def);

void put_o1(defend_t *def, int nb_grid);
void put_o2(defend_t *def, int nb_grid);
void pute_xan(defend_t *def, int nb_grid);
void put_trou_blanc(defend_t *def, int nb_grid);

void apl_cols(defend_t *def, int i);
void is_game_over(defend_t *def);

void init_level_1(defend_t *def, int i, int *pos_start);
void init_level_2(defend_t *def, int i, int *pos_start);
void init_level_3(defend_t *def, int i, int *pos_start);

void display_enm(defend_t *def);
int check_collisions_o_1(defend_t *def, int i, int j);
int check_collisions_o_2(defend_t *def, int i, int j);
int check_collisions_xan(defend_t *def, int i, int j);
void move_enm(defend_t *def);
int check_wave(defend_t *def);
