/*//Correction devoir partiel
//Exo1
#include <stdio.h>
int main()
{
 int n, entier, sompair=0, somimpair=0, nbpair=0, nbimpair=0;
 printf("Entre le nombre d'entiers que vous voulez saisir : ");
 scanf("%d",&n);
 for(int i = 1; i<=n; i++)
 {
 printf("entier %d : ",i);
 scanf("%d",&entier);
 if(entier%2==0)
 {
 sompair=sompair + entier;
 nbpair++;
 }
 else
 {
 somimpair=somimpair+entier;
 nbimpair++;
 }
 }
 printf("\nle nombre d\'entiers pairs est : %d",nbpair);
 printf("\nle nombre d\'entiers pairs est : %d",nbimpair);
 if (somimpair>sompair)
 printf("\n%d la somme des nombres pairs est inférieur a %d",sompair, somimpair);
 else
 printf("\n%d la somme des nombres impairs est inférieur a %d", somimpair, sompair);
 return 0;
}
//Exo2
include <stdio.h>
int main()
{
 int nb ;
int diviseur ;
int somme ;
int i ;
int a, b;
 printf("Entrer un premier nombre : ");
 scanf("%d",&a);
 do
 {
 printf("Entrer un second nombre : ");
 scanf("%d",&b);
 }
 while (a>b);
for (i = a ; i <b ; i ++) {
nb = i ;
if ((nb == 1)) {
printf ("%d est parfait\n", nb) ;
}
//diviseur = 1 ;
somme = 0 ;
for (diviseur=1; diviseur<nb; diviseur++)
//while (diviseur < nb)
{
if ((nb % diviseur) == 0 ) {
somme = somme + diviseur ;}
//diviseur ++ ;
}
if (somme == nb) {
printf ("%d est parfait\n", nb) ;}
}
 return 0;
}*/
//Exo3
#include <stdio.h>
int main()
 int i, j, h, b;
 int choix;
 printf("1- triangle :\n ") ;
 printf("2- rectangle : \n") ;
 printf("3- Autre :\n ") ;
 printf("Entrer votre choix : ");
 scanf("%d",&choix);
 switch (choix){
Case 1:
{
 int i, j, h, b;
 printf("Entrer les dimensions du triangle : ");
 scanf("%d %d",&h, &b);
 for(i=1; i<=h; i++)
 {
 for(j=1; j<=i;j++)
 {
 printf("* ");
 }
 printf("\n");
 }
 break;
}
Case 2 :
{
 int i, j, h, b;
 printf("Entrer les dimensions du rectangle : ");
 scanf("%d %d",&h, &b);
 for(i=1; i<=h; i++)
 {
 for(j=1; j<=b; j++)
 {
 printf("* ");
 }
 printf("\n");
 }
 break;
}
}/*
//Exo4
#include <stdio.h>
#include <stdlib.h>
int main()
{
long int nombre ;
printf("donner un nombre :\n");
scanf("%ld",&nombre);	
 printf("Dec\t Oct\t Hex\n");
 for (int i=0; i<=nombre; i++)
 printf("%d\t %o\t %x\t\n",i , i, i);
 return 0;
}*/