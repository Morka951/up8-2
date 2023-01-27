#include <stdio.h>

int	main(void)
{
	float	tmpC;

	printf("Entrez une température en Celsius :\n>>> ");
	scanf("%e",&tmpC);
	printf("%s%f%s\n","Cela correspond à ",tmpC / 0.55556 + 32," degrés Fahreneit.");
	return(0);
}
