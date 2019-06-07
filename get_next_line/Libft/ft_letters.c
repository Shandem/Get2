/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_letters.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshguti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/12 10:59:26 by joshguti          #+#    #+#             */
/*   Updated: 2019/03/12 12:37:06 by joshguti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_letters(char const *s, char c, int letter)
{
	int		d;
	int		b;
	char	*ptr;

	b = letter;
	d = 0;
	while (s[b] != c && s[b] != '\0')
	{
		d++;
		b++;
	}
	ptr = (char *)ft_memalloc(sizeof(char) * (d + 1));
	if (!ptr)
		return (NULL);
	ptr = ft_fill(s, ptr, c, letter);
	return (ptr);
}
