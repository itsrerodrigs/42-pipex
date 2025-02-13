/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renrodri <renrodri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 13:40:40 by renrodri          #+#    #+#             */
/*   Updated: 2025/02/13 14:04:57 by renrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_in_set(char c, char const *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	int		i;
	int		j;

	i = 0;
	while (s1[i] && ft_in_set(s1[i], set))
		i++;
	j = ft_strlen(s1) - 1;
	while (j && ft_in_set(s1[j], set))
		j--;
	if (j < i)
	{
		trim = ft_calloc(1, 1);
		return (trim);
	}
	else
		trim = malloc(sizeof(char) * (j - i + 2));
	if (!trim)
		return (NULL);
	ft_strlcpy(trim, &s1[i], j - i + 2);
	return (trim);
}
