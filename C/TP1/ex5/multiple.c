#include <stdio.h>

int	main(void)
{
	int	n;

	printf("Entrez un nombre :\n>>> ");
	scanf("%d",&n);
	if ((n % 10 == 0) || (n % 10 == 5))
	{
		printf("Ce nombre est un multiple de 5.");
		return(0);
	}
	printf("Ce nombre n'est pas un multiple de 5.");
	return(0);
}
