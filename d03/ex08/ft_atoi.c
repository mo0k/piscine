/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoucade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/09 11:44:34 by jmoucade          #+#    #+#             */
/*   Updated: 2016/08/13 10:54:15 by jmoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int		value;
	int		n;
	int		sign;

	value = 0;
	n = -1;
	sign = 1;
	while (*(str + (++n)) != '\0')
	{
		if (*(str + n) == '+' || *(str + n) == '-')
		{
			if (*(str + n) == '-')
				sign = -1;
			if ((*(str + n - 1) == '+' || *(str + n - 1) == '-')
				|| *(str + n + 1) == ' ')
				return (0);
		}
		if ((*(str + n) >= '0' && *(str + n) <= '9'))
		{
			while ((*(str + n) >= '0' && *(str + n) <= '9'))
				value = value * 10 + (*(str + n++) - 48);
			return (sign * value);
		}
	}
	return (0);
}