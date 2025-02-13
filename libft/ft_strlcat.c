/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renrodri <renrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 13:31:01 by renrodri          #+#    #+#             */
/*   Updated: 2024/11/05 02:18:26 by renrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	result;

	i = 0;
	while (dst[i] != '\0')
		i++;
	if (i >= size)
		return (ft_strlen(src) + size);
	while (i < (size - 1) && *src)
	{
		dst[i] = *src;
		i++;
		src++;
	}
	dst[i] = '\0';
	result = ft_strlen(dst) + ft_strlen(src);
	return (result);
}
