/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmarti <andmarti@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 14:23:15 by andmarti          #+#    #+#             */
/*   Updated: 2021/09/15 14:23:17 by andmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*temp;
	int		len;

	len = ft_strlen(s);
	if (*(s + len) == (char) c)
		return ((char *)s + len);
	temp = NULL;
	while (s)
	{
		if (*s == (unsigned char)c)
			temp = (char *)s;
		if (*s == '\0')
			break ;
		s++;
	}
	return (temp);
}

