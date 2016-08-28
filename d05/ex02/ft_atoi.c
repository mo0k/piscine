/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoucade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 13:07:25 by jmoucade          #+#    #+#             */
/*   Updated: 2016/08/17 03:05:31 by jmoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long		ft_calcul(char *str, int sign)
{
	long	value;
	int		count;

	value = 0;
	count = 0;
	while ((*(str + count) >= '0' && *(str + count) <= '9'))
		value = value * 10 + (*(str + count++) - 48);
	return (sign * value);
}

int			ft_is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int			ft_is_charc_special(char c)
{
	int		count;
	char	tab_char_special[5];

	count = -1;
	while (++count < 5)
		tab_char_special[count] = count + 9;
	count = 0;
	while (tab_char_special[count])
	{
		if (c == tab_char_special[count])
			return (1);
		count++;
	}
	if (c == '+' || c == '-' || c == ' ')
		return (2);
	else
		return (0);
}

int			ft_atoi(char *str)
{
	long	result;
	int		n;
	int		sign;

	result = 0;
	n = -1;
	sign = 1;
	while (ft_is_charc_special(*(str + (++n))) || ft_is_digit(*(str + n)))
	{
		if (*(str + n) == '+' || *(str + n) == '-')
		{
			if (*(str + n) == '-')
				sign = -1;
			if (ft_is_charc_special(*(str + n - 1)) == 2 ||
					ft_is_charc_special(*(str + n + 1)) == 2)
				return (0);
		}
		if (ft_is_digit(*(str + n)))
		{
			result = ft_calcul(str + n, sign);
			return (result);
		}
	}
	return (0);
}
