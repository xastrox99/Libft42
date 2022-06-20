/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaazzy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 12:20:39 by mbaazzy           #+#    #+#             */
/*   Updated: 2021/11/14 11:11:25 by mbaazzy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstnew(void	*content)
{
	t_list	*ptr;

	ptr = malloc(sizeof(t_list));
	if (!ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr)
		ptr->content = content;
	ptr->next = NULL;
	return (ptr);
}
