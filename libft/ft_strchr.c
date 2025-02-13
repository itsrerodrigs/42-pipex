/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renrodri <renrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 13:08:18 by renrodri          #+#    #+#             */
/*   Updated: 2024/10/31 12:01:34 by renrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	unsigned char	uns_c;

	uns_c = (unsigned char)c;
	while (*str)
	{
		if (*str == uns_c)
		{
			return ((char *)str);
		}
		str++;
	}
	if (uns_c == '\0')
	{
		return ((char *)str);
	}
	return (NULL);
}
