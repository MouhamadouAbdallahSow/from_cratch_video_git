#include <stdio.h>
#include <stdlib.h>
 main()
{
	char nom [10] ;
	printf("votre nom :\n") ;
	gets(nom , 10 , stdin) ;
	printf("ah votre nom est donc : %s ! \n\n",nom);
}