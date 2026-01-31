void	ft_putchar(char c);
static void	print_char(int col, int row, int x, int y)
{
	if (col == 1 && row == 1)
		ft_putchar('/');
	else if (col == x && row == 1)
		ft_putchar('\\');
	else if (col == 1 && row == y)
		ft_putchar('\\');
	else if (col == x && row == y)
		ft_putchar('/');
	else if (row == 1 || row == y)
		ft_putchar('*');
	else if (col == 1 || col == x)
		ft_putchar('*');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	row;
	int	col;

	if (x <= 0 || y <= 0)
		return ;
	row = 1;
	while (row <= y)
	{
		col = 1;
		while (col <= x)
		{
			print_char(col, row, x, y);
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
