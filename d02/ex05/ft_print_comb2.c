/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoucade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/05 06:41:31 by jmoucade          #+#    #+#             */
/*   Updated: 2016/08/05 06:42:06 by jmoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_put_nbr(int nbr)
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

void	print_separator_extern(void)
{
	ft_putchar(',');
	ft_putchar('\n');
}

void	print_separator(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb2(void)
{
	int number_1;
	int number_2;

	number_1 = -1;
	number_2 = 0;
	while (number_1 != 98)
	{
		number_1++;
		while (number_2 != 99)
		{
			number_2++;
			if (number_1 < 10)
				ft_putchar('0');
			ft_put_nbr(number_1);
			ft_putchar(' ');
			if (number_2 < 10)
				ft_putchar('0');
			ft_put_nbr(number_2);
			if (number_1 != 98)
				print_separator();
		}
		number_2 = number_1 + 1;
	}
}
