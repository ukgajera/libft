/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umgajera <umgajera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 19:17:31 by umgajera          #+#    #+#             */
/*   Updated: 2026/10/21 10:35:21 by umgajera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	char	*temp;
	int		i;

	i = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	if (!s1 || !s2)
		return (NULL);
	temp = malloc (sizeof(char) * (len + 1));
	if (!temp)
		return (NULL);
	while (*s1)
	{
		temp[i] = *s1;
		i++;
		s1++;
	}
	while (*s2)
	{
		temp[i] = *s2;
		i++;
		s2++;
	}
	temp[i] = '\0';
	return (temp);
}
