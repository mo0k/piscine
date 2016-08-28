/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoucade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 14:13:13 by jmoucade          #+#    #+#             */
/*   Updated: 2016/08/17 15:25:51 by jmoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int count;
	int result;

	count = 1;
	result = 1;
	if (!power)
		return (1);
	if (power < 0)
		return (0);
	while (count <= power)
	{
		result *= nb;
		count++;
	}
	return (result);
}
