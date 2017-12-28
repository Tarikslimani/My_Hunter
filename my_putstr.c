/*
** EPITECH PROJECT, 2017
** my_pustr.c
** File description:
** mp
*/

#include "my.h"
#include <unistd.h>

void	my_putchar(char c)
{
	write(1, &c, 1);
}

void	my_putstr(char const *str)
{
	int b = 0;

	while (str[b] != '\0') {
		my_putchar(str[b]);
		b = b + 1;
	}
	my_putchar('\n');
}
