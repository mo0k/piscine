/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoucade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/05 04:22:21 by jmoucade          #+#    #+#             */
/*   Updated: 2016/08/05 04:22:25 by jmoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char min;
	char max;

	min = 48;
	max = 58;
	while (min <= max)
	{
		if (min != max)
			ft_putchar(min);
		min++;
	}
}
