/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umgajera <umgajera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 13:16:32 by umgajera          #+#    #+#             */
/*   Updated: 2026/10/28 08:16:13 by umgajera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;

	d = (char *)dest;
	s = (char *)src;
	if (d < s)
		ft_memcpy (dest, src, n);
	else if (d > s)
	{
		while (n > 0)
		{
			(d[n - 1] = s[n - 1]);
			n--;
		}
	}
	return (dest);
}
