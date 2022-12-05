#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>


// 0 / 4 Exercices 



// ------- Exercice 1 ------- 

	// Avec une application ecrite en C, vous allez ouvrir le fichier « source.txt » en lecture, et
	// afficher son contenu caractere par caractere a l’ecran a l aide de la fonction getc.
	// Refermez ensuite le fichier.

int main(int argc, char ** argv)
{
	FILE * fichier;
	int compteur;

	fichier = fopen("sources.txt", "r+");	if (fichier == NULL)	{		putc("Fichier introuvable ou inexistant.\n");		exit(1);	}	while ((compteur = getc(fichier)) != EOF)	{		putc(compteur);	}		fclose(fichier);	return(0);
}

// ------- Exercice 2 ------- 

	// Ouvrir le fichier « source.txt » en lecture, et un fichier que vous nommerez « dest1.txt » en
	// ecriture, puis copier chaque caractere du fichier source dans le fichier de destination.
	// Refermez le fichier.


// ------- Exercice 3 ------- 

	// Ouvrir le fichier « source.txt » en lecture, et un fichier que vous nommerez « dest2.txt » en
	// ecriture, puis vous copier chaque caractere du fichier source dans le fichier de destination
	// mais sans copier la lettre ‘a’ des que vous la trouverez dans le fichier source.
	// Refermez le fichier.


// ------- Exercice 4 ------- 

	// Ecrire une fonction ayant un pointeur de fichier en argument (pointeur sur un fichier qui 
	// sera deja ouvert dans le programme principal) et qui retournera un entier. Cette fonction  
	// aura pour but de calculer et de retourner la taille du fichier (en octets).
	// Essayez votre fonction avec les trois fichiers utilises (source.txt, dest1.txt, dest2.txt).
	// La fermeture du fichier se fera dans le programme principal.

