/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoucade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/09 04:28:35 by jmoucade          #+#    #+#             */
/*   Updated: 2016/08/09 08:32:23 by jmoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		i;
	int		len;
	char	c_tmp;

	i = 0;
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	len--;
	while (i < len)
	{
		c_tmp = str[len];
		str[len] = str[i];
		str[i] = c_tmp;
		i++;
		len--;
	}
	return (str);
}
