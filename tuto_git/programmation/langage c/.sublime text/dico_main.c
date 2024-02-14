/*
Jeu du Pendu
main.c
------
Fonctions principales de gestion du jeu
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "dico.h"
int gagne(int lettreTrouvee[], long tailleMot);
int rechercheLettre(char lettre, char motSecret[], int
lettreTrouvee[]);
char lireCaractere();
int main(int argc, char* argv[])
{
char lettre = 0; // Stocke la lettre proposée par l'utilisateur(retour du scanf)
char motSecret[100] = {0}; // Ce sera le mot à trouver
int *lettreTrouvee = NULL; // Un tableau de booléens. Chaque case correspond à une lettre du mot secret. 
//0 = lettre non trouvée,
//1 = lettre trouvée
long coupsRestants = 10; // Compteur de coups restants (0 = mort)
long i = 0; // Une petite variable pour parcourir les tableaux
long tailleMot = 0;
printf("Bienvenue dans le Pendu !\n\n");
if (!piocherMot(motSecret)) //si on n'a pas piocher de mot on arrete le programme 
exit(0);
tailleMot = strlen(motSecret);
lettreTrouvee = malloc(tailleMot * sizeof(int)); // On alloue dynamiquement le tableau lettreTrouvee (dont on ne connaissait pas la taille au départ)
if (lettreTrouvee == NULL)
exit(0);
for (i = 0 ; i < tailleMot ; i++)
lettreTrouvee[i] = 0;//initialiser le tableauu a 0 
/* On continue à jouer tant qu'il reste au moins un coup à jouer ou qu'on n'a pas gagné */
while (coupsRestants > 0 && !gagne(lettreTrouvee, tailleMot))
{
printf("\n\nIl vous reste %ld coups a jouer",
coupsRestants);
printf("\nQuel est le mot secret ? ");
/* On affiche le mot secret en masquant les lettres non trouvées Exemple : *A**ON */
for (i = 0 ; i < tailleMot ; i++)
{
if (lettreTrouvee[i]) // Si on a trouvé la lettre n° i
printf("%c", motSecret[i]); // On l'affiche
else
printf("*"); // Sinon, on affiche une étoile pour les lettres non trouvées
}
printf("\nProposez une lettre : ");
lettre = lireCaractere();
// Si ce n'était PAS la bonne lettre
if (!rechercheLettre(lettre, motSecret, lettreTrouvee))
{
coupsRestants--; // On enlève un coup au joueur
}
}
if (gagne(lettreTrouvee, tailleMot))
printf("\n\nGagne ! Le mot secret etait bien : %s",
motSecret);
else
printf("\n\nPerdu ! Le mot secret etait : %s", motSecret);
free(lettreTrouvee); // On libère la mémoire allouée manuellement (par malloc)
	return 0;
}
char lireCaractere()
{
char caractere = 0;
caractere = getchar(); // On lit le premier caractère
caractere = toupper(caractere); // On met la lettre en majuscule si elle ne l'est pas déjà
// On lit les autres caractères mémorisés un à un jusqu'au \n
while (getchar() != '\n') ;
return caractere; // On retourne le premier caractère qu'on a lu
}
int gagne(int lettreTrouvee[], long tailleMot)
{
long i = 0;
int joueurGagne = 1;
for (i = 0 ; i < tailleMot ; i++)
{
if (lettreTrouvee[i] == 0)
joueurGagne = 0;
}
return joueurGagne;
}
int rechercheLettre(char lettre, char motSecret[], int
lettreTrouvee[])
{
long i = 0;
int bonneLettre = 0;
// On parcourt motSecret pour vérifier si la lettre proposée y est
for (i = 0 ; motSecret[i] != '\0' ; i++)
{
if (lettre == motSecret[i]) // Si la lettre y est
{
bonneLettre = 1; // On mémorise que c'était une bonne lettre
lettreTrouvee[i] = 1; // On met à 1 la case du tableau de booléens correspondant à la lettre actuelle
}
}
return bonneLettre;
}
/*
Idées d'amélioration
Télécharger le projet
Pour commencer, je vous invite à télécharger le projet complet du Pendu :
Télécharger le projet Pendu (10 Ko)
Si vous êtes sous Linuxou sous Mac, supprimez le fichier dico.txt et recréez-en un. Les fichiers sont enregistrés de manière
différente sous Windows : donc si vous utilisez le mien, vous risquez d'avoir des bugs. N'oubliez pas qu'il faut qu'il y ait une
Entrée après chaque mot du dictionnaire. Pensez en particulier à mettre une Entrée après le dernier mot de la liste.
Cela va vous permettre de tester par vous-mêmes le fonctionnement du projet, de procéder à des améliorations personnelles, etc.
Bien entendu, le mieuxserait que vous ayez déjà réussi le Pendu par vous-mêmes et que vous n'ayez même pas besoin de voir
mon projet pour voir comment j'ai fait mais…je suis réaliste, je sais que ce TP a dû être assez délicat pour bon nombre d'entre
vous.
Vous trouverez dans ce .zip les fichiers .c et .h ainsi que le fichier .cbp du projet. C'est un projet fait sous Code::Blocks.
Si vous utilisez un autre IDE, pas de panique. Vous créez un nouveau projet console et vous y ajoutez manuellement les .c et .h
que vous trouverez dans le .zip.
Vous trouverez aussi l'exécutable (.exe Windows) ainsi qu'un dictionnaire (dico.txt).
Améliorez le Pendu !*/