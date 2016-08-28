/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoucade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/05 14:53:26 by jmoucade          #+#    #+#             */
/*   Updated: 2016/08/05 14:57:21 by jmoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putnbr(int nbr)
{
	long l_nbr;
	long d;

	l_nbr = (long)nbr;
	if (l_nbr == 0)
	{
		ft_putchar('0');
		return ;
	}
	if (l_nbr < 0)
	{
		ft_putchar('-');
		l_nbr *= -1;
	}
	d = 1;
	while (l_nbr / d != 0)
		d *= 10;
	while (d - 1)
	{
		ft_putchar((l_nbr - (l_nbr / d * d)) / (d / 10) + 48);
		d /= 10;
	}
}

void	print_separator(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_combn(int n)
{
	int number_1;
	int number_2;

	number_1 = -1;
	number_2 = 0;
	while (number_1 != 8)
	{
		number_1++;
		while (number_2 != 9)
		{
			number_2++;
			ft_putnbr(number_1);
			ft_putnbr(number_2);
			if (number_1 != 8)
				print_separator();
		}
		number_2 = number_1 + 1;
	}
}
