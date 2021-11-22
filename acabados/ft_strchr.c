/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmarti <andmarti@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 14:22:52 by andmarti          #+#    #+#             */
/*   Updated: 2021/09/15 14:22:54 by andmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (*s == (unsigned char)c)
		return ((char *)s);
	while (*s++)
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
	}
	return (NULL);
}
