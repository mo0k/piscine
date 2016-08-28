/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoucade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 17:26:53 by jmoucade          #+#    #+#             */
/*   Updated: 2016/08/17 15:30:44 by jmoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	int result;
	int count;

	count = 1;
	result = 1;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	else
	{
		if (power > 0)
			return (nb * ft_recursive_power(nb, power - 1));
		return (result);
	}
}
