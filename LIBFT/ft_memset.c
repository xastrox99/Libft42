/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaazzy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:23:28 by mbaazzy           #+#    #+#             */
/*   Updated: 2021/11/03 11:06:27 by mbaazzy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *s, int c, int n)
{
	int				i;
	unsigned char	*ptr;

	i = 0;
	ptr = s;
	while (i < n)
		ptr[i++] = c;
	return (ptr);
}
