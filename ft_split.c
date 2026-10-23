/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umgajera <umgajera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 15:11:40 by umgajera          #+#    #+#             */
/*   Updated: 2026/10/23 13:15:39 by umgajera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	cal_words(const char *str, char c);
char	**ft_split(char const *s, char c);

size_t	cal_words(const char *str, char c)
{
	size_t	count_word;
	int		delimiter;

	count_word = 0;
	delimiter = 0;
	if (!*str)
		return (0);
	while (*str)
	{
		if (*str == c)
			delimiter = 0;
		else if (!delimiter)
		{
			count_word++;
			delimiter = 1;
		}
		str++;
	}
	return (count_word);
}

void	*free_mem(char **arr, size_t i)
{
	while (i > 0)
		free (arr[--i]);
	free(arr);
	return (NULL);
}

int	set_string(char **arr, const char *s, char c)
{
	int	i;
	int	j;
	int	start;
	int	len;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			len = i - start;
			arr[j] = ft_substr(s, start, len);
			if (!arr[j])
			{
				free_mem (arr, j);
				return (0);
			}
			j++;
		}
	}
	arr[j] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		wordcount;

	wordcount = cal_words(s, c);
	result = (char **)malloc ((wordcount + 1) * sizeof (char *));
	if (!result || !s)
		return (NULL);
	if (!set_string(result, s, c))
		return (NULL);
	return (result);
}

int	main(void)
{
	char	**tab = ft_split("hello+ brother + hi+++  how+++are+you", '+');

	if (!tab)
		return (0);
	while (*tab)
	{
		printf ("%s\n", *tab);
		tab++;
	}
}