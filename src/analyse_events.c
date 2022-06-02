/*
** EPITECH PROJECT, 2021
** my_defender
** File description:
** my_defender.c
*/

#include "my.h"

void analyse_event(defend_t *def)
{
    if (def->event.type == sfEvtClosed)
        sfRenderWindow_close(def->wdw);
    is_click(def);
}
