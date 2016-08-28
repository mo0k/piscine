/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoucade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/05 04:47:38 by jmoucade          #+#    #+#             */
/*   Updated: 2016/08/05 04:47:44 by jmoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	print_chiffre(char number_1, char number_2, char number_3)
{
	ft_putchar(number_1);
	ft_putchar(number_2);
	ft_putchar(number_3);
}

void	print_separator(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = 0;
	b = 0;
	c = 0;
	while (a <= 9)
	{
		b = a + 1;
		while (b <= 9)
		{
			c = b + 1;
			while (c <= 9)
			{
				print_chiffre(a + 48, b + 48, c + 48);
				if (!(a == 7 && b == 8 && c == 9))
					print_separator();
				c++;
			}
			b++;
		}
		a++;
	}
}
