/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renrodri <renrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 13:02:33 by renrodri          #+#    #+#             */
/*   Updated: 2024/11/05 02:18:46 by renrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str);
	if ((unsigned char) c == '\0')
	{
		return ((char *) &str[i]);
	}
	while (i > 0)
	{
		if (str[i - 1] == (unsigned char) c)
		{
			return ((char *) &str[i - 1]);
		}
		i--;
	}
	return (NULL);
}
