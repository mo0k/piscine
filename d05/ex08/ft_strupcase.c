/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoucade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 20:52:40 by jmoucade          #+#    #+#             */
/*   Updated: 2016/08/17 03:00:33 by jmoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int		len;

	len = -1;
	while (*(str + ++len))
		if (*(str + len) >= 'a' && *(str + len) <= 'z')
			*(str + len) -= 32;
	return (str);
}