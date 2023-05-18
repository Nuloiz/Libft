/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschutz <nschutz@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 09:39:43 by nschutz           #+#    #+#             */
/*   Updated: 2023/05/17 11:19:54 by nschutz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_strstr(const char *haystack, const char *needle)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (needle[0] == '\0')
		return (0);
	while ((haystack[i] != needle[0]) && (haystack[i] != '\0'))
	{
		i++;
	}
	while ((needle[j] != '\0') && (haystack[i] != '\0'))
	{
		if (haystack[i] != needle[j])
			return (0);
		i++;
		j++;
	}
	return (haystack[i] - ft_strlen(needle));
}
