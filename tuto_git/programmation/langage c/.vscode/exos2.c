#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	char prenom [50];
	printf("donner nous votre nom please !!\n");
	scanf("%\ns",prenom);
	printf("bienvenue monsieur %s ,mettez vous a l' aise \n",prenom);
	return 0;
}