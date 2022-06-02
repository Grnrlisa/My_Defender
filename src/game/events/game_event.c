/*
** EPITECH PROJECT, 2021
** B-MUL-200-REN-2-1-mydefender-antonin.quilichini
** File description:
** goto_scene.c
*/

#include "my.h"

void game_event(defend_t *def)
{
    if (def->event.type == sfEvtClosed)
        sfRenderWindow_close(def->wdw);
    if (sfKeyboard_isKeyPressed(sfKeyEscape)) {
        def->paus.is_pause = 1;
    }
}
