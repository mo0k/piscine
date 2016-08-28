/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoucade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 23:54:50 by jmoucade          #+#    #+#             */
/*   Updated: 2016/08/18 00:46:11 by jmoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		my_is_prime2(int nb)
{
	int nb_tmp;

	nb_tmp = 2;
	if (nb <= 0 || nb == 1)
		return (0);
	else if (nb == 2)
		return (1);
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
	return (1);
}

int		ft_find_next_prime(int nb)
{
	if (nb <= 0 || nb == 1)
		return (2);
	if (my_is_prime2(nb))
		return (nb);
	else
		return (ft_find_next_prime(nb + 1));
}
