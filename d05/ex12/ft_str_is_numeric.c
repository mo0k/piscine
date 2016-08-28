/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoucade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 00:40:06 by jmoucade          #+#    #+#             */
/*   Updated: 2016/08/16 00:42:05 by jmoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_numeric(char c)
{
	return ((c >= '0' && c <= '9') ? (1) : (0));
}

int		ft_str_is_numeric(char *str)
{
	int		len;

	len = -1;
	while (*str != ' ' && *(str + (++len)))
	{
		if (!ft_is_numeric(str[len]))
			return (0);
	}
	return (1);
}
