/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umgajera <umgajera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 12:17:07 by umgajera          #+#    #+#             */
/*   Updated: 2026/10/28 08:23:00 by umgajera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*tmpstr;
	int		size;
	int		i;

	size = ft_strlen(s) + 1;
	tmpstr = (char *)malloc(size);
	if (!tmpstr)
		return (0);
	i = 0;
	while (i < size)
	{
		tmpstr[i] = s[i];
		i++;
	}
	tmpstr[i] = '\0';
	return (tmpstr);
}
