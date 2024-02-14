#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int gagner(int lettreTrouvee[])
{
	int i = 0 ;
	int joueurGagne = 1 ;
	for (i = 0 ;i < 6 ; i++ )
		{
			if(lettreTrouvee[i] == 0 )
			joueurGagne = 0 ;
		}
	return joueurGagne ;
}
int rechercherLettre(char lettre , char motSecret[] ,int lettreTrouvee[])
{
	int i = 0 ,bonneLettre = 0 ;
	for(i = 0 ; motSecret[i]!= '\0';i++)
	{
		if (lettre == motSecret[i])
		{
			bonneLettre = 1 ;
			lettreTrouvee[i] = 1;
		}
	}
	return bonneLettre ;

}
char lireCaractere()
{
	char caractere = 0 ;
	caractere = getchar();
	caractere = toupper(caractere);
	while(getchar() != '\n');
	return caractere ;
}
int main()
{
	char lettre = 0 ;
	char motSecret [] = "MARRON" ;
	int lettreTrouvee [] = {0} ;
	int i =  0 ,coupsRestants = 10 ;
	printf("bienvenue dans le pendu ! \n\n");
	while (coupsRestants > 0 && !gagner(lettreTrouvee))
	{
		printf("\nil vous reste %d coups a jouer ",coupsRestants);
		printf("deviner les lettres du mot secret \n : ");
		
		printf("\nproposer une lettre :");
		lettre = lireCaractere();
		for(i = 0 ; i < 6 ; i++)
		{
			if (lettreTrouvee[i])
				printf("%c",motSecret[i]);
			else
				printf("*");
		}
		if (!rechercherLettre(lettre, motSecret, lettreTrouvee))
		{
			coupsRestants-- ;
		}
		if (gagner(lettreTrouvee))
			printf("\nvous avez gagner \nle mot secret est bien %s ",motSecret);
		else
			printf("\nvous avez perdu \nle mot secret est  %s",motSecret);

	}



	
	return 0 ;
}