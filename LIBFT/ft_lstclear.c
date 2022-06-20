/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaazzy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 14:21:49 by mbaazzy           #+#    #+#             */
/*   Updated: 2021/11/14 14:56:45 by mbaazzy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;
	t_list	*ptr1;

	if (!*lst || !del)
		return ;
	ptr = *lst;
	while (ptr != NULL)
	{
		ptr1 = ptr;
		del(ptr->content);
		free(ptr);
		ptr = ptr1->next;
	}
	*lst = NULL;
}
