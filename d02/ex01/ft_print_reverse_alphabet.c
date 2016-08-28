/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoucade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/05 03:58:57 by jmoucade          #+#    #+#             */
/*   Updated: 2016/08/05 03:59:15 by jmoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	char min;
	char max;

	min = 'a';
	max = 'z';
	while (min <= max)
	{
		if (min <= max)
			ft_putchar(max);
		max--;
	}
}
