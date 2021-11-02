/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 13:05:45 by hnaciri-          #+#    #+#             */
/*   Updated: 2021/11/01 13:09:41 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int _c)
{
	if (_c >= 32 && _c <= 127)
		return (1);
	return (0);
}