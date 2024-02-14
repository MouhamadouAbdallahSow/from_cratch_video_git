/*#include <stdio.h>
int main(int argc, char const *argv[])
{
	int tab[4],i=0 ;
	tab[0]=5;
	tab[1]=10;
	tab[2]=15;
	tab[3]=20;
	for (i = 0; i<4 ;i++)
	{

	printf(" %d\n",tab[i]);
	}
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
void decoupeMinutes(int* pointeurHeures, int* pointeurMinutes);

int main(int argc, char *argv[])
{
    int heures =0 , minutes = 90 ;
    // On envoie l'adresse de heures et minutes
    decoupeMinutes(&heures, &minutes);

    // Cette fois, les valeurs ont ete modifiees !
    printf("%d heures et %d minutes", heures, minutes);

    return 0;
}

void decoupeMinutes(int* pointeurHeures, int* pointeurMinutes)
{
    *pointeurHeures = *pointeurMinutes / 60;
    *pointeurMinutes = *pointeurMinutes % 60; 
}*/
    /* Attention a ne pas oublier de mettre une etoile devant le nom
    des pointeurs ! Comme ca, vous pouvez modifier la valeur des variables,
    et non leur adresse ! Vous ne voudriez pas diviser des adresses,
    n'est-ce pas ? ;o) */
