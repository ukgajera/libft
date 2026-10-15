/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umgajera <umgajera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 15:59:19 by umgajera          #+#    #+#             */
/*   Updated: 2026/10/14 12:28:57 by umgajera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	len;
	int		src_len;

	len = 0;
	src_len = ft_strlen(src);
	if (size <= 0)
		return (src_len);
	while ((src[len] != '\0') && (len < size - 1))
	{
		dest[len] = src[len];
		len++;
	}
	dest[len] = '\0';
	return (src_len);
}

// int	main(void)
// {
// 	char dest[] = "hello my frd";
// 	char src[] = "I am 42";

// 	ft_strlcpy(dest, src, 4);
// 	printf("%s\n", dest);
// }