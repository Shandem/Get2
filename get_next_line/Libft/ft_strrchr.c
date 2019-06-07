/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshguti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/12 10:43:05 by joshguti          #+#    #+#             */
/*   Updated: 2019/03/12 10:55:08 by joshguti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	x;
	const char		*ptr;
	int				count;

	x = c;
	count = -1;
	ptr = NULL;
	while (s[++count] != '\0')
	{
		if (s[count] == x)
			ptr = &s[count];
	}
	if (s[count] == x)
		ptr = &s[count];
	return ((char *)ptr);
}
