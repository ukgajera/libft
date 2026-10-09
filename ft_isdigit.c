/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umgajera <umgajera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 12:51:15 by umgajera          #+#    #+#             */
/*   Updated: 2026/10/09 13:17:31 by umgajera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_isdigit(int arg)
{
	if (!(arg >= '0' && arg <= '9'))
	{
		return (0);
	}
	return (1);
}

// int	main(void)
// {
// 	printf("%d ", ft_isdigit('a'));
// }