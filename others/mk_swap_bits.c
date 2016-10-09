unsigned char		mk_swap_bits(unsigned char octet)
{
	unsigned char	bit;

	bit = octet;
	octet = octet & 0x0F;
	octet = octet << 4;
	bit = bit & 0xF0;
	bit = bit >> 4;
	octet = octet | bit;
	return (octet);
}