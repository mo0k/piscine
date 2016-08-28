/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoucade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 16:22:22 by jmoucade          #+#    #+#             */
/*   Updated: 2016/08/25 12:28:41 by jmoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_par.h"

int					ft_strlen(char *str)
{
	int				ct;

	ct = 0;
	while (str[ct])
		ct++;
	return (ct);
}

char				*my_strdup(char *str)
{
	char			*ptr;
	int				ct;

	ct = 0;
	if (!(ptr = (char*)malloc(sizeof(char) * ft_strlen(str) + 1)))
		return (0);
	while (str[ct])
	{
		ptr[ct] = str[ct];
		ct++;
	}
	ptr[ct] = '0';
	return (ptr);
}

struct	s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par		*stock_par;
	int				i;

	i = 0;
	if (!(stock_par = (t_stock_par*)malloc(sizeof(t_stock_par) * (ac + 1))))
		return (0);
	while (i < ac)
	{
		stock_par[i].size_param = ft_strlen(av[i]);
		stock_par[i].str = av[i];
		stock_par[i].copy = my_strdup(stock_par[i].str);
		stock_par[i].tab = ft_split_whitespaces(stock_par[i].str);
		i++;
	}
	stock_par[i].str = 0;
	return (stock_par);
}
