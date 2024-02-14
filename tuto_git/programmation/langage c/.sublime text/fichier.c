/*#include <stdio.h>
#include <stdlib.h>
int main()
{	
	FILE *fic = fopen("fichier.txt","r");
	int let = 0 ; 
	if (fic == NULL)
		exit (1) ;
	while(1)
	{	
		let = fgetc(fic) ;	//feof(fichier) : tester la fin d'un fichier
		if (feof(fic))		//fget(ficchier) :recuperer un caractere d'un fichier
			break ;
		printf("%c",let) ;
		
	}
	

	fclose(fic) ;
	return 0 ;
}
#include <stdio.h>
#include <stdlib.h>
int main()
{	
	FILE *fic = fopen("fichier.txt","r");
	int let = 0 ; 
	if (fic == NULL)
		exit (1) ;
	while((let = fgetc(fic)) != EOF)
	{
	printf("%c",let) ;	
	}
	

	fclose(fic) ;
	return 0 ;
}*/
#include <stdio.h>
#include <stdlib.h>
int main()
{	
	FILE *fic = fopen("fichier.txt","rb");
	signed char texte [100] ; 
	if (fic == NULL)
		exit (1) ;
	while(fgets(texte, 100, fic) != NULL) 	// fgets (chanie,taille chaine,fichier):lit une ligne seulement	
	 printf("%s\n\t",texte) ;
	fclose(fic) ;
	return 0 ;
}