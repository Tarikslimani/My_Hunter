/*
** EPITECH PROJECT, 2017
** my_if.c
** File description:
** my_if
*/

#include "my.h"

int	fifo(s_list *my)
{
	return (my->xnoel >= my->positionsprite.x);
}

int	fifd(s_list *my)
{
	return (my->xnoel <= (my->positionsprite.x + my->spritebox.x));
}

int	fift(s_list *my)
{
	return (my->ynoel >= my->positionsprite.y);
}
int	fifq(s_list *my)
{
	return (my->ynoel <= (my->positionsprite.y + my->spritebox.y));
}

void	fonctx(s_list *my)
{
	if (sfMouse_isButtonPressed(sfMouseLeft)) {
		sfMusic_play(my->tir);
		my->over = my->over + 1;
	}
	if (my->over == 5) {
		my_putstr("GAME OVER : Tu dois me mettre un 20/20 rachek");
		sfRenderWindow_close(my->w);
	}
	if (my->score == 5) {
		my_putstr("YOU WIN : Donnez moi un 18/20 svp");
		sfRenderWindow_close(my->w);
	}
	if (my->event.type == sfEvtClosed)
		sfRenderWindow_close(my->w);
}
