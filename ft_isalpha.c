/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umgajera <umgajera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 11:49:26 by umgajera          #+#    #+#             */
/*   Updated: 2026/10/08 12:48:40 by umgajera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_isalpha(char str)
{
	if (!((str >= 'A' && str <= 'Z') || (str >= 'a' && str <= 'z')))
		return (0);
	return (1);
}

// int	main(void)
// {
// 	printf("%d ", ft_isalpha('1'));

// }
