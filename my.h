/*
** EPITECH PROJECT, 2017
** my.h
** File description:
** mh
*/
#ifndef MY_H_
#define MY_H_

#include <SFML/Graphics.h>
#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics/Texture.h>
#include <SFML/Graphics/Sprite.h>
#include <SFML/Window.h>
#include <SFML/Window/Event.h>
#include <SFML/Audio.h>
#include <SFML/System.h>
#include <stdlib.h>
#include <unistd.h>
#include <SFML/Window/Mouse.h>
#include <stdio.h>

typedef struct t_list
{
	sfVideoMode mode;
	sfRenderWindow *w;
	sfTexture* texture;
	sfTexture* texture3;
	sfTexture* diedt;
	sfMusic* music;
	sfMusic* meurt;
	sfMusic* tir;
	sfSprite* sprite;
	sfSprite* dieds;
	sfSprite* games;
	sfEvent event;
	sfSprite* canard;
	sfSprite *mrneige;
	sfIntRect rect;
	sfIntRect rect2;
	sfTexture* texture2;
	sfTexture* gamet;
	sfTexture* texture4;
	sfVector2f scale;
	sfVector2f positionsprite;
	sfClock* clock;
	sfTime time;
	float seconds;
	sfText* create;
	sfFont* font;
	double x;
	int y;
	int nf;
	int xnoel;
	int ny;
	int nx;
	int ynoel;
	int over;
	sfVector2f spritebox;
	int boul;
	int score;
	int caca;
}s_list;

int	last(s_list *my);
int	my_hungergame(s_list *my);
void	my_putchar(char c);
void	my_putstr(char const *str);
void	las(s_list *my);
void	fonctx(s_list *my);
int	fifo(s_list *my);
int	fifd(s_list *my);
int	fift(s_list *my);
int	fifq(s_list *my);
int	my_strlen(char const *str);
char	*mys(char *str1, char *str2);
char	*myg(int nb);
int	my_getnbr(char const *str);
int	main();
int	move_rect(sfIntRect *rect, int offset, int max_value);
void	declvaria(s_list *my);
int	fonct2(s_list *my);
void	fonct3(s_list *my);
void	fonct4(s_list *my);
void	fonct5(s_list *my);
void	fonct6(s_list *my);
void	fonct7(s_list *my);
void	destroy(s_list *my);

#endif /*MY_H_*/
