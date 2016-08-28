/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoucade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/05 00:56:17 by jmoucade          #+#    #+#             */
/*   Updated: 2016/08/05 01:17:00 by jmoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_alphabet(void)
{
	int index_char;

	index_char = 97;
	while (index_char <= 123)
	{
		if (index_char != 123)
			ft_putchar((char)index_char);
		index_char++;
	}
}
