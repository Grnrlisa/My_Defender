/*
** EPITECH PROJECT, 2021
** B-MUL-200-REN-2-1-mydefender-antonin.quilichini
** File description:
** goto_scene.c
*/

#include "my.h"

void enm_is_hited(sfSprite *spr, sfIntRect rect)
{
    int status_hit = 1;

    if (status_hit == 1)
        rect.top += 130;
    if (rect.top >= 520)
        rect.top = 260;
    sfSprite_setTextureRect(spr, rect);
}

int check_collisions_o_1(defend_t *def, int i, int j)
{
    int collision = 0;
    sfFloatRect o_1_rect = sfSprite_getGlobalBounds(def->plc_o1[j]->spr);
    sfVector2f pos_enm = sfSprite_getPosition(def->l_enm[i]->spr);
    sfVector2f pos_o_1 = sfSprite_getPosition(def->plc_o1[j]->spr);

    if (pos_enm.x >= pos_o_1.x + o_1_rect.width - 360 &&
    pos_enm.x <= pos_o_1.x + o_1_rect.width + 250 && pos_enm.y >= pos_o_1.y
    + o_1_rect.height - 460 && pos_enm.y <= pos_o_1.y +
    o_1_rect.height + 460)
        collision = 1;
    else
        collision = 0;

    if (collision == 1) {
        def->l_enm[i]->life -= 1;
        enm_is_hited(def->l_enm[i]->spr, def->l_enm[i]->rect);
    }
    return (i);
}

int check_collisions_xan(defend_t *def, int i, int j)
{
    int collision = 0;
    sfFloatRect o_1_rect = sfSprite_getGlobalBounds(def->plc_xan[j]->spr);
    sfVector2f pos_enm = sfSprite_getPosition(def->l_enm[i]->spr);
    sfVector2f pos_o_1 = sfSprite_getPosition(def->plc_xan[j]->spr);

    if (pos_enm.x >= pos_o_1.x + o_1_rect.width - 360 &&
    pos_enm.x <= pos_o_1.x + o_1_rect.width + 250 && pos_enm.y >= pos_o_1.y
    + o_1_rect.height - 460 && pos_enm.y <= pos_o_1.y +
    o_1_rect.height + 460)
        collision = 1;
    else
        collision = 0;

    if (collision == 1) {
        def->l_enm[i]->speed = 1;
        enm_is_hited(def->l_enm[i]->spr, def->l_enm[i]->rect);
    } else if (collision == 0)
        def->l_enm[i]->speed = 2;
    return (0);
}

int check_collisions_o_2(defend_t *def, int i, int j)
{
    int collision = 0;
    sfFloatRect o_2_rect = sfSprite_getGlobalBounds(def->plc_o2[j]->spr);
    sfVector2f pos_enm = sfSprite_getPosition(def->l_enm[i]->spr);
    sfVector2f pos_o_2 = sfSprite_getPosition(def->plc_o2[j]->spr);

    if (pos_enm.x >= pos_o_2.x + o_2_rect.width - 270 &&
    pos_enm.x <= pos_o_2.x + o_2_rect.width + 110 && pos_enm.y >= pos_o_2.y
    + o_2_rect.height - 260 && pos_enm.y <= pos_o_2.y +
    o_2_rect.height + 260)
        collision = 1;
    else
        collision = 0;

    if (collision == 1) {
        def->l_enm[i]->life -= 1;
        enm_is_hited(def->l_enm[i]->spr, def->l_enm[i]->rect);
    }
    return (0);
}

void apl_is_bited(defend_t *def)
{
    if (def->life <= 80)
        def->apl.rect.top = 104;
    sfSprite_setTextureRect(def->apl.spr, def->apl.rect);
    if (def->life <= 50)
        def->apl.rect.top = 204;
    sfSprite_setTextureRect(def->apl.spr, def->apl.rect);
    if (def->life <= 20)
        def->apl.rect.top = 304;
    sfSprite_setTextureRect(def->apl.spr, def->apl.rect);
    if (def->life <= -10) {
        def->apl.rect.top = 404;
        def->scene = 4;
        is_game_over(def);
    }
    sfSprite_setTextureRect(def->apl.spr, def->apl.rect);
}

void apl_cols(defend_t *def, int i)
{
    int collision = 0;

    sfVector2f pos_enm = sfSprite_getPosition(def->l_enm[i]->spr);

    if (pos_enm.x >= def->apl.pos.x + def->apl.rect.width - 200 &&
    pos_enm.x <= def->apl.pos.x + def->apl.rect.width + 110 &&
    pos_enm.y >= def->apl.pos.y + def->apl.rect.height - 260 &&
    pos_enm.y <= def->apl.pos.y + def->apl.rect.height + 260)
        collision = 1;
    else
        collision = 0;
    if (collision == 1) {
        def->life -= 1;
    }
    apl_is_bited(def);
}
