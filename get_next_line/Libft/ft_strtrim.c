/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshguti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/06 11:04:59 by joshguti          #+#    #+#             */
/*   Updated: 2019/03/12 14:11:29 by joshguti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		e;
	int		b;
	int		x;
	char	*ptr;

	x = 0;
	b = 0;
	if (!s)
		return (NULL);
	while (s[b] == ' ' || s[b] == '\t' || s[b] == '\n')
		b++;
	e = b;
	while (s[e + 1] != '\0')
		e++;
	while (s[e] == ' ' || s[e] == '\n' || s[e] == '\t')
		e--;
	ptr = (char*)malloc((sizeof(char) * (e - b)) + 2);
	if (ptr == NULL)
		return (NULL);
	while (b <= e)
		ptr[x++] = s[b++];
	ptr[x] = '\0';
	return (ptr);
}
