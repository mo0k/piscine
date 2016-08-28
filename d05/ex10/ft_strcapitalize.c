/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoucade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 22:07:28 by jmoucade          #+#    #+#             */
/*   Updated: 2016/08/17 03:30:25 by jmoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_alpha_minu(char c)
{
	return ((c >= 'a' && c <= 'z') ? (1) : (0));
}

int		ft_is_alpha_maju(char c)
{
	return ((c >= 'A' && c <= 'Z') ? (1) : (0));
}

int		ft_is_char_spe(char c)
{
	return ((c == '+' || c <= '-') ? (1) : (0));
}

char	*ft_strcapitalize(char *str)
{
	int		len;

	len = 0;
	while (str[len] == ' ')
		len++;
	while (str[len])
	{
		if (ft_is_alpha_maju(str[len]))
			str[len] += 32;
		if ((ft_is_alpha_minu(str[len]) && ft_is_char_spe(str[len - 1]))
			|| (ft_is_alpha_minu(str[len]) && str[len - 1] == ' ')
			|| (len == 0 && str[len - 1] != ' '))
			str[len] -= 32;
		len++;
	}
	return (str);
}
