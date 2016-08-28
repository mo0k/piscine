/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoucade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 08:09:17 by jmoucade          #+#    #+#             */
/*   Updated: 2016/08/20 08:09:19 by jmoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			sizelocation(int argc, char **argv)
{
	int		size_loc;
	int		i;
	int		j;

	size_loc = 0;
	i = 1;
	j = 0;
	while (argc > 1 && i < argc)
	{
		j = 0;
		while (argv[i][j++])
			size_loc++;
		size_loc++;
		i++;
	}
	return (size_loc);
}

char		*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		count_ptr;
	char	*ptr;

	j = 0;
	i = 1;
	count_ptr = 0;
	ptr = (char *)malloc(sizeof(char) * sizelocation(argc, argv));
	if (!ptr)
		return (0);
	while (argc > 1 && i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			ptr[count_ptr] = argv[i][j];
			count_ptr++;
			j++;
		}
		ptr[count_ptr++] = '\n';
		i++;
	}
	ptr[sizelocation(argc, argv) - 1] = '\0';
	return (ptr);
}
