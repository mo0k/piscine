void	ft_putchar(char c);

void	ft_putnbr_hexa(unsigned int nbr)
{
	if (nbr > 16)
	{
		ft_putnbr_hexa(nbr / 16);
		ft_putnbr_hexa(nbr % 16);
	}
	else
	{
		if (nbr >= 10)
			ft_putchar(nbr + 48 + 39);
		else
			ft_putchar(nbr + 48);
	}
}

int		ft_str_is_printable(char c)
{
	if (c < 32 || c > 126)
		return (0);
	return (1);
}

void ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!ft_str_is_printable(str[i]))
		{
			ft_putchar('\\');
			if (str[i] <= 16)
				ft_putchar('0');
			ft_putnbr_hexa(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}