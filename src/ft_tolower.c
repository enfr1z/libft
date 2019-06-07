/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdiedra <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 19:27:42 by pdiedra           #+#    #+#             */
/*   Updated: 2019/04/04 19:28:34 by pdiedra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_tolower(int ch)
{
	if (ch >= 'A' && ch <= 'Z')
		ch += 32;
	return (ch);
}