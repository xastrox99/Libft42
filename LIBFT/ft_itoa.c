/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaazzy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 12:47:00 by mbaazzy           #+#    #+#             */
/*   Updated: 2021/11/10 14:46:16 by mbaazzy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

static int	ft_count(int n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static void	ft_fill(char *p, int n, int len)
{
	p[len] = 0;
	while (len > 0)
	{
		len--;
		p[len] = n % 10 + 48;
		n = n / 10;
	}
}

char	*ft_itoa(int n)
{
	int		len;
	char	*ptr;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	else if (n < 0)
	{
		n = n * -1;
		len = ft_count(n) + 1;
		ptr = malloc (len + 1 * sizeof(char));
		if (!ptr)
			return (NULL);
		ft_fill(ptr, n, len);
		ptr[0] = '-';
		return (ptr);
	}
	else
	{
		len = ft_count(n);
		ptr = malloc(len + 1 * sizeof(char));
		ft_fill(ptr, n, len);
		return (ptr);
	}
}
