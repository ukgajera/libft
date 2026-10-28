/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umgajera <umgajera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 15:45:49 by umgajera          #+#    #+#             */
/*   Updated: 2026/10/28 08:43:56 by umgajera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		size;
	size_t		actual_size;
	char		*sub;

	if (!s)
		return (NULL);
	size = ft_strlen(s);
	if (start >= size)
		return (ft_strdup(""));
	if (len > size - start)
		actual_size = size - start + 1;
	else
		actual_size = len + 1;
	sub = malloc(actual_size);
	if (sub == NULL)
		return (NULL);
	ft_strlcpy(sub, s + start, actual_size);
	return (sub);
}
