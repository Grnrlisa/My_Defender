/*
** EPITECH PROJECT, 2021
** mydef
** File description:
** ini menu + parallaxs
*/

#include "my.h"

button_t *init_button(char *filepath, sfVector2f pos, int test)
{
    button_t *button = malloc(sizeof(button_t));
    button->texture = sfTexture_createFromFile(filepath, NULL);
    button->sp = sfSprite_create();
    button->pos = pos;
    button->rect.height = 130;
    button->rect.width = 320;
    button->rect.left = test;
    button->rect.top = 0;
    sfSprite_setPosition(button->sp, button->pos);
    sfSprite_setTexture(button->sp, button->texture, sfTrue);
    sfSprite_setTextureRect(button->sp, button->rect);
    return button;
}

void ini_menu(defend_t *def)
{
    sfVector2f var;
    int test = 0;

    def->but_l = malloc(sizeof(button_t *) * 4);
    def->but_l[3] = NULL;
    for (int i = 0; i != 3; i++) {
        var.x = 150 + (i * 660);
        var.y = 720;
        test = 360 * i;
        def->but_l[i] = init_button("assets/UI/b2.png", var, test);
    }
    def->back = sfTexture_createFromFile("assets/env/bckg.jpg", NULL);
    def->sp_back = sfSprite_create();
    sfSprite_setTexture(def->sp_back, def->back, sfTrue);
    def->titlsp = sfSprite_create();
    def->titltx = sfTexture_createFromFile("assets/UI/titlbig.png", NULL);
    sfSprite_setTexture(def->titlsp, def->titltx, sfTrue);
}

void menu_is_open(defend_t *def)
{
    sfVector2f titl_pos = {570, 50};
    sfRenderWindow_drawSprite(def->wdw, def->sp_back, NULL);
    sfSprite_setPosition(def->titlsp, titl_pos);
    sfRenderWindow_drawSprite(def->wdw, def->titlsp, NULL);
    display_butt(def);
    sfRenderWindow_display(def->wdw);
}
