/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmarti <andmarti@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 14:21:21 by andmarti          #+#    #+#             */
/*   Updated: 2021/09/21 18:28:47 by andmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char	*tem;
	const char		*aux;
	size_t			i;

	i = 0;
	tem = dst;
	aux = src;
	if (tem == NULL && aux == NULL)
		return (dst);
	while (i < n)
	{
		tem[i] = aux [i];
		i = i + 1;
	}
	return (dst);
}
