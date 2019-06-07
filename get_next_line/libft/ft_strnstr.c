/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshguti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 12:56:13 by joshguti          #+#    #+#             */
/*   Updated: 2019/03/01 16:29:33 by joshguti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		counter;
	size_t	x;
	size_t	y;

	x = 0;
	counter = 0;
	if (little[0] == '\0')
		return ((char*)big);
	while (big[counter] != '\0' && len > 0)
	{
		y = counter;
		while (big[y] == little[x] && x < len && big[y] != '\0')
		{
			x++;
			y++;
			if (little[x] == '\0')
				return ((char*)(big + counter));
		}
		len--;
		counter++;
		x = 0;
	}
	return ((void *)0);
}