/*#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	char prenom [50];
	printf("donner nous votre nom please !!\n");
	scanf("%s", prenom);
	printf("bienvenue monsieur %s ,mettez vous a l' aise \n",prenom);
	return 0;
} 

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	char entreprises [50];
	printf("Donner le nom de votre entreprise : \n");
	scanf("%s",entreprises);
	printf("on va vous creer un site internet du nom de l'entreprise %s \n",entreprises);
	return 0;
}

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char chaine1[] = "Texte de test", chaine2[] = "test";
    int i = strcmp(chaine2,chaine1);
    if (i = 0)
    {
        printf("Les chaines sont identiques : %d\n",i);
    }
    else
    {
        printf("Les chaines sont differentes : %d\n",i);
    }

    return 0;
}
#include <stdio.h>
void sow(int *ptNombre);
int main(int argc, char *argv[])
{
int nombre = 10;
int *ptNombre = &nombre ;
sow(ptNombre); // On envoie l'adresse de nombre à la
//fonction
printf("%d", nombre); // On affiche la variable nombre. La
//fonction a directement modifié la valeur de la variable car elle
//connaissait son adresse
return 0;
}
void sow(int *ptNombre) 

{
*ptNombre *= 100; // On multiplie par 3 la valeur de
//nombre
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char const *argv[])
{
	const int MAX = 200 , MIN = 4 ;
	int nombre_aleatoire ,nombre_utilisateur ; 
	srand(time (NULL)) ;
	nombre_aleatoire = (rand() % (MAX - MIN + 1 )) + MIN ;
	
	do 
	{
		printf ("deviner le nombre aleatoire choisi : \n");
		scanf ("%d",&nombre_utilisateur);
		if (nombre_aleatoire>nombre_utilisateur)
				printf("c'est plus !!!\n") ;
		else if (nombre_aleatoire<nombre_utilisateur)
				printf("c'est moins !!!\n");
		else 
		printf("bravo %d est bien le nombre aleatoire choisi . \n",nombre_aleatoire);
	}while (nombre_aleatoire != nombre_utilisateur);
		
	return 0;
}
#include <stdio.h>

#include <stdlib.h>
int main(int argc, char const *argv[])
{
	char chaine [6] ;
	chaine [0] = 's'; 
	chaine [1] = 'a'; 
	chaine [2] = 'l'; 
	chaine [3] = 'u'; 
	chaine [4] = 't'; 
	chaine [5] = '\0'; 
	printf("%s",chaine);//affichage de la chaine avec %s
	return 0;
}



#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	char chaine[]= "Salut";
	printf("%s",chaine);
	return 0;
}
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
 {
 	char ch []= "salut";
 	int L_ch = 0 ;
 	L_ch = strlen(ch);
 	printf ("la chaine %s fait %d de caracteres de long ",ch,L_ch);
 	
	char chaine [] = "texte" , copie [10] = {0} ;
	strcpy(copie , chaine);
	printf("la chaine a copier contient : %s ",chaine);
	printf("la copie ou on doit copier chaine vaut : %s\n",copie);			

					return 0;
 } */
 /**
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
 {
 	char chaine1 [200] = "bonsoir " ,chaine2 [100] = "mouhamadou" , chaine3[50] = "abdoulaye", chaine4[5] = "sow" ;
 	
 	strcat(chaine3,chaine4);
 	strcat(chaine2,chaine3);
 	strcat(chaine1,chaine2);//on concatene ce qui est de chaine2 dans chaine1;
 	printf("dans chaine1  : %s\n", chaine1);
 	printf("la chaine2  : %s\n", chaine2);
 	printf("la chaine3 : %s\n",chaine3);
 	printf("la chaine4 : %s",chaine4);
 	return 0;
 } 
 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    char chaine1[] = "Texte de test", chaine2[] = "Texte de test";

    if (strcmp(chaine1, chaine2) == 0) // Si chaînes identiques
    {
        printf("Les chaines sont identiques\n");
    }
    else
    {
        printf("Les chaines sont differentes\n");
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	char chaine [] = "texte de test ", *suiteChaine = NULL ;
	suiteChaine = strchr (chaine,'d');
	if (suiteChaine != NULL ){
		printf("a partir du caratere d on a : %s \n ",suiteChaine);
	}
	return 0;
}//la fonction string string pour recherche une chaine dans une autre 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char const *argv {
char *suiteChaine;
// On cherche la première occurrence de "test" dans "Texte de
//test" :
suiteChaine = strstr("Texte de test", "test");
if (suiteChaine != NULL)
{
printf("Premiere occurrence  : %s\n", suiteChaine);
}
return 0;
}
//la fonction sprintf poour edrire dans une chaine 
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	char chaine[50] ;
	int age =14 ;
	sprintf(chaine,"tu as %d ans \n",age);
	printf("%s",chaine);
	return 0;
}

#include <stdio.h>
#define COUCOU() printf("coucou");
int main(int argc, char const *argv[])
{
	COUCOU ()
	return 0;
}
#include<stdio.h> 
char pair(unsigned char N);
int main(void)
{
	int x ;
	printf("entrer un entier : \n");
	scanf("%d",&x);
}
//fonction referendum 
#include <stdio.h>
void ouinon (int nb_votant)
{
	int nb_oui = 0 , nb_non = 0 ,null = 0 ;
	char rep = 'c';
	for (int i = 1 ; i <= nb_votant ; i++)
	{	while(rep != 'o' && rep !='n')
		{
		printf("rentrer votre vote oui (o) ou non (n) :\n");
		scanf(" %c",&rep);
		if (rep == 'o')
			nb_oui++ ;
		else if (rep == 'n') 
			nb_non++;
		else
			null ++ ;
		}
		rep = 'c';
	}
	printf("oui = %d et non = %d \n",nb_oui,nb_non);
	
}
int main()
{
	int N ;
		printf("entrer le nombre de votant : \n");
	scanf("%d",&N);
	ouinon(N);
		return 0 ;
}
//fonction referendum 
#include <stdio.h>
int nbVotant(int votants)
{
	int  oui = 0, non = 0;
    char vote;
 	for (int i = 0; i < votants; i++)
     {
        printf("Entrez le vote du votant %d (O pour Oui, N pour Non): ", i + 1);
        scanf(" %c", &vote);

        if (vote == 'O')
         {
            oui++;
         }
        else if (vote == 'N') 
        {
            non++;
        }
    }

    printf("Nombre de Oui: %d\n", oui);
    printf("Nombre de Non: %d\n", non);
}
int main()
{
	int N ;
	printf("entrer le nombre de votant :\n");
	scanf("%d",&N) ;
	nbVotant(N) ;
    return 0;
}
*/







