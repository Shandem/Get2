/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshguti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/12 12:38:12 by joshguti          #+#    #+#             */
/*   Updated: 2019/03/12 12:39:23 by joshguti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int		counter;
	size_t	counter_2;

	counter = 0;
	counter_2 = 0;
	while (s1[counter] != '\0')
		counter++;
	while (counter_2 < n && s2[counter_2] != '\0')
	{
		s1[counter] = s2[counter_2];
		counter++;
		counter_2++;
	}
	s1[counter] = '\0';
	return (s1);
}
