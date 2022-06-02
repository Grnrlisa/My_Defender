/*
** EPITECH PROJECT, 2021
** B-MUL-200-REN-2-1-mydefender-antonin.quilichini
** File description:
** goto_scene.c
*/

#include "my.h"

void another_annex(defend_t *def, int nb_grid)
{
    if (def->event.type == sfEvtMouseButtonPressed) {
        set_buying_grid(def);
        def->grid[nb_grid]->is_buying *= -1;
    }
}

int game_ui_evs_annex(defend_t *def, int y, int x, int nbg)
{
    sfVector2i mouseg = sfMouse_getPositionRenderWindow(def->wdw);
    if (def->map[y][x] == '0') {
        if (def->grid[nbg]->is_buying == 1)
            put_indic_tower(def, nbg);
        if (mouseg.x > def->grid[nbg]->pos.x &&
        mouseg.x < def->grid[nbg]->pos.x + 130 &&
        mouseg.y > def->grid[nbg]->pos.y &&
        mouseg.y < def->grid[nbg]->pos.y + 130) {
            def->grid[nbg]->rect.top = 130;
            sfRenderWindow_drawSprite(def->wdw, def->grid[nbg]->spr, NULL);
            sfSprite_setTextureRect(def->grid[nbg]->spr, def->grid[nbg]->rect);
            another_annex(def, nbg);
        } else {
            def->grid[nbg]->rect.top = 0;
            sfRenderWindow_drawSprite(def->wdw, def->grid[nbg]->spr, NULL);
            sfSprite_setTextureRect(def->grid[nbg]->spr, def->grid[nbg]->rect);
        }
        nbg++;
    }
    return (nbg);
}

void game_ui_evs(defend_t *def)
{
    int nb_grid = 0;

    for (int y = 0; def->map[y] != NULL; y++) {
        for (int x = 0; def->map[y][x] != '\0'; x++) {
            nb_grid = game_ui_evs_annex(def, y, x, nb_grid);
            }
        }
}
