/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshguti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/12 10:58:43 by joshguti          #+#    #+#             */
/*   Updated: 2019/03/12 12:35:33 by joshguti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	int		letter;
	int		word;
	char	**ptr;

	if ((!c) || (!s))
		return (NULL);
	word = 0;
	letter = -1;
	ptr = ft_words(s, c);
	if (!ptr)
		return (NULL);
	while (s[++letter] != '\0')
	{
		if (s[letter] != c)
		{
			ptr[word] = ft_letters(s, c, letter);
			while (s[letter] != c && s[letter + 1] != '\0')
				letter++;
			word++;
		}
	}
	return (ptr);
}
