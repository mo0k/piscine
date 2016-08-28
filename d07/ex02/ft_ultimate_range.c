/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoucade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 07:47:55 by jmoucade          #+#    #+#             */
/*   Updated: 2016/08/20 07:47:57 by jmoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		*tab;
	int		count;

	count = 0;
	if (min >= max)
		return (0);
	tab = (int*)malloc(sizeof(int) * (max - min));
	if (tab == 0)
		return (0);
	while (min < max)
		tab[count++] = min++;
	*range = tab;
	return (count);
}
