/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaazzy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 11:36:35 by mbaazzy           #+#    #+#             */
/*   Updated: 2021/11/10 14:50:44 by mbaazzy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

static	int	ft_check(char const *set, char c)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	end;
	size_t	j;

	if (!s1)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		if (ft_check(set, s1[i]) == 1)
			i++;
		else
			break ;
	}
	j = ft_strlen(s1) - 1;
	while (j > 0)
	{
		if (ft_check(set, s1[j]) == 1)
			j--;
		else
			break ;
	}
	end = j + 1;
	return (ft_substr(s1, i, end - i));
}
