/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaazzy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 09:44:39 by mbaazzy           #+#    #+#             */
/*   Updated: 2021/11/14 14:53:59 by mbaazzy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*ptr_src;
	char	*ptr_dst;

	if (!dest && !src)
		return (NULL);
	ptr_src = (char *)src;
	ptr_dst = dest;
	if (ptr_dst < ptr_src)
	{
		while (n--)
			*ptr_dst++ = *ptr_src++;
	}
	else
	{
		ptr_src = (char *)src + n - 1;
		ptr_dst = dest + n - 1;
		while (n--)
			*ptr_dst-- = *ptr_src--;
	}
	return (dest);
}
