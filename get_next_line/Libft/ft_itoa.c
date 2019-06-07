/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshguti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/08 11:16:33 by joshguti          #+#    #+#             */
/*   Updated: 2019/03/20 00:27:19 by joshguti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_itoa(int n)
{
	char	*out;
	int		ncpy;
	int		w;
	int		sign;

	ncpy = n;
	w = 1;
	while ((ncpy /= 10))
		w++;
	sign = n < 0 ? 1 : 0;
	out = ft_strnew(w + sign);
	if (out == NULL)
		return (NULL);
	if (sign)
		out[0] = '-';
	while (w--)
	{
		out[sign + w] = '0' + (sign ? -(n % 10) : (n % 10));
		n /= 10;
	}
	return (out);
}
