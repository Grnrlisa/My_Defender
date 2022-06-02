/*
** EPITECH PROJECT, 2021
** B-MUL-200-REN-2-1-mydefender-antonin.quilichini
** File description:
** goto_scene.c
*/

#include "my.h"

int show_buy(defend_t *def, int y, int x, int nb_grid)
{
    if (def->map[y][x] == '0') {
        def->grid[nb_grid]->is_buying = -1;
        nb_grid++;
    }
    return (nb_grid);
}

void set_buying_grid(defend_t *def)
{
    int nb_grid = 0;

    for (int y = 0; def->map[y] != NULL; y++) {
        for (int x = 0; def->map[y][x] != '\0'; x++) {
            nb_grid = show_buy(def, y, x, nb_grid);
        }
    }
}

void display_selected_tower_annex(defend_t *def, int nb_grid, sfVector2i mosg)
{
    if (mosg.x > 1000  && mosg.x < 1130 && mosg.y > 20 && mosg.y < 150 &&
    def->money.sum >= 15 && def->grid[nb_grid]->is_tower != 1) {
        pute_xan(def, nb_grid);
        def->money.sum -= 15;
        def->grid[nb_grid]->is_tower = 1;
    }
    if (mosg.x > 1150 && mosg.x < 1280 && mosg.y > 10 && mosg.y < 140 &&
    def->money.sum >= 45 && def->grid[nb_grid]->is_tower != 1) {
        put_trou_blanc(def, nb_grid);
        def->money.sum -= 45;
        def->grid[nb_grid]->is_tower = 1;
    }
}

void display_selected_tower(defend_t *def, int nb_grid)
{
    sfVector2i mosg = sfMouse_getPositionRenderWindow(def->wdw);

    if (def->event.type == sfEvtMouseButtonPressed) {
        if (mosg.x > 700 && mosg.x < 830 && mosg.y > 20 && mosg.y < 150 &&
        def->money.sum >= 20 && def->grid[nb_grid]->is_tower != 1) {
            put_o1(def, nb_grid);
            def->money.sum -= 20;
            def->grid[nb_grid]->is_tower = 1;
        }
        if (mosg.x > 850 && mosg.x < 980 && mosg.y > 20 && mosg.y < 150 &&
        def->money.sum >= 50 && def->grid[nb_grid]->is_tower != 1) {
            put_o2(def, nb_grid);
            def->money.sum -= 50;
            def->grid[nb_grid]->is_tower = 1;
        }
        display_selected_tower_annex(def, nb_grid, mosg);
    }
}

void put_indic_tower(defend_t *def, int nb_grid)
{
    def->tw.trblc.pos.y = 10;
    def->tw.trblc.pos.x = 1150;
    sfSprite_setPosition(def->tw.trblc.spr, def->tw.trblc.pos);
    sfRenderWindow_drawSprite(def->wdw, def->tw.trblc.spr, NULL);
    def->tw.eye_1.pos.y = 20;
    def->tw.eye_1.pos.x = 700;
    sfSprite_setPosition(def->tw.eye_1.spr, def->tw.eye_1.pos);
    sfRenderWindow_drawSprite(def->wdw, def->tw.eye_1.spr, NULL);
    def->tw.eye_2.pos.y = 20;
    def->tw.eye_2.pos.x = 850;
    sfSprite_setPosition(def->tw.eye_2.spr, def->tw.eye_2.pos);
    sfRenderWindow_drawSprite(def->wdw, def->tw.eye_2.spr, NULL);
    def->tw.xan.pos.y = 20;
    def->tw.xan.pos.x = 1000;
    sfSprite_setPosition(def->tw.xan.spr, def->tw.xan.pos);
    sfRenderWindow_drawSprite(def->wdw, def->tw.xan.spr, NULL);
    def->grid[nb_grid]->rect.top = 130;
    sfSprite_setTextureRect(def->grid[nb_grid]->spr, def->grid[nb_grid]->rect);
    display_selected_tower(def, nb_grid);
    infos_on_selected_towers(def);
}
