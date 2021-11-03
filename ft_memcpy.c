/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:53:11 by hnaciri-          #+#    #+#             */
/*   Updated: 2021/11/03 12:09:26 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t	i;
	char	*dest;
	char	*source;

	i = 0;
	source = (char *) src;
	dest = (char *) dst;
	while (i < n)
	{
		dest[i] = source[i];
		i++;
	}
	return (dst);
}
