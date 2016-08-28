/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoucade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 00:04:23 by jmoucade          #+#    #+#             */
/*   Updated: 2016/08/16 00:29:12 by jmoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_alpha_min(char c)
{
	return ((c >= 'a' && c <= 'z') ? (1) : (0));
}

int		ft_is_alpha_maj(char c)
{
	return ((c >= 'A' && c <= 'Z') ? (1) : (0));
}

int		ft_str_is_alpha(char *str)
{
	int		len;

	len = -1;
	while (*str != ' ' && *(str + (++len)))
	{
		if (!ft_is_alpha_min(str[len]) && !ft_is_alpha_maj(str[len]))
			return (0);
	}
	return (1);
}
