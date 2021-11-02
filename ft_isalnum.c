/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 11:45:48 by hnaciri-          #+#    #+#             */
/*   Updated: 2021/11/01 12:09:12 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int _c)
{
	if ((_c >= 'a' && _c <= 'z')
		|| (_c >= 'A' && _c <= 'Z') || (_c >= '0' && _c <= '9'))
		return (1);
	return (0);
}