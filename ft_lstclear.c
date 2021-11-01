/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghanh <ghanh@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 18:44:11 by ghanh             #+#    #+#             */
/*   Updated: 2021/10/05 18:44:11 by ghanh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*help;
	t_list	*p;

	p = *lst;
	while (p)
	{
		del(p->content);
		help = p->next;
		free(p);
		p = help;
	}
	*lst = NULL;
}
