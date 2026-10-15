/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umgajera <umgajera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 12:14:46 by umgajera          #+#    #+#             */
/*   Updated: 2026/10/15 11:04:23 by umgajera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	if ((n > 0) && (dest == NULL && src == NULL))
		return (dest);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

int main(void)
{
	char d[] =  "Ramazana";
	char s[] = 	"Ramayana";

	ft_memcpy(d , s, 6);
	printf("%s\n", d);
	memcpy(d , s, 6);
	printf("%s\n", d);
}