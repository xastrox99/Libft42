/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaazzy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:10:07 by mbaazzy           #+#    #+#             */
/*   Updated: 2021/11/14 14:55:36 by mbaazzy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

static	int	ft_min(int a, int b)
{
	if (a > b)
		return (b);
	else
		return (a);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	size;
	size_t	length;
	char	*ptr;

	if (!s)
		return (NULL);
	length = ft_strlen(s);
	if (start >= length)
		size = 0;
	else
		size = ft_min(length - start, len);
	ptr = malloc(size + 1 * sizeof(char));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s + start, size + 1);
	return (ptr);
}
