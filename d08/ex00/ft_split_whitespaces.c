/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoucade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 22:52:04 by jmoucade          #+#    #+#             */
/*   Updated: 2016/08/25 12:23:35 by jmoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			is_separator(char c)
{
	return (c == ' ' || c == '\t' || c == '\n') ? (1) : (0);
}

int			find_nbr_word(char *str)
{
	int		ct;
	int		nbr;

	nbr = 0;
	ct = 0;
	while (str[ct])
	{
		if (ct > 0 && is_separator(str[ct]) && !is_separator(str[ct - 1]))
			nbr++;
		ct++;
	}
	if (str[ct] == '\0' && !is_separator(str[ct - 1]))
		nbr++;
	return (nbr);
}

char		*ft_strdup(char *src, int len)
{
	char	*ptr;
	int		count;

	count = 0;
	ptr = (char*)malloc(sizeof(*ptr) * len + 1);
	if (ptr == NULL)
		return (0);
	while (count < len)
	{
		ptr[count] = src[count];
		count++;
	}
	ptr[count] = '\0';
	return (ptr);
}

char		**ft_split_whitespaces(char *str)
{
	char	**tab;
	char	*ptr;
	int		state;
	int		i;
	int		word;

	state = 1;
	i = -1;
	word = 0;
	tab = (char**)malloc(sizeof(*tab) * find_nbr_word(str) + 1);
	*(tab + find_nbr_word(str)) = NULL;
	while (str[++i])
	{
		if (state == 0 && is_separator(str[i]))
			state = 1;
		if (state == 1 && !is_separator(str[i]))
		{
			ptr = &str[i];
			while (!is_separator(*ptr++) && word < find_nbr_word(str))
				if (is_separator(*ptr) || *ptr == '\0')
					tab[word++] = ft_strdup(&str[i], ptr - &str[i]);
			state = 0;
		}
	}
	return (tab);
}
