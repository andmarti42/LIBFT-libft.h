/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmarti <andmarti@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 14:20:41 by andmarti          #+#    #+#             */
/*   Updated: 2021/09/21 17:12:29 by andmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	tem;
	size_t			i;

	i = 0;
	tem = b;
	while (len > 0)
	{
		tem[i] = (unsigned char)c;
		len = len - 1;
		i = i + 1;
	}
	return (b);
}
