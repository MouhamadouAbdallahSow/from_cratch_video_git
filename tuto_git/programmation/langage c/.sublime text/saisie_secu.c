/*#include <stdio.h>
#include <stdlib.h>
void main()
{
	char nom [10] ;
	printf("votre nom :\n") ;
	fgets(nom , 10 , stdin) ;
	printf("ah votre nom est donc : %s !\n",nom);
}*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int lire (char *chaine ,int taille_chaine);
int main(int argc, char const *argv[])
{
	char nom [10] ;
	printf("votre nom : \n");
	lire (nom , 10 ); // recuperer ce qui est saisie 
	printf("votre nom est : %s \n",nom );
	return 0;
}
int lire(char *chaine ,int taille_chaine)
{
	char *position = NULL ;
	if (fgets(chaine,taille_chaine,stdin)!= NULL)//si la lecture de ce qui est saisie a reussi 
	{
		*position =strchr(chaine , '\n');// on cherche le cractere '/n' dans chaine avec strchr
		if (position!= NULL) // si on a trouver le caractere '\n'
		{
			*position = '\0';
			return 1 ;
		} 
		else 
		return 0 ;
	}
}