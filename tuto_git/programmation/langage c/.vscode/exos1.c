/*#include <stdio.h>
int main(int argc, char const *argv[])
{
    char lettre =  'b';
    printf("%d\n",lettre );

      
             return 0;
}
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
 {
 	char chaine1 [100] = "bonsoir " ,chaine2 [100] = "mouhamadou" , chaine3[100] = "abdoulaye", chaine4[5] = "sow" ;
 	
 	strcat(chaine3,chaine4);
 	strcat(chaine2,chaine3);
 	strcat(chaine1,chaine2);//on concatene ce qui est de chaine2 dans chaine1;
 	printf("dans chaine1  : %s\n", chaine1);
 	printf("la chaine2  : %s\n", chaine2);
 	printf("la chaine3 : %s\n",chaine3);
 	printf("la chaine4 : %s",chaine4);
 	return 0;
 } */
 #include <stdio.h>
void ouinon (int nb_vote)
{
    int nbOui = 0 ,nbNon = 0 ,null = 0 ;
    char vote ;
    for (int i = 0 ; i < nb_votant ; i++)
    {
        printf("vote :\noui = o et non = n \nentrer votre vote :\n");
        scanf("%c",&vote);
        if (vote ==  'o')
        nbOui++;
        else if (vote =='n')
        nbNon++ ;
        else 
        null++;
    }
    printf("oui = %d\nnon=%d\nnull=%d",nbOui,nbNon,null);
    
}
int main()
{
    int n ;
    printf("donner le nombre de votant : \n");
    scanf("%d",&n);
    ouinon(n);
    return 0 ;
}






