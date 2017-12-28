/*
** EPITECH PROJECT, 2017
** fonction
** File description:
** fct
*/

#include "my.h"

int	my_strlen(char const *str)
{
	int i = 0;
	while(str[i])
		i = i + 1;
	return (i);
}

char	*mys(char *str1, char *str2)
{
	char *str;
	int i;

	if (str1 == NULL || str2 == NULL)
		return (NULL);
	i = my_strlen(str1) + my_strlen(str2) + 1;
	if ((str = malloc(sizeof(char) * i)) == NULL)
		return (NULL);
	i = 0;
	while (*str1 != '\0')
		str[i++] = *str1++;
	while (*str2 != '\0')
		str[i++] = *str2++;
	str[i] = '\0';

	return (str);
}

char	*myg(int nb)
{
	char    *str;

	if ((str = malloc(sizeof(char) * 2)) == NULL)
		return (NULL);
	str[0] = nb + 48;
	str[1] = 0;
	return (str);
}

int	my_getnbr(char const *str)
{
	long    save = 0;
	int     o = 1;

	while (*str != '\0') {
		if (*str == '-')
			o = o * -1;
		if (*str >= '0' && *str <= '9') {
			while (*str >= '0' && *str <= '9') {
				save = (save * 10) + *str - '0';
				*str++;
			}
			save = save * o;
			if (save <= 2147483647 && save >= -2147483648)
				return (save);
			else
				return (0);
		}
		*str++;
	}
	return (0);
}
