/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmarti <andmarti@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 14:21:00 by andmarti          #+#    #+#             */
/*   Updated: 2021/09/21 17:33:30 by andmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*tem;
	size_t			i;

	i = 0;
	tem = s;
	if (n > 0)
	{
		while (i < n)
		{
			tem[i] = '\0';
			i = i + 1;
		}
	}
}
