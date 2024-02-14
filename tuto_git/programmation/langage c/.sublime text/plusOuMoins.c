#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int nb_mystere = 0 ,nb_entree = 0 ,choix = 1;
	const int MAX = 100 , MIN = 1 ;
	do
	{
		srand (time(NULL)) ;
		nb_mystere = (rand () % (MAX - MIN + 1 ) ) + MIN ;
	do 
	{
		
		printf("deviner le nombre :\n") ;
		scanf("%d",&nb_entree) ;
		if (nb_entree > nb_mystere)
			printf("c'est  moins que %d \n",nb_entree) ;
		else if (nb_entree < nb_mystere) 
			printf("c' est plus que %d \n",nb_entree);
		else printf("bravo le nombre entree est bien %d \n",nb_entree);
	} while (nb_mystere != nb_entree) ;
		printf("voulez vous recommencer ?\nsi oui taper 1 \nsinon taper 2 \n ");
		scanf("%d",&choix) ;

	} while (choix == 1) ;
	return 0 ;
}