#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1,&c,1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	game(void)
{
	int	n;
	int	guess;
	int	win;

	win = 0;
	n = rand() % 1000 + 1;
	guess = 1001;

	while (win == 0)
	{
		ft_putstr(">>> ");
		scanf("%d",&guess);
		ft_putstr("\n");
		if (guess > n)
			ft_putstr("Plus petit\n");
		if (guess < n)
			ft_putstr("Plus grand\n");
		if (guess == n)
		{
			ft_putstr("Gagné\n");
			win = 1;
		}
	}
}

int	main(void)
{
	int	try;

	srand(getpid());
	try = 1;
	while (try == 1)
	{
		game();
		ft_putstr("Try again ? (1/0)\n>>> ");
        	scanf("%d",&try);
	}
}
