/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoucade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 06:05:06 by jmoucade          #+#    #+#             */
/*   Updated: 2016/08/20 06:05:10 by jmoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			*ft_range(int min, int max)
{
	int		*ptr;
	int		count;

	count = 0;
	if (min >= max)
		return (0);
	ptr = (int*)malloc(sizeof(*ptr) * (max - min));
	while (min < max)
		ptr[count++] = min++;
	return (ptr);
}
