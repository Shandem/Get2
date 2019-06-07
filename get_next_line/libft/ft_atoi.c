/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshguti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 15:14:24 by joshguti          #+#    #+#             */
/*   Updated: 2019/03/12 14:22:51 by joshguti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int		ft_atoi(const char *str)
{
	int		result;
	int		c;
	int		sign;

	result = 0;
	c = 0;
	sign = 1;
	while ((str[c] >= 9 && str[c] <= 13) || str[c] == ' ')
		c++;
	if (str[c] == '-')
	{
		sign = -1;
		c++;
	}
	else if (str[c] == '+')
		c++;
	while (str[c] && ft_isdigit(str[c]) == 1)
	{
		result = result * 10 + str[c] - '0';
		c++;
	}
	return (result * sign);
}
