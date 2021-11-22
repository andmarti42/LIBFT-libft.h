/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmarti <andmarti@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 14:24:23 by andmarti          #+#    #+#             */
/*   Updated: 2021/09/15 14:24:25 by andmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	if (n)
	{
		while (n--)
		{
			if (*(unsigned char *)s1 != *(unsigned char *)s2)
				return ((*(unsigned char *)s1) - (*(unsigned char *)s2));
			s1++;
			s2++;
		}
	}
	return (0);
}
