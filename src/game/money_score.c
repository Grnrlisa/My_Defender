/*
** EPITECH PROJECT, 2021
** B-MUL-200-REN-2-1-mydefender-antonin.quilichini
** File description:
** goto_scene.c
*/

#include "my.h"

void init_money_score(defend_t *def)
{
    def->money.sum = 100;
    def->money.color = sfColor_fromRGB(159, 159, 159);
    def->money.color_sum = sfColor_fromRGB(120, 161, 185);
    def->money.money_font = sfFont_createFromFile("assets/font/elliotsix.otf");
    def->money.money_score = sfText_create();
    def->money.text = sfText_create();
    sfText_setFont(def->money.money_score, def->money.money_font);
    sfText_setFont(def->money.text, def->money.money_font);
    sfText_setColor(def->money.money_score, def->money.color_sum);
    sfText_setColor(def->money.text, def->money.color);
    def->money.pos_text.x = 1646;
    def->money.pos_text.y = 29;
    def->money.pos_score.x = 1690;
    def->money.pos_score.y = 50;
    sfText_setCharacterSize(def->money.money_score, 35);
    sfText_setCharacterSize(def->money.text, 22);
    sfText_setPosition(def->money.money_score, def->money.pos_score);
    sfText_setPosition(def->money.text, def->money.pos_text);
}
