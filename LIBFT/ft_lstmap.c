/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaazzy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 14:41:34 by mbaazzy           #+#    #+#             */
/*   Updated: 2021/11/14 11:12:12 by mbaazzy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ptr;
	t_list	*ptr1;

	if (lst != NULL && f != NULL)
	{
		ptr = ft_lstnew(f(lst->content));
		ptr1 = ptr;
		while (lst->next)
		{
			lst = lst->next;
			ptr1->next = ft_lstnew(f(lst->content));
			if (!(ptr1->next))
			{
				ft_lstclear(&ptr, del);
				free(ptr);
				return (NULL);
			}
			ptr1 = ptr1->next;
		}
		return (ptr);
	}
	return (NULL);
}
