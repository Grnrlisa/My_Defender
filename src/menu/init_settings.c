/*
** EPITECH PROJECT, 2021
** mydef
** File description:
** ini menu + parallaxs
*/

#include "my.h"

void init_change_music_annex(defend_t *def)
{
    def->opt.opt_2.tx = sfTexture_createFromFile("assets/UI/rambee.png", NULL);
    def->opt.opt_2.spr = sfSprite_create();
    def->opt.opt_2.pos.x = 815;
    def->opt.opt_2.pos.y = 660;
    def->opt.opt_2.rect.top = 0;
    def->opt.opt_2.rect.left = 0;
    def->opt.opt_2.rect.height = 60;
    def->opt.opt_2.rect.width = 360;
    sfSprite_setTexture(def->opt.opt_2.spr, def->opt.opt_2.tx, sfTrue);
    sfSprite_setPosition(def->opt.opt_2.spr, def->opt.opt_2.pos);
    sfSprite_setTextureRect(def->opt.opt_2.spr, def->opt.opt_2.rect);
    sfSprite_setTexture(def->opt.plus.spr, def->opt.plus.tx, sfTrue);
    sfSprite_setPosition(def->opt.plus.spr, def->opt.plus.pos);
    sfSprite_setTextureRect(def->opt.plus.spr, def->opt.plus.rect);
}

void init_change_music(defend_t *def)
{
    def->opt.change.tx = sfTexture_createFromFile("assets/UI/chang.png", NULL);
    def->opt.change.spr = sfSprite_create();
    def->opt.change.pos.x = 785;
    def->opt.change.pos.y = 600;
    sfSprite_setTexture(def->opt.change.spr, def->opt.change.tx, sfTrue);
    sfSprite_setPosition(def->opt.change.spr, def->opt.change.pos);
    def->opt.opt_1.tx = sfTexture_createFromFile("assets/UI/brohst.png", NULL);
    def->opt.opt_1.spr = sfSprite_create();
    def->opt.opt_1.pos.x = 815;
    def->opt.opt_1.pos.y = 712;
    def->opt.opt_1.rect.top = 0;
    def->opt.opt_1.rect.left = 0;
    def->opt.opt_1.rect.height = 60;
    def->opt.opt_1.rect.width = 360;
    sfSprite_setTexture(def->opt.opt_1.spr, def->opt.opt_1.tx, sfTrue);
    sfSprite_setPosition(def->opt.opt_1.spr, def->opt.opt_1.pos);
    sfSprite_setTextureRect(def->opt.opt_1.spr, def->opt.opt_1.rect);
    init_change_music_annex(def);
}

void init_vol_but(defend_t *def)
{
    def->opt.less.tx = sfTexture_createFromFile("assets/UI/less.png", NULL);
    def->opt.less.spr = sfSprite_create();
    def->opt.less.pos.x = 830;
    def->opt.less.pos.y = 345;
    def->opt.less.rect.top = 0;
    def->opt.less.rect.left = 0;
    def->opt.less.rect.height = 30;
    def->opt.less.rect.width = 50;
    sfSprite_setTexture(def->opt.less.spr, def->opt.less.tx, sfTrue);
    sfSprite_setPosition(def->opt.less.spr, def->opt.less.pos);
    sfSprite_setTextureRect(def->opt.less.spr, def->opt.less.rect);
    def->opt.plus.tx = sfTexture_createFromFile("assets/UI/plus.png", NULL);
    def->opt.plus.spr = sfSprite_create();
    def->opt.plus.pos.x = 1128;
    def->opt.plus.pos.y = 340;
    def->opt.plus.rect.top = 0;
    def->opt.plus.rect.left = 0;
    def->opt.plus.rect.height = 50;
    def->opt.plus.rect.width = 50;
}

void init_settings_but(defend_t *def)
{
    def->opt.vol.tx = sfTexture_createFromFile("assets/UI/vol.png", NULL);
    def->opt.vol.spr = sfSprite_create();
    def->opt.vol.pos.x = 886;
    def->opt.vol.pos.y = 320;
    sfSprite_setTexture(def->opt.vol.spr, def->opt.vol.tx, sfTrue);
    sfSprite_setPosition(def->opt.vol.spr, def->opt.vol.pos);
    def->opt.back.tx = sfTexture_createFromFile("assets/UI/backbut.png", NULL);
    def->opt.back.spr = sfSprite_create();
    def->opt.back.pos.x = 60;
    def->opt.back.pos.y = 920;
    def->opt.back.rect.top = 0;
    def->opt.back.rect.left = 0;
    def->opt.back.rect.height = 50;
    def->opt.back.rect.width = 200;
    sfSprite_setTexture(def->opt.back.spr, def->opt.back.tx, sfTrue);
    sfSprite_setPosition(def->opt.back.spr, def->opt.back.pos);
    sfSprite_setTextureRect(def->opt.back.spr, def->opt.back.rect);
    init_vol_but(def);
    init_change_music(def);
}

void init_settings_bar(defend_t *def)
{
    def->opt.bar_1.tx = sfTexture_createFromFile("assets/UI/bar.png", NULL);
    def->opt.bar_1.spr = sfSprite_create();
    def->opt.bar_1.pos.x = 750;
    def->opt.bar_1.pos.y = 450;
    sfSprite_setTexture(def->opt.bar_1.spr, def->opt.bar_1.tx, sfTrue);
    sfSprite_setPosition(def->opt.bar_1.spr, def->opt.bar_1.pos);
    def->opt.bar_2.tx = sfTexture_createFromFile("assets/UI/bar_bk.png", NULL);
    def->opt.bar_2.spr = sfSprite_create();
    def->opt.bar_2.rect.top = 0;
    def->opt.bar_2.rect.height = 10;
    def->opt.bar_2.rect.width = 500;
    sfSprite_setTexture(def->opt.bar_2.spr, def->opt.bar_2.tx, sfTrue);
    sfSprite_setPosition(def->opt.bar_2.spr, def->opt.bar_1.pos);
    def->opt.curs.tx = sfTexture_createFromFile("assets/UI/scrlbar.png", NULL);
    def->opt.curs.spr = sfSprite_create();
    def->opt.curs.pos.x = 1196;
    def->opt.curs.pos.y = 450;
    sfSprite_setTexture(def->opt.curs.spr, def->opt.curs.tx, sfTrue);
    sfSprite_setPosition(def->opt.curs.spr, def->opt.curs.pos);
    init_settings_but(def);
}
