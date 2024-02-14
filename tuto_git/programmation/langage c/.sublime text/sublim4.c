
/*#include <stdio.h >
#include <stdlib.h>							//bibliotheques des fonctions 
int main(int argc, char const *argv[])
{
	int tab [4]={}, i = 0 ;
	for (i = 0 ; i < 4 ; i++)
	{ 
	 	printf("%d \n", tab[i]);
	}

		              return 0;
}*/


/*
#include <stdio.h>				//pour calculer la somme des nombres qui sont dans le tab
#include <stdlib.h>
int sommetab(int tab[] ,int tailletableau);
int main(int argc, char const *argv[])
{
	int s ;
	int tableau[4] = {0};
	sommetab(tableau, 4);
	printf("%d",s);
	return 0;
}
int sommetab(int tableau[] ,int tailletableau)
{
	int s = 0;
	int i ;
for (i = 0 ; i < tailletableau ; i++);
{
	s = s + tableau [i];
	return s ;

}


}
*/

/*

#include <stdio.h>
#include <stdlib.h>
int sommeTableau(int tableau[],int tailleTab);
double moyenneTableau(int tableau, int tailleTab);
int main(int argc, char const *argv[])
{
	int tableau [5]= {0};




	return 0;
}
int sommeTableau(int tableau [], int tailleTab)
{
	int som = 0 ;
	for (int i = 0 ; i < tailleTab ; i++);
	{
		som = som + tableau[i];
		printf("%d",som);

	}
			return som ;

}
double moyenneTableau (int tableau[],int tailleTab)
{

	int som = 0  ;
	double m ;
	for (int i = 0 ; i <tailleTab; i++)
	{

		som = som + tableau[i];
	}
		m = (double)som /(double)tailleTab ;
		printf("%lf",m);

					return(double)som /(double)tailleTab ;

}

 
 /












