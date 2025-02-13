/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renrodri <renrodri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 13:22:37 by renrodri          #+#    #+#             */
/*   Updated: 2025/02/13 14:34:55 by renrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;

	if (*s2 == '\0')
		return ((char *) s1);
	i = 0;
	while (i < len && s1[i] != '\0')
	{
		if (i + ft_strlen(s2) > len)
			return (NULL);
		if (s1[i] == s2[0])
		{
			if (ft_strncmp(&s1[i], s2, ft_strlen(s2)) == 0)
			return ((char *)&s1[i]);
		}
		i++;
	}
	return (NULL);
}
