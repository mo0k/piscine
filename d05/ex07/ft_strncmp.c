/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoucade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 20:05:02 by jmoucade          #+#    #+#             */
/*   Updated: 2016/08/15 20:05:12 by jmoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				size_s1;
	int				size_s2;

	i = 0;
	size_s1 = 0;
	size_s2 = 0;
	n--;
	while (s1[i] || s2[i] || s1[i] == s2[i] || i < n)
	{
		size_s1 += s1[i];
		size_s2 += s2[i];
		if (size_s1 < size_s2)
			return (size_s1 - size_s2);
		if (size_s1 > size_s2)
			return (size_s1 - size_s2);
		if ((!s1[i] && !s2[i]) || i >= n)
			return (size_s1 - size_s2);
		i++;
	}
	return (0);
}
/*
**
**	New version
**
**	int	ct;
**
**	ct = 0;
**	while ((s1[ct] || s2[ct] || i < n) && (s1[ct] == s2[ct]))
**	{
**		if (s1[ct] < s2[ct])
**			return (s1[ct] - s2[ct]);
**		if (s1[ct] > s2[ct])
**			return (s1[ct] - s2[ct]);
**		ct++;
**	}
**	return (s1[ct] - s2[ct]);
*/