/*
** EPITECH PROJECT, 2021
** B-MUL-200-REN-2-1-mydefender-antonin.quilichini
** File description:
** goto_scene.c
*/

#include "my.h"

void init_infos_on_towers(defend_t *def)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(def->wdw);
    def->info.color = sfColor_fromRGB(120, 161, 185);
    def->info.infos_font = sfFont_createFromFile("assets/font/elliotsix.otf");
    def->info.infos_text = sfText_create();
    sfText_setFont(def->info.infos_text, def->info.infos_font);
    sfText_setColor(def->info.infos_text, def->info.color);
    def->info.infos_pos.x = mouse.x - 80;
    def->info.infos_pos.y = mouse.y + 30;
    sfText_setCharacterSize(def->info.infos_text, 15);
    sfText_setPosition(def->info.infos_text, def->info.infos_pos);
}

void infos_on_selected_towers_annex(defend_t *def, sfVector2i mous)
{
    sfVector2f pos3 = sfSprite_getPosition(def->tw.xan.spr);
    sfVector2f pos4 = sfSprite_getPosition(def->tw.trblc.spr);

    if (mous.x >= pos3.x && mous.x <= pos3.x + 130 &&
    mous.y >= pos3.y && mous.y <= pos3.y + 115) {
        sfText_setString(def->info.infos_text,
        "Effet : ralentissement \n       Cout : 15");
        sfRenderWindow_drawText(def->wdw, def->info.infos_text, NULL);
    }
    if (mous.x >= pos4.x && mous.x <= pos4.x + 130 &&
    mous.y >= pos4.y && mous.y <= pos4.y + 115) {
        sfText_setString(def->info.infos_text,
        "Effet : argent++ \n   Cout : 45");
        sfRenderWindow_drawText(def->wdw, def->info.infos_text, NULL);
    }
}

void infos_on_selected_towers(defend_t *def)
{
    init_infos_on_towers(def);
    sfVector2i mous = sfMouse_getPositionRenderWindow(def->wdw);
    sfVector2f pos1 = sfSprite_getPosition(def->tw.eye_1.spr);
    sfVector2f pos2 = sfSprite_getPosition(def->tw.eye_2.spr);

    if (mous.x >= pos1.x && mous.x <= pos1.x + 130 &&
    mous.y >= pos1.y && mous.y <= pos1.y + 130) {
        sfText_setString(def->info.infos_text,
        "Effet : attaque unique\n       Cout : 20");
        sfRenderWindow_drawText(def->wdw, def->info.infos_text, NULL);
    }
    if (mous.x >= pos2.x && mous.x <= pos2.x + 130 &&
    mous.y >= pos2.y && mous.y <= pos2.y + 115) {
        sfText_setString(def->info.infos_text,
        "Effet : attaque zone\n      Cout : 50");
        sfRenderWindow_drawText(def->wdw, def->info.infos_text, NULL);
    }
    infos_on_selected_towers_annex(def, mous);
}
