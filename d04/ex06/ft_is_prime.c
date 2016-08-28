/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoucade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 23:53:10 by jmoucade          #+#    #+#             */
/*   Updated: 2016/08/18 01:12:39 by jmoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int nb_tmp;

	nb_tmp = 2;
	if (nb <= 0 || nb == 1)
		return (0);
	else if (nb == 2)
		return (1);
	else
	{
		if (nb % 2 == 0 || nb <= 0 || nb == 1)
			return (0);
		else
		{
			nb_tmp++;
			while (nb_tmp < nb)
			{
				if (!(nb % nb_tmp))
					return (0);
				nb_tmp += 2;
			}
		}
	}
	return (1);
}
