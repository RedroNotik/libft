/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghanh <ghanh@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 18:43:11 by ghanh             #+#    #+#             */
/*   Updated: 2021/10/12 16:52:59 by ghanh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*tmp;
	size_t	i;

	if (s)
	{
		i = 0;
		tmp = NULL;
		if (start >= ft_strlen(s))
		{
			tmp = malloc(1);
			tmp[0] = '\0';
			return (tmp);
		}
		tmp = malloc(len + 1);
		if (!tmp)
			return (NULL);
		while (i < len)
			tmp[i++] = s[start++];
		tmp[i] = '\0';
		return (tmp);
	}
	return (NULL);
}
