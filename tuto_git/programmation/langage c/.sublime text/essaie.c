/*#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
int T ,H ,M ,S ,R ;
printf("DONNER LE TEMPS EN SECONDES :/n ");
scanf("%d ",&T);
H = T/3600;
R = T%3600 ;
M = R/60 ;
S = R%60 ;
printf("%d heures %d minutes %d secondes \n",H,M,S );

	return 0;
}
//conversion cffa -->euro
#include <stdio.h>
double conversion(double euro )
{
	return 650*euro ;
}
 int main(int argc, char const *argv[])
{
	int euro = 1 , cffa = 0 ;
	printf("conversion cffa en euro \n");
	printf("donner la valeur en ccf :\n");
	scanf("%f",&cffa);
	printf ("%.1f F CFFA vaut %.1f euro \n",cffa,conversion(cffa));
	return 0 ;
}
	
#include <stdio.h>	
double conversion(double euros)
{
double francs = 0;
francs = 6.55957 * euros;
return francs;
}
int main(int argc, char *argv[])
{
printf("10 euros = %fF\n", conversion(10));
printf("50 euros = %fF\n", conversion(50));
Apprenez à programmer en C ! 93/410
www.openclassrooms.com
printf("100 euros = %fF\n", conversion(100));
printf("200 euros = %fF\n", conversion(200));
return 0;
}
//suite de fibonacci 
#include <stdio.h>
 
int main()
{
  int n, nbr1 = 0, nbr2 = 1, suivant, i;
 
  printf("Entrez le nombre de termes\n");
  scanf("%d", &n);
 
  printf("Les %d premiers termes de la série de Fibonacci sont:\n", n);
 
  for (i = 0; i < n; i++)
  {
    if (i <= 1)
      suivant = i;
    else
    {
      suivant = nbr1 + nbr2;
      nbr1 = nbr2;
      nbr2 = suivant;
    }
    printf("%d\n", suivant);
  }
 
  return 0;
}
#include <stdio.h>
int int main(int argc, char const *argv[])
{
  float note ;
  for (int i = 0 ;i < 20 ; i++ )
  {
    do {
      printf("entrer la note : \n ") ;
      scanf("%f",&note); 
    }while (note < 0 || note >20) ;
  }
  return 0;
}*/
/*#include <stdio.h>
#define TVA 50
int main(void)
{
    int prixTTC = 0;
    int prixHT = 15;
    prixTTC = prixHT + (prixHT*TVA/100);
    printf("Le prix TTC est : %d \n");
    return 0;
}
#include <stdio.h>

#define afficher printf
int main(void)
{
    afficher ("bonjour !\n");

            return 0 ;
}

#include <stdio.h>
#define coucou printf ("bonjour!!. c'est MOUHAMADOU ABDOULAYE SOW eleve ingenieur a l'ecole polytechnique de thies .\n")
int main(int argc, char const *argv[])
{
    coucou ;
    return 0;
}
#include <stdio.h>
#define LONGUEUR 34
#define LARGEUR 54
#define AIRE (LONGUEUR * LARGEUR)
int main(int argc, char const *argv[])
{
        printf ("%d\n",AIRE);
    return 0;
}*/
// constantes du langages c :
/*
_FILE_ (nom du fichier)
_LINE_ ( ligne du fichier)
_DATE_ (date de compilation)
_TIME_ (heure de compilation)

#include <stdio.h>
int main(void)
{

    printf("nom du fichier : %s \n" ,_FILE_);
    return 0 ;
}
#include <stdio.h>
#include <string.h>
typedef struct player 
{
    signed char username [256];
    int hp;
    int mp;
}sow;

int main(int argc, char const *argv[])
{
    sow p1 = {"ma mere", 10 ,20};
    printf("NOM DE JOUEUR : %s\n ",p1.username);
    printf("pv :%d | pm : %d\n",p1.hp,p1.mp);
    strcpy(p1.username,"naoki");
    p1.hp-=4;
    printf("NOM DE JOUEUR : %s\n ",p1.username);
    printf("pv :%d | pm : %d\n",p1.hp,p1.mp);
    return 0;
}*/
/*
    (*monpointeur).un_champ ;
    monpointeur->un_champ;


#include <stdio.h>
#include <string.h>
typedef struct player 
{
    signed char username [256];
    int hp;
    int mp;
}sow;
void create_player (sow *p)
{

    strcpy(p->username,"peace be upon him");
    p->hp=100;
    p->mp=80;
}-
int main(int argc, char const *argv[])
{
    sow p1 = {"", 0 ,0};
    create_player(&p1);
    printf("NOM DE JOUEUR : %s\n ",p1.username);
    printf("pv :%d | pm : %d\n",p1.hp,p1.mp);
    
    return 0;
}

#include <stdio.h>
int main()
{
    int n, i;
    unsigned long long fact = 1;
    printf("Entrez un entier positif: ");
    scanf("%d", &n);
    if (n < 0)
        printf("Erreur! Le nombre doit etre positif.");
    else
    {
        for (i = 1; i <= n; ++i)
        {
            fact *= i;
        }
        printf(" %d ! = %llu", n, fact);
    }
    return 0;
}

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int pg ,i ,n ;
    for (i = 1 ;i<=20 ;i++)
    {
        printf("donner un entier :\n");
        scanf("%d",&n);
    if(n > n)
        {
            pg = n ;
             printf("le max des 20 nombres saisies est : %d \n",pg);
        }
    }    
    printf("le max des 20 nombres saisies est : %d \n",pg);
            

   
    return 0;
}
//exos : minimum  et maximum 
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x,y,z,resultat,choix;
    printf("donner trois entier :\n");
    scanf("%d %d %d",&x,&y,&z);
    printf ("que voulez vous :\n");
    printf("1.le minimum des tois nombres \n ");
    printf("2.le maxmum des trois nombres \n");
    printf("votre choix 1 ou 2 \n");
    scanf("%d",&choix);
    if (choix ==1)
    {
    if (x<y)
        resultat = x;
    else 
        resultat = y ;
        if (resultat>z)
            resultat = z ;
        printf("le minimum est : %d",resultat);
    }
    else 
    {
    if (x>y)
        resultat = x ;
    else 
        resultat = y;
        if (z > resultat)
            resultat = z ;
    printf("le maximum est : %d",resultat);
    }    
    return 0;
}

//exos : miinimum et maximum avec condition ternaire 
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x,y,z,choix,res;
    printf("donner trois entier :\n");
    scanf("%d %d %d",&x,&y,&z);
    printf ("que voulez vous :\n");
    printf("1.le minimum des tois nombres \n ");
    printf("2.le maxmum des trois nombres \n");
    printf("votre choix 1 ou 2 : \n");
    scanf("%d",&choix);
    if (choix ==1)
    {
        res =(x<y)? x : y ;
        res =(res<z) ? res : z ;
        printf ("le minimum est : %d \n",res);
    }
    else if(choix == 2) 
    {
        res = (x>y) ? x : y ;
        res = (z>res) ? z :res ;
        printf("le max est : %d \n",res);
    }
    else 
     printf("mauvais choix");
    return 0;
}

//exos : valeur mediane 
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x,y,z,res;
    printf("donner trois entiers : \n") ;
    scanf("%d %d %d",&x,&y,&z);
    if ((x < y & x > z) ||(x >y & x < z))
        res = x ;
    else if ((x > y & y > z)||(x <y & y < z))
        res = y ;
    else  
    res = z ;
    printf("la valeur mediane est : %d \n",res);
    return 0;
}

//exos :conversion decimal en binaire
#include <stdio.h>  
#include <stdlib.h> 

int main(){
  
  int tab[10], nbr, i;  
  
  printf("Entrez le nombre a convertir: \n");  
  scanf("%d",&nbr);  
  
  for(i=0; nbr > 0; i++)  
  {  
    tab[i] = nbr%2;  
    nbr = nbr/2;  
  } 
  
  printf("\nLe nombre binaire est :  ");
  
  for(i=i-1; i >= 0; i--)  
  {  
    printf("%d",tab[i]);  
  }  
  
  return 0;
}

#include<stdio.h>
int  main()
{
    int jj, mm, aaaa;
    printf("Entrer le jour correspondant\n>_");
    scanf("%d",&jj);
    printf("Entrer le mois correspondant\n>_");
    scanf("%d",&mm);
    printf("Entrer l'annee correspondante\n>_");
    scanf("%d",&aaaa);
    if( jj  < 1 ||  jj  > 30) {
        printf("Jour invalide donc la date est invalide.\n");
    }
    else if(mm < 1 || mm > 12) {
        printf(" Moi invalide donc la date est invalide.\n");
    }
    else if(aaaa < 1950 || aaaa > 2022) {
        printf("Annee  invalide donc la date est invalide.\n");
    }
    else {
        printf("La date correspondante est %d-%d-%d\n",jj,mm,aaaa);
        }


        return 0;
    }*/
#include <stdio.h>
int addition (int a ,int b) ;
int soustraction (int c ,int d ) ;
int multiplication (int e ,int f) ;
int carre (int n ) ;
int main ()
{
    int nb1 , nb2 ;
    printf ("donner deux nombres :\n");
    scanf ("%d %d ",&nb1,&nb2) ;
    printf ("% + %d = %d \n",nb1 ,nb2 ,addition (nb1,nb2));
    printf("%d - %d = %d \n",nb1, nb2 ,soustraction(nb1,nb2));
    printf("%d * %d = %d \n",nb1,nb2 ,multiplication(nb1,nb2));
    printf("le carre de %d est : %d \n",nb1,carre(nb1));
    printf("le carre de %d est : %d \n",nb2,carre(nb2));

    return 0 ;
}
int addition (int a ,int b )
{
    return a + b ;
}
int soustraction (int c , int d)
{
    return c - d ;
} 
int multiplication(int e , int f )
{
    return e*f;
}
int carre(int n)
{
    return n*n ;
}
