s/*
** EPITECH PROJECT, 2017
** my_hunter
** File description:
** hunter
*/

#include "my.h"

void	fonct5(s_list *my)
{
	if (my->boul == 1) {
		if (my->seconds > 1.0) {
			sfClock_restart(my->clock);
			my->caca = move_rect(&my->rect2, 297, 2977);
		}
		las(my);
	}
	else {
		sfSprite_setTextureRect(my->canard, my->rect);
		sfSprite_setPosition(my->canard, (sfVector2f){my->x,my->y});
		sfRenderWindow_drawSprite(my->w, my->canard, NULL);
		if (my->seconds > 1.0) {
			sfClock_restart(my->clock);
			move_rect(&my->rect, 297, 2977);
		}
	}
}

void	fonct6(s_list *my)
{
	if (sfMouse_isButtonPressed(sfMouseLeft)) {
		my->positionsprite = sfSprite_getPosition(my->canard);
		my->xnoel = my->event.mouseButton.x;
		my->ynoel = my->event.mouseButton.y;
		if ((fifo(my)) && (fifd(my)) && (fift(my)) && (fifq(my))) {
			my->score = my->score + 1;
			my->over = my->over - 1;
			sfMusic_pause(my->music);
			sfMusic_stop(my->tir);
			sfMusic_play(my->meurt);
			sfMusic_play(my->music);
			sfText_setString(my->create, mys("Score : ", myg(my->score)));
			my->boul = 1;
		}
	}
}

void	fonct7(s_list *my)
{
	if (my->x > 1920) {
		my->x = -100;
		my->y += 100;
		if (my->y > 600)
			my->y = 100;
	}
	sfRenderWindow_drawSprite(my->w, my->mrneige, NULL);
	sfRenderWindow_display(my->w);
	sfSprite_setPosition(my->dieds, (sfVector2f){my->x,my->y});

	if (my->score > 1)
		my->x = my->x + 0.5;
	if (my->score >= 3)
		my->x = my->x + 7.0;
	my->x = my->x + 0.9;
	if (my->score == 5) {
		sfRenderWindow_drawSprite(my->w, my->games, NULL);
	}
}

void	destroy(s_list *my)
{
	sfSprite_destroy(my->sprite);
	sfSprite_destroy(my->canard);
	sfSprite_destroy(my->mrneige);
	sfSprite_destroy(my->dieds);
	sfSprite_destroy(my->games);
	sfTexture_destroy(my->texture);
	sfTexture_destroy(my->texture3);
	sfTexture_destroy(my->texture2);
	sfTexture_destroy(my->gamet);
	sfTexture_destroy(my->texture4);
	sfTexture_destroy(my->diedt);
	sfMusic_destroy(my->tir);
	sfMusic_destroy(my->meurt);
	sfMusic_destroy(my->music);
	sfRenderWindow_destroy(my->w);
}

int	my_hungergame(s_list *my)
{
	declvaria(my);
	fonct2(my);
	fonct3(my);
	while (sfRenderWindow_isOpen(my->w)) {
		fonct4(my);
		fonct5(my);
		//fonct7(my);
		if (my->over == 5) {
			sfRenderWindow_drawSprite(my->w, my->games, NULL);
		}
		while (sfRenderWindow_pollEvent(my->w, &my->event))
		{
			fonct6(my);
			fonctx(my);
		}
	}
	destroy(my);
}
