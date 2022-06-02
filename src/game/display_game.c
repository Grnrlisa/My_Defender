/*
** EPITECH PROJECT, 2021
** CSFML
** File description:
** my_def
*/

#include "my.h"

isles_t *disp_isls(defend_t *def, int y, int x)
{
    isles_t *isls = malloc(sizeof(isles_t));
    isls->tx = sfTexture_createFromFile("assets/env/isles.png", NULL);
    isls->spr = sfSprite_create();
    isls->pos.y = 130 + (130 * y);
    isls->pos.x = 128 * x;
    isls->rect.height = 130;
    isls->rect.width = 130;
    isls->rect.left = (rand() % 3) * 130;
    isls->rect.top = 0;
    sfSprite_setPosition(isls->spr, isls->pos);
    sfSprite_setTexture(isls->spr, isls->tx, sfTrue);
    sfSprite_setTextureRect(isls->spr, isls->rect);
    return isls;
}

void disp_tower(defend_t*def)
{
    for (int i = 0; def->plc_o1[i] != NULL; i++)
        sfRenderWindow_drawSprite(def->wdw, def->plc_o1[i]->spr, NULL);
    for (int i = 0; def->plc_o2[i] != NULL; i++)
        sfRenderWindow_drawSprite(def->wdw, def->plc_o2[i]->spr, NULL);
    for (int i = 0; def->plc_xan[i] != NULL; i++)
        sfRenderWindow_drawSprite(def->wdw, def->plc_xan[i]->spr, NULL);
    for (int i = 0; def->plc_trou[i] != NULL; i++)
        sfRenderWindow_drawSprite(def->wdw, def->plc_trou[i]->spr, NULL);
}

void display_menu(defend_t *def)
{
    if (def->paus.is_pause == 1) {
        sfRenderWindow_drawSprite(def->wdw, def->paus.bg.spr, NULL);
        sfRenderWindow_drawSprite(def->wdw, def->paus.titps.spr, NULL);
        sfRenderWindow_drawSprite(def->wdw, def->paus.resume.spr, NULL);
        sfRenderWindow_drawSprite(def->wdw, def->paus.quit.spr, NULL);
        sfRenderWindow_drawSprite(def->wdw, def->paus.goback.spr, NULL);
        pause_events(def);
    }
}

void display_game(defend_t *def)
{
    sfRenderWindow_drawSprite(def->wdw, def->sp_back, NULL);
    sfRenderWindow_drawSprite(def->wdw, def->coin.spr, NULL);
    sfRenderWindow_drawSprite(def->wdw, def->apl.spr, NULL);
    sfText_setString(def->money.money_score, my_itoa(def->money.sum));
    sfRenderWindow_drawText(def->wdw, def->money.money_score, NULL);
    sfText_setString(def->money.text, "argent cb ?");
    sfRenderWindow_drawText(def->wdw, def->money.text, NULL);
    for (int i = 0; def->isls[i] != NULL; i++) {
        sfRenderWindow_drawSprite(def->wdw, def->isls[i]->spr, NULL);
    }
    disp_tower(def);
    display_enm(def);
    display_menu(def);
}

grid_t *disp_grid(defend_t *def, int y, int x)
{
    grid_t *grid = malloc(sizeof(grid_t));
    grid->tx = sfTexture_createFromFile("assets/UI/sqr.png", NULL);
    grid->spr = sfSprite_create();
    grid->pos.y = 130 + (130 * y);
    grid->pos.x = 128 * x;
    grid->rect.height = 130;
    grid->rect.width = 130;
    grid->rect.left = 0;
    grid->rect.top = 130;
    sfSprite_setPosition(grid->spr, grid->pos);
    sfSprite_setTexture(grid->spr, grid->tx, sfTrue);
    sfSprite_setTextureRect(grid->spr, grid->rect);
    return grid;
}
