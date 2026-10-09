/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umgajera <umgajera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 11:49:26 by umgajera          #+#    #+#             */
/*   Updated: 2026/10/09 13:17:10 by umgajera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_isalpha(int arg)
{
	if (!((arg >= 'A' && arg <= 'Z') || (arg >= 'a' && arg <= 'z')))
	{
		return (0);
	}
	return (1);
}

// int	main(void)
// {
// 	printf("%d ", ft_isalpha('1'));
// }