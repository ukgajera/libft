/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umgajera <umgajera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 15:45:49 by umgajera          #+#    #+#             */
/*   Updated: 2026/10/20 19:15:32 by umgajera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		size;
	char	*sub;
	int		i;

	size = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start > size)
		return ("");
	sub = malloc(len + 1);
	if (!sub)
		return (NULL);
	i = -1;
	while (++i < len)
	{
		sub[i] = s[start];
		start++;
	}
	sub[i] = '\0';
	return (sub);
}
