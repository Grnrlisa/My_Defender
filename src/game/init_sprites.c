/*
** EPITECH PROJECT, 2021
** B-MUL-200-REN-2-1-mydefender-antonin.quilichini
** File description:
** goto_scene.c
*/

#include "my.h"

void init_goals(defend_t *def)
{
    def->coin.spr = sfSprite_create();
    def->coin.text = sfTexture_createFromFile("assets/obj/coin.png", NULL);
    def->coin.pos.x = 1790;
    def->coin.pos.y = 20;
    sfSprite_setPosition(def->coin.spr, def->coin.pos);
    sfSprite_setTexture(def->coin.spr, def->coin.text, sfFalse);
    def->apl.spr = sfSprite_create();
    def->apl.text = sfTexture_createFromFile("assets/obj/apl.png", NULL);
    def->apl.pos.x = 1795;
    def->apl.pos.y = 176;
    def->apl.rect.top = 0;
    def->apl.rect.left = 0;
    def->apl.rect.height = 110;
    def->apl.rect.width = 100;
    sfSprite_setPosition(def->apl.spr, def->apl.pos);
    sfSprite_setTexture(def->apl.spr, def->apl.text, sfFalse);
    sfSprite_setTextureRect(def->apl.spr, def->apl.rect);
}

void init_tower_sprites(defend_t *def)
{
    def->tw.eye_1.spr = sfSprite_create();
    def->tw.eye_1.text = sfTexture_createFromFile("assets/obj/eye1.png", NULL);
    sfSprite_setTexture(def->tw.eye_1.spr, def->tw.eye_1.text, sfFalse);
    def->tw.eye_2.spr = sfSprite_create();
    def->tw.eye_2.text = sfTexture_createFromFile("assets/obj/eye2.png", NULL);
    sfSprite_setTexture(def->tw.eye_2.spr, def->tw.eye_2.text, sfFalse);
    def->tw.xan.spr = sfSprite_create();
    def->tw.xan.text = sfTexture_createFromFile("assets/obj/xan.png", NULL);
    sfSprite_setTexture(def->tw.xan.spr, def->tw.xan.text, sfFalse);
    def->tw.trblc.spr = sfSprite_create();
    def->tw.trblc.text = sfTexture_createFromFile("assets/obj/tbln.png", NULL);
    sfSprite_setTexture(def->tw.trblc.spr, def->tw.trblc.text, sfFalse);
    init_goals(def);
}
