/*
** EPITECH PROJECT, 2021
** mydef
** File description:
** ini menu + parallaxs
*/

#include "my.h"

void pause_events_annex(defend_t *def, sfVector2i mous, sfVector2f posm)
{
    sfVector2f posr = sfSprite_getPosition(def->paus.resume.spr);
    if (mous.x >= posm.x && mous.x <= posm.x + 560 && mous.y >= posm.y
    && mous.y <= posm.y + 50) {
        def->paus.goback.rect.top = 71;
        sfSprite_setTextureRect(def->paus.goback.spr, def->paus.goback.rect);
    } else {
        def->paus.goback.rect.top = 0;
        sfSprite_setTextureRect(def->paus.goback.spr, def->paus.goback.rect);
    } if (def->event.type == sfEvtMouseButtonPressed && mous.x >= posr.x &&
    mous.x <= posr.x + 220 && mous.y >= posr.y && mous.y <= posr.y + 70) {
        def->paus.is_pause = 0;
    } else if (mous.x >= posr.x && mous.x <= posr.x + 220 && mous.y >= posr.y
    && mous.y <= posr.y + 70) {
        def->paus.resume.rect.top = 60;
        sfSprite_setTextureRect(def->paus.resume.spr, def->paus.resume.rect);
    } else {
        def->paus.resume.rect.top = 0;
        sfSprite_setTextureRect(def->paus.resume.spr, def->paus.resume.rect);
    } display_scnes(def);
    is_click(def);
}

void pause_events(defend_t *def)
{
    sfVector2i mous = sfMouse_getPositionRenderWindow(def->wdw);
    sfVector2f posq = sfSprite_getPosition(def->paus.quit.spr);
    sfVector2f posm = sfSprite_getPosition(def->paus.goback.spr);

    if (def->event.type == sfEvtMouseButtonPressed && mous.x >= posq.x &&
    mous.x <= posq.x + 320 && mous.y >= posq.y && mous.y <= posq.y + 70) {
        sfRenderWindow_close(def->wdw);
    } else if (mous.x >= posq.x && mous.x <= posq.x + 320 && mous.y >= posq.y
    && mous.y <= posq.y + 50) {
        def->paus.quit.rect.top = 65;
        sfSprite_setTextureRect(def->paus.quit.spr, def->paus.quit.rect);
    } else {
        def->paus.quit.rect.top = 0;
        sfSprite_setTextureRect(def->paus.quit.spr, def->paus.quit.rect);
    }
    if (def->event.type == sfEvtMouseButtonPressed && mous.x >= posm.x &&
    mous.x <= posm.x + 560 && mous.y >= posm.y && mous.y <= posm.y + 70) {
        def->scene = 1;
    }
    pause_events_annex(def, mous, posm);
}
