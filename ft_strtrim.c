/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umgajera <umgajera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 21:44:43 by umgajera          #+#    #+#             */
/*   Updated: 2026/10/21 15:08:22 by umgajera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		len;
	char	*result;
	int		og_len;

	start = 0;
	len = ft_strlen(s1);
	end = len - 1;
	if (!len)
		return (ft_strdup(""));
	while (ft_strchr(set, s1[start]))
		start++;
	while (ft_strchr(set, s1[end]))
		end--;
	og_len = end - start + 1;
	if (og_len <= 0)
		return (ft_strdup(""));
	result = (char *)ft_calloc (og_len + 1, sizeof(char));
	if (!result)
		return (NULL);
	return (ft_memcpy (result, &s1[start], og_len));
}
