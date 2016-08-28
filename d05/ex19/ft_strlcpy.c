/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoucade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 02:04:19 by jmoucade          #+#    #+#             */
/*   Updated: 2016/08/17 02:51:57 by jmoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	len;

	count = 0;
	while (src[count])
	{
		if (count + 1 < size)
			dest[count] = src[count];
		else
			dest[count] = '\0';
		count++;
	}
	len = count;
	while (dest[count])
	{
		dest[count] = '\0';
		dest[size - 1] = '\0';
		count++;
	}
	return (len);
}
