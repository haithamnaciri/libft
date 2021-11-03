/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:07:03 by hnaciri-          #+#    #+#             */
/*   Updated: 2021/11/03 20:38:49 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_alloc(char const *str, char c)
{
	int	counter;
	int	i;

	i = 0;
	counter = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c && (str[i - 1] == c || (!(str[i - 1]))))
			counter++;
		i++;
	}
	counter++;
	return (counter);
}

int	ft_position(char const *s, int *position, char c)
{
	int	counter;

	counter = 0;
	while (s[(*position)] == c)
		(*position)++;
	while (s[(*position)] != c && s[(*position)] != '\0')
	{
		counter++;
		(*position)++;
	}
	counter++;
	return (counter);
}

void	ft_address(char *dest, char const *src, char c, int i)
{
	int	j;

	j = 0;
	while (src[i] != '\0' && src[i] == c)
		i++;
	while (src[i] != '\0' && src[i] != c)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		*position;
	int		p;
	char	**table;

	i = 0;
	p = 0;
	position = malloc (sizeof(int));
	*position = 0;
	table = malloc (sizeof(char *) * ft_alloc(s, c));
	while (i < (ft_alloc(s, c) - 1))
	{
		p = *position;
		table[i] = malloc (sizeof(char) * ft_position(s, position, c));
		ft_address(table[i], s, c, p);
		i++;
	}
	table[ft_alloc(s, c) - 1] = 0;
	return (table);
}
