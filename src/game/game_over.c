/*
** EPITECH PROJECT, 2021
** B-MUL-200-REN-2-1-mydefender-antonin.quilichini
** File description:
** goto_scene.c
*/

#include "my.h"

void is_game_over(defend_t *def)
{
    sfMusic_pause(def->music.start_sound);
    sfMusic_pause(def->music.second_sound);
    def->game_over.spr = sfSprite_create();
    def->game_over.tx = sfTexture_createFromFile("assets/env/gmovr.png", NULL);
    sfSprite_setTexture(def->game_over.spr, def->game_over.tx, sfFalse);
    sfRenderWindow_drawSprite(def->wdw, def->game_over.spr, NULL);
    sfMusic_play(def->music.game_over_sound);
    while (sfRenderWindow_isOpen(def->wdw)) {
        sfRenderWindow_display(def->wdw);
        if (sfKeyboard_isKeyPressed(sfKeyEscape))
            sfRenderWindow_close(def->wdw);
    }
}
