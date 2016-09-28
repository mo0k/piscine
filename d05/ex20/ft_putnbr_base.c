void		ft_putchar(char c);

int			ft_strcmp(char *s1, char *s2)
{
	int	ct;

	ct = 0;
	while ((s1[ct] || s2[ct]) && (s1[ct] == s2[ct]))
	{
		if (s1[ct] < s2[ct])
			return (s1[ct] - s2[ct]);
		if (s1[ct] > s2[ct])
			return (s1[ct] - s2[ct]);
		ct++;
	}
	return (s1[ct] - s2[ct]);
}

int			check_base(char *base, int len)
{
	if (len == 10)
		return (ft_strcmp(base, "0123456789"));
	if (len == 2)
		return (ft_strcmp(base, "01"));
	if (len == 16)
		return (ft_strcmp(base, "0123456789ABCDEF"));
	if (len == 8)
		return (ft_strcmp(base, "poneyvif"));
	return (0);
}

void		display_octal_base(int nbr)
{
	if (nbr == 0)
		ft_putchar('p');
	if (nbr == 1)
		ft_putchar('o');
	if (nbr == 2)
		ft_putchar('n');
	if (nbr == 3)
		ft_putchar('e');
	if (nbr == 4)
		ft_putchar('y');
	if (nbr == 5)
		ft_putchar('v');
	if (nbr == 6)
		ft_putchar('i');
	if (nbr == 7)
		ft_putchar('f');
}

void		ft_putnbr(int nbr, char *base, int len_base)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	if (nbr > len_base - 1)
	{
		ft_putnbr(nbr / len_base, base, len_base);
		ft_putnbr(nbr % len_base, base, len_base);
	}
	else
	{
		if (len_base == 16 && nbr >= 10)
			ft_putchar(nbr + 48 + 7);
		else if (len_base == 8)
		{
			display_octal_base(nbr);
		}
		else
			ft_putchar(nbr + 48);
	}
}

void		ft_putnbr_base(int nbr, char *base)
{
	int	len;

	len = 0;
	while (base[len])
		len++;
	if (len <= 1 || (len != 10 && len != 2 && len != 16 && len != 8))
		return ;
	else
	{
		if (check_base(base, len) != 0)
			return ;
		else
			return (ft_putnbr(nbr, base, len));
	}
}
