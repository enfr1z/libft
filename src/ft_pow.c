/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsanta <vsanta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 14:27:17 by vsanta            #+#    #+#             */
/*   Updated: 2019/05/09 14:39:28 by vsanta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_pow(int nbr, int pow)
{
	int i;
	int res;

	i = 0;
	res = 1;
	while (i < pow)
	{
		res = res * nbr;
		i++;
	}
	return (res);
}
