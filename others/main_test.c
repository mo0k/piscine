//void				mk_putchar(char c);
void				mk_putstr(char *str);
void				mk_putnbr(int nb);
void				mk_print_bits(unsigned char octet);
unsigned char		mk_swap_bits(unsigned char octet);

int			main(void)
{
	int		i;

	i = 0;
	while (i <= 255)
	{
		mk_putnbr(i);
		mk_putstr(":\t");
		mk_print_bits(i);
		mk_putstr("\n\t");
		mk_print_bits(mk_swap_bits(i));
		mk_putstr("\n\n");
		i++;
	}
	return (0);
}
