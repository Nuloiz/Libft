/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschutz <nschutz@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 12:50:50 by nschutz           #+#    #+#             */
/*   Updated: 2023/05/19 12:50:50 by nschutz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int		s;

	s = 0;
	if (dstsize == 0)
	{
		return (ft_strlen(src));
	}
	while (s < ft_strlen(src) && (dstsize) > 1)
	{
		dst[s] = src[s];
		s++;
		dstsize--;
	}
	dst[s] = '\0';
	return (ft_strlen(src));
}
