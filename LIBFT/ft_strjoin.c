/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaazzy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 15:47:15 by mbaazzy           #+#    #+#             */
/*   Updated: 2021/11/09 11:36:18 by mbaazzy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	i;
	size_t	total;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	j = 0;
	total = ft_strlen(s1) + ft_strlen(s2) + 1;
	ptr = malloc(total * sizeof(char) + 1);
	if (!ptr)
		return (NULL);
	while (i < ft_strlen(s1))
		ptr[i++] = (char)s1[j++];
	j = 0;
	while (i < total)
		ptr[i++] = (char)s2[j++];
	return (ptr);
}
