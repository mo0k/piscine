/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoucade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 11:52:25 by jmoucade          #+#    #+#             */
/*   Updated: 2016/08/17 14:15:47 by jmoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		count_1;
	int		count_2;

	count_1 = 1;
	count_2 = 1;
	if (nb == 0 || nb == 1)
		return (1);
	if (nb >= 0 && nb <= 12)
	{
		while (count_2 <= nb)
		{
			count_1 *= count_2;
			count_2++;
		}
		return (count_1);
	}
	else
		return (0);
}
