/*

#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
FILE *fichier = NULL;
int caractereActuel = 0;
fichier = fopen("fichier.txt", "r");
if (fichier != NULL)
{
// Boucle de lecture des caractères un à un
do
{
caractereActuel = fgetc(fichier); // On lit le caractère
printf("%c", caractereActuel); // On l'affiche
} while (caractereActuel != EOF); // On continue tant que fgetc n'a pas retourné EOF (fin de fichier)
fclose(fichier);
}
return 0;
}
#include <stdio.h>
#include <stdlib.h>
int main()
{
	rename("newname.txt","fichier.txt");
	return 0 ;
}
#include <stdio.h>
#include <stdlib.h>
int main ()
{
	printf("int : %d octets \n",sizeof(int)) ;
	printf("long : %d octets \n",sizeof(long)) ;
	printf("double: %d octets \n",sizeof(double)) ;
	printf("char : %d octets \n",sizeof(char)) ;
	printf("long int  : %d octets \n",sizeof(long int)) ;
	//<--------------------------------->
	//printf("erreur a la ligne %d du fichier %s \n",__LINE__,__FILE__) ;
	//printf("COMPILER LE %s a %s \n ",__DATE__,__TIME__) ;

}
#include <stdio.h>
typedef struct coordonnees cord ;
struct coordonnees 
{
	int x ; 
	int y ;
};

int main ()
{
	printf("coordonnees : %d octets ",sizeof(cord));
} 
#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int *mem_alloue = NULL ;
	mem_alloue = malloc(sizeof (int)) ;
	if (mem_alloue == NULL)
		exit(0); 
	printf("donner votre age \n") ;
	scanf("%d",mem_alloue) ;
	printf("vous avez %d ans \n",*mem_alloue);
	free(mem_alloue) ;
		return 0 ;
} */
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int nb_amis = 0 , i = 0 ;
	int *age_amis = NULL ;
	printf("nombre d'amis : ") ;
	scanf("%d",&nb_amis) ;
	if (nb_amis > 0 )
	{
		age_amis = malloc (sizeof(int) * nb_amis) ;
		if (age_amis == NULL)
		{
			exit (0) ;
		}
		for (i = 1 ; i <= nb_amis ; i++ )
		{
			printf("donner l'age de l'amie %d :\n",i); 
			scanf("%d",&age_amis[i]) ;
		}
		printf("vos amis ont les ages suivantes : \n") ;
		for (i = 1 ; i <=nb_amis; i++)
		{
			printf(" %d ans \n",age_amis[i]);
		}
		free (age_amis) ;
	}
		return 0 ; 
}
























