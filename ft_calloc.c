/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umgajera <umgajera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 10:25:00 by umgajera          #+#    #+#             */
/*   Updated: 2026/10/20 12:10:13 by umgajera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*temp;
	size_t	i;

	i = 0;
	temp = (char *)malloc(nmemb * size);
	if (!temp)
		return (NULL);
	ft_bzero (temp, nmemb * size);
	return ((void *)temp);
}
