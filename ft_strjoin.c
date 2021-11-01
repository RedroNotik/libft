/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghanh <ghanh@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 18:43:30 by ghanh             #+#    #+#             */
/*   Updated: 2021/10/09 18:13:52 by ghanh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*concl;
	size_t	i;
	size_t	j;

	if (s1 && s2)
	{
		concl = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
		if (!concl)
			return (NULL);
		i = 0;
		while (i < ft_strlen(s1))
		{
			concl[i] = s1[i];
			i++;
		}
		j = 0;
		while (j < ft_strlen(s2))
			concl[i++] = s2[j++];
		concl[i] = '\0';
		return (concl);
	}
	return (NULL);
}
