/*
** EPITECH PROJECT, 2021
** my_defender
** File description:
** my_defender.c
*/

#include "my.h"

void init_wdw(defend_t *def)
{
    def->mode.width = 1920;
    def->mode.height = 1080;
    def->mode.bitsPerPixel = 32;
    def->wdw = sfRenderWindow_create(def->mode, "trou blanc", PARAM, NULL);
}

void menu_main(defend_t *defend)
{
    defend->paus.is_pause = 1;
    while (sfRenderWindow_isOpen(defend->wdw)) {
        sfRenderWindow_clear(defend->wdw, sfBlack);
        display_scnes(defend);
        while (sfRenderWindow_pollEvent(defend->wdw, &defend->event)) {
            analyse_event(defend);
        }
    }
    sfMusic_destroy(defend->music.start_sound);
    sfMusic_destroy(defend->music.second_sound);
    sfMusic_destroy(defend->music.game_over_sound);
}

int main()
{
    s_mus_t s_music;
    defend_t defend;

    defend.scene = 1;
    defend.life = 300;
    ini_menu(&defend);
    init_wdw(&defend);
    init_sound(&defend, &s_music);
    init_settings_bar(&defend);
    sfRenderWindow_setFramerateLimit(defend.wdw, 30);
    sfMusic_play(defend.music.start_sound);
    menu_main(&defend);
}
