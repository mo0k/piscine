/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoucade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 07:01:02 by jmoucade          #+#    #+#             */
/*   Updated: 2016/08/15 16:16:31 by jmoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int len;
	int count;
	int i;

	count = -1;
	len = -1;
	while (*(to_find + (++len)))
	{
	}
	len--;
	count = -1;
	while (str[++count])
	{
		i = 0;
		while (str[count + i] == to_find[i] && str[count + i])
		{
			if (i == len)
				return (&str[count + i - len]);
			i++;
		}
	}
	return (0);
}
