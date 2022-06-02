/*
** EPITECH PROJECT, 2021
** B-MUL-200-REN-2-1-mydefender-antonin.quilichini
** File description:
** goto_scene.c
*/

#include "my.h"

int recup_zero_annex(defend_t *def, int nbg, int x, int y)
{
    if (def->map[y][x] == '0') {
        def->grid[nbg] = disp_grid(def, y, x);
        def->grid[nbg]->is_buying = -1;
        sfRenderWindow_drawSprite(def->wdw, def->grid[nbg]->spr, NULL);
        nbg++;
    }
    return (nbg);
}

int recup_zero(defend_t *def, int nbg, int x, int y)
{
    if (def->map[y][x] == '0')
        nbg++;
    return (nbg);
}

void init_grid(defend_t *def)
{
    int nbg = 0;

    for (int y = 0; def->map[y] != NULL; y++) {
        for (int x = 0; def->map[y][x] != '\0'; x++) {
            nbg = recup_zero(def, nbg, x, y);
        }
    }
    def->grid = malloc(sizeof(grid_t *) * (nbg + 1));
    def->grid[nbg] = NULL;
    nbg = 0;
    for (int y = 0; def->map[y] != NULL; y++) {
        for (int x = 0; def->map[y][x] != '\0'; x++) {
            nbg = recup_zero_annex(def, nbg, x, y);
        }
    }
}
