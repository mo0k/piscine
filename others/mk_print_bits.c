void	mk_putchar(char c);

void   mk_print_bits(unsigned char octet)
{
		int i;

		i = 0x80;
		while (i > 0)
		{
			if (octet & i)
				mk_putchar('1');
			else
				mk_putchar('0');
			i /= 2;
		}
}



