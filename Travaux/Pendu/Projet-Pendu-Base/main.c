#define _CRT_SECURE_NO_WARNINGS

// INCLUDE OBLIGATOIRES 
#include "dico.h"	
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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

// --- Initialisation des variables --- 

int gagne(int lettreTrouvee[], long tailleMot);
int rechercheLettre(char lettre, char motSecret[], int lettreTrouvee[]);
char lireCaractere();

int main(int argc, char* argv[])
{
	char lettre = 0; // lettre rentree
	char motRecherche[100] = { 0 }; // mot a trouver
	int *lettreTrouvee = NULL; // booleens
	long coupsDispo = 10; // compteur de coups 
	long i = 0; // parcours du tableau 
	long TailleMot = 0;

	printf("Le jeu du Pendu \n\n");

	if (!piocherMot(motRecherche))
		exit(0);
	TailleMot = strlen(motRecherche);
	
	lettreTrouvee = malloc(TailleMot * sizeof(int)); 
	if (lettreTrouvee == NULL)
		exit(0);
	
	for (i = 0; i < TailleMot; i++)
		lettreTrouvee[i] = 0;



	while (coupsDispo > 0 && !gagne(lettreTrouvee, TailleMot)) // tant que le joueur dispose de coups
	{
		printf("\n\nIl vous reste %ld coups", coupsDispo);
		printf("\n Quel est le mot choisi ? ");

		for (i = 0; i < TailleMot; i++)
		{
			if (lettreTrouvee[i]) 
				printf("%c", motRecherche[i]); 
			else
				printf("*"); 
		}

		printf("\nChoisissez votre lettre : ");
		lettre = lireCaractere();



		// --- Si PAS la bonne lettre --- 

		if (!rechercheLettre(lettre, motRecherche, lettreTrouvee))
		{
			coupsDispo--; // On enleve un coup 
		}
	}


	// --- Si le mot a ete trouve --- 

	if (gagne(lettreTrouvee, TailleMot))
		printf("\n\nBravo, le mot recherch� �tait : %s", motRecherche);
	else
		printf("\n\nAH AH AH Perdu ! Le mot recherch� �tait : %s", motRecherche);

	free(lettreTrouvee); 

	return 0;
}


// --- Lecture du caractere ---

char lireCaractere()
{
	char caractere = 0;
	caractere = getchar(); // lit le premier caractere
	caractere = toupper(caractere); // ajout majuscule si il n'y en a pas

	// On lit les autres caracteres memorises

	while (getchar() != '\n');

	return caractere; // retourne premier caractre 
}



int gagne(int lettreTrouvee[], long TailleMot) 
	{
	long i = 0;
	int joueurGagne = 1;
	for (i = 0; i < TailleMot; i++)
	{
		if (lettreTrouvee[i] == 0)
			joueurGagne = 0;
	}
	return joueurGagne;
}

int rechercheLettre(char lettre, char motRecherche[], int lettreTrouvee[])
	{
	long i = 0;
	int bonneLettre = 0;

	// parcours du motRecherche si la lettre correspond
	for (i = 0; motRecherche[i] != '\0'; i++)
	{
		if (lettre == motRecherche[i]) // Si le check de la lettre ok
		{
			bonneLettre = 1; // memorise
			lettreTrouvee[i] = 1; // 1 la case du tableau de booleens correspondant a la lettre actuelle
		}
	}
	return bonneLettre;
}