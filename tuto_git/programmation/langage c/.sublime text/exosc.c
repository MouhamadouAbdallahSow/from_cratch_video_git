//exos 4 :
#include <stdio.h>
#include <stdlib.h>

void compte(int nombre) {
    printf("Votez soit par oui: O ou par non: N\n");
    int NvoieO = 0;
    char vote;
    for(int i = 1; i <= nombre; i++) {
        printf("%de personne votez\n", i);
        scanf(" %c", &vote);
        if(vote == 'O') {
            NvoieO += 1;
        }
    }
    printf("le nombre de oui est %d, le nombre de non est %d", NvoieO , nombre - NvoieO);
}

int main() {
    printf("Entrez le nombre de votants: ");
    int NombreVotant = 0;
    scanf("%d", &NombreVotant);
    compte(NombreVotant);
    return 0;
}
//exos 5 :
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void truc(int n1,int n2)
{
    printf("La table de valeur de la fonction entre %d et %d est:\n", n1, n2);
    for(int i = n1; i <= n2; i++)
    {
        float value = sin(i) + log(i) - sqrt(i);
        printf("%f\n", value);
    }
}

int main() {
    int val1 , val2 ;
    printf("Entrez les bornes de l'intervalle\n");
    scanf("%d %d", &val1, &val2);
    truc(val1, val2);
    return 0;
}
//exos 6:
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int NBCHIFFRES(long nombre) {
    int i = 0;
    long comp = 0;
    if(nombre > 0) {
        while(nombre > comp) {
        i++;
        comp = pow(10,i);
        }
    } else{
        while(nombre < -comp) {
        i++;
        comp = pow(10,i);
        }
    }

    return i;
}

int main() {
    int entree = 0;
    printf("Entrez un nombre: ");
    scanf("%d", &entree);
    printf("Le nombre %d a %d chiffres", entree, NBCHIFFRES(entree));
    return 0;
}
//exo 6
#include <stdio.h>


int NBCHIFFRE ( long int N)
{
      int res = 0;
      long int i;
      for (i = 1; i <= N; i = 10*i)
      {
        res++;
      }
      return a;
 }

void main ()
{
    long int nombre;
    printf("Saisissez un nombre :\n");
    scanf ("%ld",&nombre);
    int k = NBCHIFFRE(nombre);
    printf("Le nombre %ld admet %d chiffres",nombre,k);
}