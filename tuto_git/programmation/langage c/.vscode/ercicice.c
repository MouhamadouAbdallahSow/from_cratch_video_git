/*
int longueurChaine(const char* chaine);

int main(int argc, char *argv[])
{
    char chaine[] = "Salut maman comment tu vas";
    int longueur = 0;

    longueur = longueurChaine(chaine);

    printf("La chaine :(%s) fait %d caracteres de long", chaine, longueur);

    
    return 0;
}

int longueurChaine(const char* chaine)
{
    int nombreDeCaracteres = 0;
    char caractereActuel = 0;

    do
    {
        caractereActuel = chaine[nombreDeCaracteres];
        nombreDeCaracteres++;
    }
    while(caractereActuel != '\0'); // On boucle tant qu'on n'est pas arrivé à l'\0

    nombreDeCaracteres--; // On retire 1 caractère de long pour ne pas compter le caractère \0

    return nombreDeCaracteres;
}


//exos 1: produit positif ou negatif

#include <stdio.h>
#include <stdlib.h>
int main()
{
	float nb1 , nb2 ;

	printf("entrer le premier nombre :");
	scanf("%f",&nb1);
	printf("entrer le deuxieme nombre :");
	scanf("%f",&nb2);
	if(nb1 >0 & nb2>0)
	{
		printf("le produit est positif ");
	}
	

	else 
	{
		printf("le produit est negatif");
	}
				return 0;
}
/*
//exos 2: pair & impair
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{

int n , r ;
printf("entrer un nombre entier \n ");
scanf("%d",&n);
r = n % 2 ;
if(r==0)12
{

	printf ("le nombre est pair \n");
}
else
{
	printf("le nombre est impair \n");
}
		return 0;
}

#include <stdio.h>
#include <stdlib.h>
int main()
{
	char c ;
	printf("saisir une lettre de l'alphabet \n ");
	scanf("%c",&c);
	if (c == 'a' || c = 'o' || c = 'i' || c = 'e' || c = 'u' || c = 'y' ||
		c == 'A' || c = 'O' || c = 'I' || c = 'E' || c = 'U' || c = 'Y')
	{
		printf("Le caractere %c saisi est une voyelle \n",c);
	}
	else {
		printf("le caractere %c saisi est un consonne \n",c);
	}
	
		return 0;
}*/
//exos 4:maximmum 
/*
#include <stdio.h>
main()
{
	int a, b, c, m;
	printf("Entrez le 1er nombre :");
	scanf("%d",&a);
	printf("Entrez le 2eme nombre :");
	scanf("%d",&b);
	printf("Entrez le 3eme nombre :");
	scanf("%d",&c);
	
	m = a;
	if(b > m){
		m = b;
	}
	if(c > m){
		m = c;
	}
	
	printf("\nLe max est %d\n",m);
	return 0 ;
}

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	char chaineAecrire[50] ;
	int age =  15 ;
	sprintf(chaineAecrire,"tu as %d ans \n",age);
	return 0;
}
/*
#define COUCOU () printf("coucou");
int main(int argc, char const *argv[])
{
	COUCOU ()
	return 0;
}*/
//exos 5 : EQUATION  DU SECOND DEGRE
#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{float x0, x1,x2,a, b, c ,delta ;
printf ("donner la valeur de a :\n");
scanf("%f",&a);
if (a ==0)
{
	printf("c'est pas une equation du second degre.\n ");
}
else 
{
	printf("donner la valeur de b : \n");
	scanf("%f",&b);
	printf("donner la valeur de c : \n");
	scanf("%f",&c);
	delta = b*b-4*a*c;
	if (delta <0)
	{
		printf("pas de solution pour l'equation!!!\n");
	}
	else if (delta >0)
	{
		x1 = (-b-sqrt(delta))/2*a;
		x2 = (-b+sqrt(delta))/2*a;
		printf("les solutions de l'equaition sont : x1 = %f et x2 = %f",x1,x2);
	}
	else
	{
		x0 = -b/2*a ;
		printf("on a une racine double x0 = %f",x0);
	}
	return 0 ;
}
}






