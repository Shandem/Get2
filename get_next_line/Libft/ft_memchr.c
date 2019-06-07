/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshguti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 12:02:09 by joshguti          #+#    #+#             */
/*   Updated: 2019/03/12 14:32:11 by joshguti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*out;

	out = (unsigned char*)str;
	while (n--)
		if (*out == (unsigned char)c)
			return (out);
		else
			out++;
	return (NULL);
}
