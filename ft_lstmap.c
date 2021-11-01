/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghanh <ghanh@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 18:44:00 by ghanh             #+#    #+#             */
/*   Updated: 2021/10/05 18:44:00 by ghanh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*new;
	t_list	*new1;

	new = NULL;
	if (!lst)
		return (0);
	tmp = lst;
	while (tmp)
	{
		if ((*f)(tmp->content))
		{
			new1 = ft_lstnew((*f)(tmp->content));
			if (!new1)
				return (0);
			ft_lstadd_back(&new, new1);
		}
		else
		{
			ft_lstclear(&new, del);
			return (0);
		}
		tmp = tmp->next;
	}
	return (new);
}
