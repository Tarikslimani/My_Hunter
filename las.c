/*
** EPITECH PROJECT, 2017
** las
** File description:
** las
*/

#include "my.h"
#include <stdlib.h>

void	las(s_list *my)
{
	sfSprite_setTextureRect(my->dieds, my->rect2);
	sfRenderWindow_drawSprite(my->w, my->dieds, NULL);
	if (my->caca == 1) {
		my->y = (rand() % (600 - 340)) + 340;
		my->x = -210;
		my->boul = 0;
		my->caca = 0;
	}
}

int	main(int ac, char **av)
{
	s_list *my;
	if ((my = malloc(sizeof(s_list))) == NULL)
		return (0);
	if (ac == 1)
		my_hungergame(my);
	if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h') {
		my_putstr("Les règles sont simples :");
		my_putstr("Tu as 5 essais pour tuer le père noël.");
	}
}

int	last(s_list *my)
{
	if (!my->music)
		return EXIT_FAILURE;
	if (!my->meurt)
		return EXIT_FAILURE;
	if (!my->tir)
		return EXIT_FAILURE;
	if (!my->texture)
		return EXIT_FAILURE;
	if (!my->gamet)
		return EXIT_FAILURE;
	if (!my->texture3)
		return EXIT_FAILURE;
	if (!my->texture3)
		return EXIT_FAILURE;
	if (!my->diedt)
		return EXIT_FAILURE;
	if (!my->font)
		return EXIT_FAILURE;
}
