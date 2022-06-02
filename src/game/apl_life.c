/*
** EPITECH PROJECT, 2021
** B-MUL-200-REN-2-1-mydefender-antonin.quilichini
** File description:
** goto_scene.c
*/

#include "my.h"

void apl_is_bited(defend_t *def)
{
    if (def->life <= 220)
        def->apl.rect.top = 104;
    if (def->life <= 140)
        def->apl.rect.top = 204;
    if (def->life <= 60)
        def->apl.rect.top = 304;
    if (def->life <= -20) {
        def->apl.rect.top = 404;
        def->scene = 4;
    }
    sfSprite_setTextureRect(def->apl.spr, def->apl.rect);
}

void apl_cols(defend_t *def, int i)
{
    int collision = 0;

    sfVector2f pos_enm = sfSprite_getPosition(def->l_enm[i]->spr);

    if (pos_enm.x >= def->apl.pos.x + def->apl.rect.width - 130 &&
    pos_enm.x <= def->apl.pos.x + def->apl.rect.width + 110 &&
    pos_enm.y >= def->apl.pos.y + def->apl.rect.height - 130 &&
    pos_enm.y <= def->apl.pos.y + def->apl.rect.height + 130)
        collision = 1;
    else
        collision = 0;
    if (collision == 1) {
        def->life -= 1;
    }
    apl_is_bited(def);
}
