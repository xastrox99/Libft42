/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaazzy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 10:25:46 by mbaazzy           #+#    #+#             */
/*   Updated: 2021/11/04 17:18:21 by mbaazzy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

size_t	ft_strlcat(char *dest,
		const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	x;

	i = 0;
	x = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[x] != '\0')
		x++;
	if (dstsize == 0)
		return (x);
	while (src[j] && j + i < dstsize - 1)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	if (dstsize < i)
		return (x + dstsize);
	return (x + i);
}
