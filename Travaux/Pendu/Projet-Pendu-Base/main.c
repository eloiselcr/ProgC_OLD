#define _CRT_SECURE_NO_WARNINGS

// INCLUDE OBLIGATOIRES 
#include "dico.h"	
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <conio.h>
#include <tchar.h>

/*
int main(int argc, char ** argv)
{
	//--------------------------------------------------
	// Exemple d'utilisation du dictionnaire de mot : 
	char mot[100];
	piocherMot(mot);	// Pour le moment la fonction renvoi toujours
						// le meme mot. Vous devez implementer la fonction
						// int nombreAleatoire(int nombreMax) dans le fichier
						// dico.c pour que cela fonctionne correctement.
	printf("Pioche : %s", mot);
	//--------------------------------------------------

	return 0;
}
*/

// Le jeu du Pendu par Eloise Lecronier 


int main(int argc, char ** argv)
{
	char motSecret[] = "ROUGE"; // mot recherche prealablement defini 
	char * motEtoile = (char*)malloc((strlen(motSecret) + 1) * sizeof(char));

	for (int i = 0; i < strlen(motSecret); i++)
	{
		motEtoile[i] = '*';
		motEtoile[strlen(motSecret)] = '\0';
	}

	char lettre_proposee; // lettre proposee par l'utilisateur 
	int compteur_lettre = 0; // compteur que l'on augmente a chaque lettres trouves du mot Secret
	int compteur_coups = 10; // compte les coups qu'ils restent


	printf("------ Bienvenue sur le Pendu ! ------\n\n");
	printf("Un mot secret a ete choisi, a vous de le retrouver avant que le compteur ne tombe a 0 !\n\n");

	while (compteur_coups != 0) // tant que le compteur de coups n'est pas egal a 0
	{
		while (compteur_lettre != strlen(motSecret) && compteur_coups != 0) // tant que le compteur de lettre du mot secret est diff�rent 
													// de la taille du mot secret
		{
			printf("Il vous reste %d coups a jouer\n", compteur_coups); // Etat du nombre de coups restant 
			printf("Quel est le mot secret ? %s\n", motEtoile); // Etat du mot secret a trouver 
			printf("Proposez une lettre : "); // demande de la lettre 
			scanf_s("%c", &lettre_proposee); // on enregistre la lettre proposee 
			while (getchar() != '\n');

			int lettre_trouvee = 0;

			for (int i = 0; i < strlen(motSecret); i++) // on parcours le motSecret
			{

				if (motSecret[i] == lettre_proposee)
				{
					compteur_lettre = compteur_lettre + 1; // augmentation du compteur de lettre 
					printf("Bravo, la lettre se trouvait bien dans le mot\n\n");
					lettre_trouvee = 1;
				}
			
			}

			if (lettre_trouvee == 0)
			{
				compteur_coups--;
				printf_s("Dommage, pas de lettre correspondante !\n\n");
			}
		}

		printf("Gagn� ! Le mot �tait bien %c\n", motSecret); // fin boucle compteur lettre, le mot a ete trouve car
															 // la taille des deux correspondent
	}
		
	printf("Perdu ! Le mot �tait %c\n", motSecret); // fin boucle compteur, le joueur a perdu car compteur = 0

	return 0;
}


