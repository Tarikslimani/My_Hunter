/*
** EPITECH PROJECT, 2017
** fonct
** File description:
** fc
*/

#include "my.h"

int	move_rect(sfIntRect *rect, int offset, int max_value)
{
	rect->left = rect->left + offset;
	if (rect->left >= max_value) {
		rect->left = 0;
		return (1);
	}
	if (rect->left > max_value)
	{
		rect->left = 0;
	}
	return (0);
}

void	declvaria(s_list *my)
{
	my->mode.width = 1920;
	my->mode.height = 1080;
	my->mode.bitsPerPixel = 32;
	my->x = 100;
	my->y = 340;
	my->nf = 0;
	my->ny = 455;
	my->nx = 150;
	my->over = 0;
	my->spritebox.x = 297.0f;
	my->spritebox.y = 204.0f;
	my->boul = 0;
	my->score = 0;
	my->caca;
}

int	fonct2(s_list *my)
{
	my->music = sfMusic_createFromFile("we.ogg");
	my->meurt = sfMusic_createFromFile("1.ogg");
	my->tir = sfMusic_createFromFile("2080.ogg");
	last(my);
	sfMusic_play(my->music);
	sfMusic_setVolume(my->music, 50.0);
	my->w = sfRenderWindow_create(my->mode, "P", sfResize | sfClose, NULL);
	my->texture = sfTexture_createFromFile("image/image.jpg", NULL);
	my->gamet = sfTexture_createFromFile("image/game.png", NULL);
	my->texture2 = sfTexture_createFromFile("image/Run2.png", NULL);
	my->texture3 = sfTexture_createFromFile("image/Bneige.png", NULL);
	my->diedt = sfTexture_createFromFile("image/died.png", NULL);
	my->create = sfText_create();
	my->font = sfFont_createFromFile("1.ttf");
	sfText_setString(my->create, "Score : ");
	sfText_setFont(my->create, my->font);
	sfText_setCharacterSize(my->create, 80);
	sfText_setColor(my->create, (sfColor){195 ,13 ,13 ,255});
}

void	fonct3(s_list *my)
{
	my->rect.top = 0;
	my->rect.left = 0;
	my->rect.width = 297;
	my->rect.height = 204;
	my->rect2.top = 0;
	my->rect2.left = 0;
	my->rect2.width = 297;
	my->rect2.height = 204;
	my->sprite = sfSprite_create();
	my->dieds = sfSprite_create();
	my->games = sfSprite_create();
	my->canard = sfSprite_create();
	my->mrneige = sfSprite_create();
	sfSprite_setTexture(my->sprite, my->texture, sfTrue);
	sfSprite_setTexture(my->games, my->gamet, sfTrue);
	sfSprite_setTexture(my->dieds, my->diedt, sfTrue);
	sfSprite_setTexture(my->canard, my->texture2, sfTrue);
	sfSprite_setTexture(my->mrneige, my->texture3, sfTrue);
	my->clock = sfClock_create();
}

void	fonct4(s_list *my)
{
	my->time = sfClock_getElapsedTime(my->clock);
	my->seconds = my->time.microseconds / 100000.0;
	sfRenderWindow_clear(my->w, sfBlack);
	sfText_setPosition(my->create, (sfVector2f){1400.0,900.0});
	sfRenderWindow_drawSprite(my->w, my->sprite, NULL);
	sfRenderWindow_drawText(my->w, my->create, NULL);
	sfSprite_setPosition(my->mrneige, (sfVector2f){my->nx,my->ny});
}
