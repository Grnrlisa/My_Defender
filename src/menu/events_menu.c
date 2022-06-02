/*
** EPITECH PROJECT, 2021
** mydef
** File description:
** ini menu + parallaxs
*/

#include "my.h"

void is_click_choice(defend_t *def, int i)
{
    if (i == 2)
        sfRenderWindow_close(def->wdw);
    else if (i == 1)
        def->scene = 3;
    else
        goto_game(def);
}

void is_click(defend_t *def)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(def->wdw);
    sfVector2f pos;

    for (int i = 0; i != 3; i++) {
        pos = sfSprite_getPosition(def->but_l[i]->sp);
        if (def->event.type == sfEvtMouseButtonPressed && mouse.x >= pos.x &&
        mouse.x <= pos.x + 320 && mouse.y >= pos.y && mouse.y <= pos.y + 90) {
            def->but_l[i]->rect.top = 0;
            sfSprite_setTextureRect(def->but_l[i]->sp, def->but_l[i]->rect);
            is_click_choice(def, i);
        } else if (mouse.x >= pos.x && mouse.x <= pos.x + 320 &&
        mouse.y >= pos.y && mouse.y <= pos.y + 90) {
            def->but_l[i]->rect.top = 135;
            sfSprite_setTextureRect(def->but_l[i]->sp, def->but_l[i]->rect);
        } else {
            def->but_l[i]->rect.top = 0;
            sfSprite_setTextureRect(def->but_l[i]->sp, def->but_l[i]->rect);
        }
    }
}
