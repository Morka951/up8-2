#include <stdio.h>

int	main(void)
{
	float	tmpF;

	printf("Entrez une température en Fahreneit :\n>>> ");
	scanf("%e",&tmpF);
	printf("%s%f%s\n","Cela correspond à ",0.55556 * (tmpF - 32)," degrés Celsius");
	return(0);
}
