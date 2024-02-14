#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	float param1,param2,resultat;
	char operation;
	printf("Quelle operation( +,-,/ ou *)?: ");
	scanf(" %g %c %g", &param1, &operation, &param2);
	printf("Saisir a et b : ");
	scanf(" %g%g", &param1, &param2);
	switch (operation)
	{
		case '+' : resultat = param1+param2;
		break;
		case '-' : resultat = param1-param2;
		break;
		case '*' : resultat = param1*param2;
		break;
		case '/' : resultat = param1/param2;
		break;
		default : resultat=0.;
	}
	printf("Résultat: %g %c %g = %g", param1, operation, param2, resultat);

		return 0;
}