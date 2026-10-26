/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umgajera <umgajera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 10:25:00 by umgajera          #+#    #+#             */
/*   Updated: 2026/10/21 12:41:18 by umgajera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*temp;

	temp = (char *)malloc(nmemb * size);
	if (!temp)
		return (NULL);
	ft_bzero (temp, nmemb * size);
	return ((void *)temp);
}
