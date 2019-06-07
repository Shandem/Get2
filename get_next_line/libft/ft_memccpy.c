/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshguti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 16:42:06 by joshguti          #+#    #+#             */
/*   Updated: 2019/03/12 14:31:40 by joshguti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			x;
	unsigned char	*dst_c;
	unsigned char	*src_c;
	unsigned char	d;
	unsigned char	*ptr;

	d = (unsigned char)c;
	dst_c = (unsigned char *)dst;
	src_c = (unsigned char *)src;
	x = 0;
	while (x < n)
	{
		dst_c[x] = src_c[x];
		if (src_c[x] == d)
		{
			ptr = &dst_c[x + 1];
			return (ptr);
		}
		x++;
	}
	return (NULL);
}
