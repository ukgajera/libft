/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umgajera <umgajera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 17:55:43 by umgajera          #+#    #+#             */
/*   Updated: 2026/10/18 14:06:28 by umgajera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if ((!big && len == 0) || little[0] == '\0')
		return ((char *)big);
	while (((big)[i] != 0) && i < len)
	{
		j = 0;
		if (big[i] == little[j])
		{
			while ((little[i] != 0 && big[i + j] == little[j]) && i + j < len)
				j++;
			if (little[j] == '\0')
				return (&((char *)big)[i]);
		}
		i++;
	}
	return (NULL);
}
