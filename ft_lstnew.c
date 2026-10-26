/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umgajera <umgajera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 20:45:30 by umgajera          #+#    #+#             */
/*   Updated: 2026/10/26 12:08:22 by umgajera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*add_new;

	add_new = (t_list *)malloc(sizeof(t_list));
	if (!add_new)
		return (NULL);
	add_new->content = content;
	add_new->next = NULL;
	return (add_new);
}
