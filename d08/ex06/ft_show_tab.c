/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoucade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/25 01:04:39 by jmoucade          #+#    #+#             */
/*   Updated: 2016/08/25 12:31:16 by jmoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void		ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void		ft_putnbr(int nb)
{
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + 48);
	}
}

void		ft_print_words_tables(char **tab)
{
	int		i;

	i = 0;
	if (!tab)
		return ;
	while (tab[i])
	{
		ft_putstr(tab[i]);
		ft_putchar('\n');
		i++;
	}
}

void		ft_show_tab(struct s_stock_par *par)
{
	int		ct;

	ct = 0;
	while (par[ct].str)
	{
		ft_putstr(par[ct].str);
		ft_putchar('\n');
		ft_putnbr(par[ct].size_param);
		ft_putchar('\n');
		ft_print_words_tables(par[ct].tab);
		ct++;
	}
}
