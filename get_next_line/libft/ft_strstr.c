/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshguti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 12:15:02 by joshguti          #+#    #+#             */
/*   Updated: 2019/02/15 12:19:47 by joshguti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int c;
	int x;
	int r;

	c = 0;
	x = 0;
	if (little[0] == '\0')
		return ((char*)big);
	while (big[c] != '\0')
	{
		r = c;
		while (little[x] == big[r])
		{
			if (little[x + 1] == '\0')
				return ((char*)&big[c]);
			x++;
			r++;
		}
		c++;
		x = 0;
	}
	return (0);
}
