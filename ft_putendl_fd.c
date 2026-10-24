/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umgajera <umgajera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 17:21:40 by umgajera          #+#    #+#             */
/*   Updated: 2026/10/24 17:28:01 by umgajera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s == NULL)
		return ;
	write(fd, s, ft_strlen(s));
	ft_putchar_fd('\n', fd);
}
