/*
** EPITECH PROJECT, 2021
** mydef
** File description:
** ini menu + parallaxs
*/

#include "my.h"

void init_pause_menu_annex_2(defend_t *def)
{
    def->paus.resume.tx = sfTexture_createFromFile("assets/UI/rsme.png", NULL);
    def->paus.resume.spr = sfSprite_create();
    def->paus.resume.pos.x = 840;
    def->paus.resume.pos.y = 450;
    def->paus.resume.rect.left = 0;
    def->paus.resume.rect.top = 0;
    def->paus.resume.rect.height = 68;
    def->paus.resume.rect.width = 300;
    sfSprite_setTexture(def->paus.resume.spr, def->paus.resume.tx, sfTrue);
    sfSprite_setPosition(def->paus.resume.spr, def->paus.resume.pos);
    sfSprite_setTextureRect(def->paus.resume.spr, def->paus.resume.rect);
}

void init_pause_menu_annex(defend_t *def)
{
    def->paus.bg.tx = sfTexture_createFromFile("assets/UI/pause_bg.png", NULL);
    def->paus.bg.spr = sfSprite_create();
    def->paus.bg.pos.x = 0;
    def->paus.bg.pos.y = 0;
    sfSprite_setTexture(def->paus.bg.spr, def->paus.bg.tx, sfTrue);
    sfSprite_setPosition(def->paus.bg.spr, def->paus.bg.pos);
    def->paus.quit.tx = sfTexture_createFromFile("assets/UI/quitps.png", NULL);
    def->paus.quit.spr = sfSprite_create();
    def->paus.quit.pos.x = 800;
    def->paus.quit.pos.y = 600;
    def->paus.quit.rect.top = 0;
    def->paus.quit.rect.left = 0;
    def->paus.quit.rect.height = 65;
    def->paus.quit.rect.width = 400;
    sfSprite_setTexture(def->paus.quit.spr, def->paus.quit.tx, sfTrue);
    sfSprite_setPosition(def->paus.quit.spr, def->paus.quit.pos);
    sfSprite_setTextureRect(def->paus.quit.spr, def->paus.quit.rect);
    init_pause_menu_annex_2(def);
}

void init_pause_menu(defend_t *def)
{
    def->paus.is_pause = 0;
    def->paus.goback.tx = sfTexture_createFromFile("assets/UI/back.png", NULL);
    def->paus.goback.spr = sfSprite_create();
    def->paus.goback.pos.x = 690;
    def->paus.goback.pos.y = 528;
    def->paus.goback.rect.top = 0;
    def->paus.goback.rect.left = 0;
    def->paus.goback.rect.height = 70;
    def->paus.goback.rect.width = 650;
    sfSprite_setTexture(def->paus.goback.spr, def->paus.goback.tx, sfTrue);
    sfSprite_setPosition(def->paus.goback.spr, def->paus.goback.pos);
    sfSprite_setTextureRect(def->paus.goback.spr, def->paus.goback.rect);
    def->paus.titps.tx = sfTexture_createFromFile("assets/UI/pause.png", NULL);
    def->paus.titps.spr = sfSprite_create();
    def->paus.titps.pos.x = 850;
    def->paus.titps.pos.y = 300;
    sfSprite_setTexture(def->paus.titps.spr, def->paus.titps.tx, sfTrue);
    sfSprite_setPosition(def->paus.titps.spr, def->paus.titps.pos);
    init_pause_menu_annex(def);
}
