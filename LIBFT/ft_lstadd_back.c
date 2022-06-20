/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaazzy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 12:15:37 by mbaazzy           #+#    #+#             */
/*   Updated: 2021/11/14 11:24:35 by mbaazzy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*ptr;

	if (*alst != NULL && new != NULL)
	{
		ptr = *alst;
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = new;
		new->next = NULL;
	}
	else
	{
		if (new)
		{
			*alst = new;
			new->next = NULL;
		}
		else
			*alst = NULL;
	}
}
