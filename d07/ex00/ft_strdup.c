/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoucade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 05:58:13 by jmoucade          #+#    #+#             */
/*   Updated: 2016/08/20 05:58:15 by jmoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char		*ft_strdup(char *src)
{
	char	*ptr;
	int		count;

	count = 0;
	ptr = (char*)malloc(sizeof(*ptr) * ft_strlen(src) + 1);
	while (src[count])
	{
		ptr[count] = src[count];
		count++;
	}
	ptr[count] = '\0';
	return (ptr);
}
