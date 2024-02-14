
//td 0 :
//exos :conversion 
//exos nombre d'octets utiliser
/*#include <stdio.h>

int main() {
    char c1, c2;
    int i1, i2;
    float f1, f2;
    double d1, d2;
    long l1, l2;

    printf("Taille de char: %lu octet(s)\n", (unsigned long)(&c2) - (unsigned long)(&c1));
    printf("Taille de int: %lu octet(s)\n", (unsigned long)(&i2) - (unsigned long)(&i1));
    printf("Taille de float: %lu octet(s)\n", (unsigned long)(&f2) - (unsigned long)(&f1));
    printf("Taille de double: %lu octet(s)\n", (unsigned long)(&d2) - (unsigned long)(&d1));
    printf("Taille de long: %lu octet(s)\n", (unsigned long)(&l2) - (unsigned long)(&l1));

    return 0;
}
 
#include <stdio.h>
int main(int argc, char const *argv[])
{
	int ent1,ent2,perm ;
	printf("donner deux entiers :\n");
	scanf("%d %d",&ent1,&ent2);
	perm=ent1;
	ent1=ent2;
	ent2=perm;
	printf("avant permutation premier entier =%d et deuxieme entier =%d\n",ent2,ent1 );
	printf("apres permutation premier entier =%d et deuxieme entier =%d\n",ent1,ent2 );
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
//TD 01 STRUCTURES CONDITIONNELLLES
/exos 1: produit positif ou negatif

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	float nb1 , nb2 ;

	printf("entrer le premier nombre :");
	scanf("%f",nb1);
	printf("entrer le deuxieme nombre :");
	scanf("%f",nb2);
	if(nb1*nb2>0)
	{
		printf("le produit est positif ");
	}
	else 
	{
		printf("le produit est negatif");
	}
				return 0;
}

//exos 2: pair & impair
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
int n , r ;
printf("entrer un nombre entier \n ");
scanf("%d",&n);
r = n % 2;
if(r ==0)
{

	printf ("le nombre est pair \n");
}
else
{
	printf("le nombre est impair \n");
}
		return 0;
}

//exos3 : 
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	char c ;
	printf("saisir une lettre de l'alphabet\n ");
	scanf("%c",&c);
	if (c == 'a' || c == 'o' || c == 'i' || c == 'e' || c == 'u' || c == 'y' ||
		c == 'A' || c == 'O' || c == 'I' || c == 'E' || c == 'U' || c == 'Y' )
	{
		printf("Le caractere %c saisi est une voyelle \n",c);
	}
	else {
		printf("le caractere %c saisi est un consonne \n",c);
	}
	
	[]97	return 0 ;
}
//exos : 4 maximum entre trois nombres 
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	double nb1 , nb2 , nb3 ;
	printf("donner trois nombres quelconques : \n ") ;
	scanf ("%ls%ls%ls",&nb1,&nb2,&nb3);
	if (nb1 >=nb2 & nb1>= nb3)
	{

		printf ("le max est : %ls \n",nb1);
	}
	else if (nb1<=nb2 & nb2>= nb3)
	{
		printf("le max est : %ls \n",nb2);
	}
	else 
	{
		printf("le max est : %ls \n ",nb3);
	}
cd 
	return 0 ;
}
//exos 5 :equation du second degre
#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
	float a,b ,c;
	printf ("donner les valeurs de a , b et c de l'equation:\n");
	scanf("%f %f %f",&a,&b,&c);
	float delta = pow(b,2) - 4*a*c ;
printf("delta = %.2f \n",delta);
if (delta==0)
{
	float x = -b/2*a ;
	printf("solution double : %.2f\n");
}
else if (delta >0)
{
	float sol1= (-b-sqrt(delta))/(2*a);
	float sol2= (-b+sqrt(delta))/(2*a);
  printf("deux solutions : solution1 = %.2f et solution2 = %.2f \n",sol1,sol2);

}
else 
printf("pas de solution \n");
	return 0;
}

/* 
//exos 6: annee bissectile
#include <stdio.h>

int main()
{
    int annee;

    printf("Entrez une année: ");
    scanf("%d",&annee);

    if(annee % 4 == 0)
    {
        if( annee % 100 == 0)
        {
            if ( annee % 400 == 0)
                printf("%d est une annee bissextile", annee);
            else
                printf("%d n'est pas une annee bissextile", annee);
        }
        else
            printf("%d est une annee bissextile", annee );
    }
    else
        printf("%d n'est pas une anne bissextile", annee);

    return 0;
}
//exos 7 :
#include <stdio.h>
int main(int argc, char const *argv[])
{
	int numero ;
	printf("choisissez le numero de votre exos :\n");
	scanf("%d",&numero);
	switch (numero)
	{
	case 1 :
		printf ("choix :exos 1\n");
		break ;
	case 2 :	
		printf ("choix :exos 2\n");
		break;
	case 3 :	
		printf ("choix :exos 3\n");
		break ;
	case 4 :
		printf ("choix :exos 4\n");
		break;
	case 5 :
		printf ("choix :exos 5\n");
		break ;
	case 6 :
		printf ("choix :exos 6\n");
		break ;
	case 7 :
		printf ("choix :exos 7\n");
		break ;
	default :
		printf ("mauvais choix du nombre \n");
		break ;
	}
	
	return 0;
}

//TD 02 BOUCLE (for ,while ,do while ,switch.....)
//exos 1:
#include <stdio.h>
int main(int argc, char const *argv[])
{
	int i;
	for (i= 1;i<21 ;i++)
	{
	printf (" %d\n",i);
	}
	return 0;
}
//exos 2
#include <stdio.h>
int main(int argc, char const *argv[])
 {
 	float i,nombre;
 	printf("entrer un nombre :\n");
 	scanf("%f",&nombre);
 	i = nombre+1;
 	for (i= nombre+1;i<=nombre+10;i++)
 	{
 		printf("%f\n",i);
 	}

 		return 0;
 } 

//exos 3:
#include <stdio.h>
int main(int argc, char const *argv[])
{
	int j,p,n;
	printf("entrer un nombre \n");
	scanf("%d",&n);

	for (n = n ;n>0 ;n--)
	{

	printf("la table de multiplication de %d est :\n",n);
	for (j = 1 ;j <=10 ;j++ )
	{
		p = n * j;
		printf("%d * %d = %d \n",n,j,p);
	}
	}
	return 0;
}
//exos 4 :
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
int nombre ,somme = 0;
printf("entrer un nombre : \n") ;
scanf("%d",&nombre); 
somme = (nombre*(nombre+1))/2;
printf("la somme est : %d ",somme);
	return 0;
}
//exos 4 :
#include <stdio.h>
int main(int argc, char const *argv[])
{
int nombre ,somme = 0;
printf("entrer un nombre : \n") ;
scanf("%d",&nombre); 
for(int i = 1 ;i <=nombre ; i++)
{
	somme = somme + i ;
}
printf("La somme de tous les entiers jusqu'a %d est : %d",nombre , somme);

	return 0;
}

//exos 5 :methode 1
#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n , i ;
	unsigned long long fact = 1 ;
	printf ("entrer un  nombre positif : \n");
	scanf("%d",&n);
	if (n < 0)
	{
		printf ("erreur!!! .le nombre entrer est negatif \n"); 
	}
	else {

	for (i = 2 ; i <= n ; i++){
	fact*=i;}
	printf("le factoriel de %d est : %d \n",n ,fact);
	}
	return 0;
}
//exos 5 : methode 2 (recursivite)
#include <stdio.h>
 
long factorielle(int n)
{
  if (n == 0)
    return 1;
  else
    return(n * factorielle(n-1));
}
 
int main()
{
  int nbr;
  long fact;
 
  printf("Entrez un nombre pour calculer sa factorielle\n");
  scanf("%d", &nbr);
 
  if (nbr < 0)
    printf("La factorielle des entiers négatifs n'est pas définie.\n");
  else
  {
    fact = factorielle(nbr);
    printf("%d! = %ld\n", nbr, fact);
  }
 
  return 0;
}



//exos 5 : FONCTION
#include <stdio.h>
 
long factorial(int n)
{
  int i;
  long fact = 1;
 
  for (i = 1; i <= n; i++)
    fact = fact * i;
 
  return fact;
}
 
int main()
{
  int nbr;
 
  printf("Entrez un nombre pour calculer sa factorielle\n");
  scanf("%d", &nbr);
 
  printf("%d! = %ld\n", nbr, factorial(nbr));
 
  return 0;
}

/
//exos :5 methode recursive pour factorielle 

#include <stdio.h>
 
long factorielle(int n)
{
  if (n == 0)
    return 1;
  else
    return(n * factorielle(n-1));
}
 
int main()
{
  int nbr;
  long fact;
 
  printf("Entrez un nombre:\n");
  scanf("%d", &nbr);
 
  if (nbr < 0)
    printf("La factorielle des entiers négatifs n'est pas définie.\n");
  else
  {
    fact = factorielle(nbr);
    printf("%d! = %ld\n", nbr, fact);
  }
 
  return 0;
} 

//exos 5: methode simple  
#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n,fact ,i;
	printf("donnner un entier :\n");
	scanf("%d",&n);
	if (n < 0)
		printf("erreur !! .nombre negatif \n");
	else 
	{
		fact = 1 ;
		for ( i = 2 ; i <=n ;i++)
		{
			fact=fact*i ;
		}
		printf("%d ! = %d\n",n,fact);
	}
	return 0;
}

//exos 6 :with a fonction called pgcd
#include <stdio.h>

int pgcd (int a , int b)
{
	int r ;
	while (b!= 0)
	{
		r = a % b;
		a = b ;
		b = r ;
	}	
		return a ;
}
int main(int argc, char const *argv[])
{
	int a , b ;
	printf("entrer deux nombres :\n");
	scanf("%d %d",&a,&b);
	printf("le pgcd de %d et %d  est : %d \n",a,b,pgcd(a,b));
	return 0;
}

//exos 6 : 
#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a ,b , r ;
	printf("entrer deux entiers : \n");
	scanf("%d %d",&a,&b);
	while (b!=0)
	{
		r = a%b ;
		a = b ;
		b = r ;
	}
printf("le pgcd est : %d \n",a);
	return 0;
}

//exos 7 :
#include <stdio.h>

int main(int argc, char const *argv[])
{
     int A, N, i;

     A = 0;

     printf ("Bienvenue dans mon programme de determination de nombres premiers.\n");

     printf ("Entrez un nombre N\n");
     scanf ("%d", &N);

     for (i=2;i<=N/2;i=i+1)
     {
         if (N%i==0)
         {
            A = A + 1;
         }
     }

     if (A==0)
     {
        printf ("%d n'est pas un nombre premier.\n", N);
     }
     else
     {
        printf ("%d est un nombre premier.\n", N);
     }

     return 0;
}

//exos 8:nombres parfait 
// Le nombre parfait est un nombre positif qui est égal à la somme de tous ses diviseurs sauf lui-même.
  //Exemple :
//28 est un nombre parfait tel que 1 + 2 + 4 + 7 + 14 = 28.
//6 est un nombre parfait tel que 1 + 2 + 3 = 6.
//15 n’est pas un nombre parfait, car 1 + 3 + 5 n’est pas égal à 15.
#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n,i , som = 0 ;
	printf("donner un entier : \n");
	scanf("%d",&n);
	if (n<0) 
		{
			printf("erreur nombre negatif\n");
		}	
	else
	{ 
	for (i = 1;i < n; ++i )//affecter et incrementer->(i++) ou bien l'inverse->(++i)   
	{
		if (n%i == 0) //si i est un diviseur (reste est nulle alors )
		{
			som = som + i ;//somme des diviseurs 
		}0
	}	
	if (som == n) 
	{
		printf("%d est un nombre parfait .\n",n);
	}	
	else 
	{
		printf("%d n'est pas un nombre parfait .\n",n);
	}
	}

	return 0;
}
#include <stdio.h>
int main(int argc, char const *argv[])
{
	int i , nb1 , nb2 ;
	int som = 0 ;
		printf("entrer deux entiers positif :\n");
		scanf("%d %d",&nb1,&nb2) ;
	while (nb1>=nb2)
	{
		printf("le deuxieme nombre est inferieur au premier \n");
		printf("entrer encore deux entiers positif :\n");
		scanf("%d %d",&nb1,&nb2) ;
	}
	for (i=nb1+1;i<nb2;i++)
	{
		if (i%2==0)
		{
			som =som + 1 ;
		}
	}
	printf("le nombre d'enties pairs entre %d et %d est : %d\n",nb1,nb2,som);
	return 0;
}
//exos :10

#include <stdio.h>

void main(void)
{
    int rang, terme_A, terme_B, tmp, i;

    printf("Entrer le rang du terme: n = ");
    scanf("%d", &rang);

    terme_A = 0, terme_B = 1;
    for (i = 1; i <= rang; i++)
    {
        tmp = terme_A;  // pour conserver la valeur du terme precedent
        terme_A = terme_B;
        terme_B = tmp + terme_B;
    }
    printf("Le terme U_%d = %d\n", rang, terme_A);
}
//devoir 49 :
//exos 1:
#include <stdio.h>
int main()
{
	int j , m , a ;
	printf("donner le jour : \n" );
	scanf("%d",&j);
	printf("donner le mois : \n" );
	scanf("%d",&m);
	printf("donner l'annee : \n" );
	scanf("%d",&j);
	if (j < 1 || j > 30) 
	{
		printf(" jour invalide!! \n");
	}
	else if (m < 1 || m > 12)
	{
		printf(" mois invalide !!\n");
	}
	else if (a < 1950 || a > 2022)
	{
		printf("anne invalide !! \n");
	}
	else 
	printf("la date est : %d - %d - %d \n",j,m,a);
	
		return 0;
}
//exos 2 :
//1 permuter deux caracters 
#include <stdio.h>
int main(int argc, char const *argv[])
{
	char carA ,carB ,temp ;
	printf("donner deux caracteres : \n");
	scanf("%c %c",&carA,&carB);
	printf("avant permutation : carA = %c et carB = %c \n ",carA,carB);
	temp = carA ;
	carA = carB ;
	carB = temp ;
	printf("apres permutation : carA = %c et carB = %c\n",carA,carB);

	return 0;
} 
#include <stdio.h>
#include <math.h>
 main ()
{
	double x ;
	do 
		{
			printf("donner un nombre positf : n = ") ;
			scanf("%le",&x) ;
			if (x < 0) 
			{
				printf("nombre positif !!\n");
				continue ;
			} 
			if (x > 0)
			{
				printf("la racine carre est : %le",sqrt(x)) ;
			}
			if (x ==0) break ;
		}
		while (1);
}
//afficher un triangle de chiffre 
#include <stdio.h>
void main()
{
	int i, j , n ;
	printf("donner le nombre de ligne : \n");
	scanf("%d",&n);
	printf("voici un triangle de chiffre de %d ligne :\n",n);
	for (i = 1 ;i <=n ; i ++)
	{
		for (j = 1 ; j <=i ;j ++)
		{
			printf("*") ;
		}
		printf("\n") ;
	}
	
}	

#include <stdio.h>
int triple (int nombre)
{
	return 3 * nombre ;
}
int main(int argc, char const *argv[])
{
	int nombreEntrer = 0 , nombreTriple = 0 ;
	printf("entrer un nombre :\n");
	scanf("%d",&nombreEntrer) ;
	nombreTriple = triple (nombreEntrer) ;
	printf("le triple de %d est : %d",nombreEntrer,nombreTriple);
	return 0;
}

#include <stdio.h>

#define car ' * '
int main (void)
{
int nlignes ,nl ,nesp ,j ;
printf("combien de ligne ?\n");
scanf("%d",&nlignes);
for (nl = 0 ;nl<nlignes ;nl++)
{
	nesp = nlignes - nl - 1 ;
	for (j = 0 ; j < nesp ; j++ ) putchar(' ');
	for (j = 0 ; j < 2*nl + 1 ; j ++ ) printf ("*");
	putchar ('\n')	;
}
return 0 ;

}*/
#include <stdio.h>
#include <stdiolib.h>






























