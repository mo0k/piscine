/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoucade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 20:29:18 by jmoucade          #+#    #+#             */
/*   Updated: 2016/08/20 20:29:20 by jmoucade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

void		ft_putstr(char *str)
{
	int		inc;

	inc = 0;
	while (str[inc])
		ft_putchar(str[inc++]);
}

char		*ft_strcpy(char *dest, char *src)
{
	int		len;

	len = -1;
	while (*(src + ++len))
		*(dest + len) = *(src + len);
	*(dest + len) = '\0';
	return (dest);
}

int			ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] < s2[i])
			return (-1);
		if (s1[i] > s2[i])
			return (1);
		i++;
	}
	return (0);
}

int			main(int argc, char **argv)
{
	int		inc;
	char	str[4096];

	inc = 1;
	while (inc < argc - 1)
	{
		if (ft_strcmp(argv[inc], argv[inc + 1]) > 0)
		{
			str = argv[inc + 1];
			argv[inc + 1] = argv[inc];
			argv[inc] = str;
			inc = 1;
		}
		else
			inc++;
	}
	inc = 1;
	while (inc < argc)
	{
		ft_putstr(argv[inc]);
		ft_putchar('\n');
		inc++;
	}
	return (0);
}
