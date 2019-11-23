int main(int ac, char **av)
{
	int i;

	i = 0;
	while (av[1][i])
		ft_putchar(av[1][i++]);
	return (0);
}