/*
** EPITECH PROJECT, 2021
** mydef
** File description:
** ini menu + parallaxs
*/

#include "my.h"

void change_music_evs_next(defend_t *def, sfVector2i mous)
{
    sfVector2f pos_2 = sfSprite_getPosition(def->opt.opt_2.spr);

    if (def->event.type == sfEvtMouseButtonPressed && mous.x >= pos_2.x &&
    mous.x <= pos_2.x + 360 && mous.y >= pos_2.y && mous.y <= pos_2.y + 70) {
        sfMusic_pause(def->music.start_sound);
        sfMusic_pause(def->music.second_sound);
        sfMusic_play(def->music.second_sound);
    } else if (mous.x >= pos_2.x && mous.x <= pos_2.x + 360 &&
    mous.y >= pos_2.y && mous.y <= pos_2.y + 70) {
        def->opt.opt_2.rect.top = 66;
        sfSprite_setTextureRect(def->opt.opt_2.spr, def->opt.opt_2.rect);
    } else {
        def->opt.opt_2.rect.top = 0;
        sfSprite_setTextureRect(def->opt.opt_2.spr, def->opt.opt_2.rect);
    }
}

void change_music_evs(defend_t *def, sfVector2i mous)
{
    sfVector2f pos_1 = sfSprite_getPosition(def->opt.opt_1.spr);

    if (def->event.type == sfEvtMouseButtonPressed && mous.x >= pos_1.x &&
    mous.x <= pos_1.x + 360 && mous.y >= pos_1.y && mous.y <= pos_1.y + 70) {
        sfMusic_pause(def->music.second_sound);
        sfMusic_pause(def->music.start_sound);
        sfMusic_play(def->music.start_sound);
    } else if (mous.x >= pos_1.x && mous.x <= pos_1.x + 360 &&
    mous.y >= pos_1.y && mous.y <= pos_1.y + 70) {
        def->opt.opt_1.rect.top = 60;
        sfSprite_setTextureRect(def->opt.opt_1.spr, def->opt.opt_1.rect);
    } else {
        def->opt.opt_1.rect.top = 0;
        sfSprite_setTextureRect(def->opt.opt_1.spr, def->opt.opt_1.rect);
    }
    change_music_evs_next(def, mous);
}
