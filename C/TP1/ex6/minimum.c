#include <stdio.h>
#include <stdlib.h>

void	minimum_two(void)
{
	int	a;
	int	b;

	printf("Entrez une première valeur :\n>>> ");
	scanf("%d",&a);
	printf("Entrez une deuxième valeur ;\n>>> ");
	scanf("%d",&b);
	if (a < b)
		printf("%s%d\n","La plus petite valeur est ",a);
	else if (b < a)
		printf("%s%d\n","La plus petite valeur est ",b);
	else
		printf("Vos deux nombres sont égaux !");
	/*Un algorithme de ce type peut fonctionner avec n'importe quel nombre de valeurs tant que ce nombre est prédéfini. Il suffit de les comparer une à une de la façon utilisée ici.*/
}

void	minimum_any(void)
{
	int	n;
	int	i;
	int	*tab;
	int	min;
	int	len;

	printf("Combien de valeurs voulez-vous comparer ?\n>>> ");
	scanf("%d",&n);
	len = n;
	tab = (int *)malloc(n * sizeof(int));
	i = 0;
	while (n != 0)
	{
		printf("%s%d%s","Entrez la valeur numéro",i+1,"\n>>> ");
		scanf("%d",&tab[i]);
		i++;
		n--;
	}
	i = 0;
	min = 0;
	while (i <= len)
	{
		if (tab[i] < min)
			min = tab[i];
		i++;
	}
	printf("%s%d\n","La plus petite valeur est ",min);
}

int	main(void)
{
	int	choice;

	printf("Warning : Pour éviter de rendre 5 fichiers différents pour chaque cas demandé, j'ai compilé tous les \"trouveurs de minimums\" en deux fonctions : l'une compare deux valeurs, et l'autre compare un nombre de votre choix.\n\n");
	printf("Choisissez le nombre de valeurs à comparer :\nDeux valeurs (2)\nUn plus grand nombre de valeurs de votre choix (3)\n>>> ");
	scanf("%d",&choice);
	if (choice == 2)
		minimum_two();
	else if (choice == 3)
		minimum_any();
}
