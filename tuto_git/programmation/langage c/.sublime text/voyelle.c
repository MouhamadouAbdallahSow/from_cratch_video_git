#include <stdio.h>
int main(int argc, char const *argv[])
{
	int lettre, i, voyelle[6];
	for (i=0; i<6; i++)
	voyelle[i]=0; //initialisation du tableau
	puts ("\n\nEntrez un texte en majuscules et terminez la saisie par <CTRL Z>");
	while ( (lettre = getchar() ) != EOF )
		{
		switch (lettre)
			{
				case 'A': voyelle[0]++; break;
				case 'E': voyelle[1]++; break;
				case 'I': voyelle[2]++; break;
				case 'O': voyelle[3]++; break;
				case 'U': voyelle[4]++; break;
				case 'Y': voyelle[5]++;
			}
		}
	puts ("\nLe nombre de chaque voyelle est:\n");
	puts ("\t A \t E \t I \t O \t U \t Y\n");
	for (i=0; i<6; i++) 
		{
			printf ("\t %d", voyelle[i]);
		}	
		
	return 0;
}