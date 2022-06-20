/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaazzy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:46:09 by mbaazzy           #+#    #+#             */
/*   Updated: 2021/11/08 12:13:10 by mbaazzy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*ptr1;
	char	*ptr2;

	i = -1;
	if (!dest && !src)
		return (NULL);
	ptr1 = (char *)dest;
	ptr2 = (char *)src;
	while (++i < n)
		ptr1[i] = ptr2[i];
	return (dest);
}
