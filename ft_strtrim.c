/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:41:31 by hnaciri-          #+#    #+#             */
/*   Updated: 2021/11/03 21:22:55 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isset(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char const	*s2;
	char		*str;
	int			i;

	i = 0;
	if ((!*s1))
		return ((char *)s1);
	while (ft_isset(set, *s1) && *s1 != '\0')
		s1++;
	s2 = s1;
	while (*s2 != '\0')
		s2++;
	s2--;
	while (ft_isset(set, *s2))
		s2--;
	str = malloc (sizeof(char) * ((s2 - s1) + 2));
	while (s1 <= s2)
	{
		str[i] = *s1;
		s1++;
		i++;
	}
	str[i] = '\0';
	return (str);
}
