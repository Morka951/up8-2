#include <stdio.h>

int	main(void)
{
	int	jours;
	int	years;
	int	months;
	int	weeks;
	int	days;

	printf("Entrez un nombre de jours :\n>>> ");
	scanf("%d",&jours);
	years = 0;
	months = 0;
	weeks = 0;
	days = 0;
	while (jours >= 360)
	{
		years++;
		jours = jours - 360;
	}
	while (jours >= 30)
	{
		months++;
		jours = jours - 30;
	}
	while (jours >= 7)
	{
		weeks++;
		jours = jours - 7;
	}
	while (jours > 0)
	{
		days++;
		jours--;
	}
	printf("Cela correspond à ");
	if (years != 0)
		printf("%d%s",years," années ");
	if (months != 0)
	{
		if ((weeks == 0) && (days == 0))
			printf("et ");
		printf("%d%s",months," mois ");
	}
	if (weeks != 0)
        {
                if (days == 0)
                        printf("et ");
                printf("%d%s",weeks," semaines ");
        }
	if (days != 0)
		printf("%s%d%s","et ",days," jours");
	printf("\n");
}
