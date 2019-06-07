/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joshguti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 15:04:37 by joshguti          #+#    #+#             */
/*   Updated: 2019/06/07 15:11:18 by joshguti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft/libft.h"

int		fd_copy(char **line, char *content, char c)
{
	int i;

	i = 0;
	while (content[i] && content[i] != c)
		i++;
	if (!(*line = ft_strndup(content, i)))
		return (0);
	return (i);
}

int		read_thru(const int fd, char **content)
{
	int		result;
	char	buff[BUFF_SIZE + 1];
	char	*tmp;

	while ((result = read(fd, buff, BUFF_SIZE)))
	{
		buff[result] = '\0';
		tmp = *content;
		if (!(*content = ft_strjoin(*content, buff)))
			return (-1);
		free(tmp);
		if (ft_strchr(buff, ENDL))
			break ;
	}
	return (result);
}

t_list	*set_struct(int fd, t_list **hist)
{
	t_list *tmp;

	if (!hist)
		return (NULL);
	tmp = *hist;
	while (tmp)
	{
		if ((int)tmp->content_size == fd)
			return (tmp);
		tmp = tmp->next;
	}
	tmp = ft_lstnew("", fd);
	ft_lstadd(hist, tmp);
	return (tmp);
}

int		get_next_line(const int fd, char **line)
{
	char			*tmp;
	char			buff[BUFF_SIZE + 1];
	static t_list	*hist;
	t_list			*start;
	size_t			result;

	if (fd < 0 || !line || (read(fd, buff, 0)) < 0 ||
			(!(start = set_struct(fd, &hist))))
		return (-1);
	tmp = start->content;
	result = read_thru(fd, &tmp);
	start->content = tmp;
	if (!result && !*tmp)
		return (0);
	result = fd_copy(line, start->content, ENDL);
	tmp = start->content;
	if (tmp[result] != '\0')
	{
		start->content = ft_strdup(&((start->content)[result + 1]));
		free(tmp);
	}
	else
		tmp[0] = '\0';
	return (1);
}
