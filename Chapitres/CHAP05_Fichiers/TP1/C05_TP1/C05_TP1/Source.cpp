#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <iostream>


// 4 / 4 Exercices 



// ------- Exercice 1 ------- 

	// Avec une application ecrite en C, vous allez ouvrir le fichier « source.txt » en lecture, et
	// afficher son contenu caractere par caractere a l’ecran a l aide de la fonction getc.
	// Refermez ensuite le fichier.

/*
int main(int argv, char ** argc){	FILE * fichier = fopen("source.txt", "r");

	if (fichier != NULL) // fichier trouvé
	{
		char c;
		do 
		{
			c = (char)getc(fichier);
			printf("%c", c);
		} while (c != EOF);

		fclose(fichier);
	}
	else // fichier introuvable ou inexistant
	{
		printf("L'ouverture du fichier a echouee !\n");
	}

	return(0);
}
*/


// ------- Exercice 2 ------- 

	// Ouvrir le fichier « source.txt » en lecture, et un fichier que vous nommerez « dest1.txt » en
	// ecriture, puis copier chaque caractere du fichier source dans le fichier de destination.
	// Refermez le fichier.

/*
void closeFile(FILE * file)
{
	if (fclose(file) == 0)
	{
		printf("Fermeture reussie\n");
	}
	else
	{
		printf("Echec de fermeture du fichier \n");
	}
}

int main(int argc, char ** argv)
{
	FILE * fichier = fopen("source.txt", "r");
	FILE * destfile = fopen("dest1.txt", "w");

	if (fichier != NULL && destfile != NULL)
	{
		// L'ouverture du fichier a réussie.
		char c;
		do
		{
			c = (char)getc(fichier);
			printf("%c", c);

			if (c != EOF)
			{
				putc(c, destfile);
			}
		} while (c != EOF);
		printf("\n");

		closeFile(destfile);
		closeFile(fichier);
	}
	else
	{
		printf("L'ouverture du fichier a echouee !\n");

		if (fichier != NULL) fclose(fichier);
		if (destfile != NULL) fclose(destfile);
	}

	return 0;
}
*/


// ------- Exercice 3 ------- 

	// Ouvrir le fichier « source.txt » en lecture, et un fichier que vous nommerez « dest2.txt » en
	// ecriture, puis vous copier chaque caractere du fichier source dans le fichier de destination
	// mais sans copier la lettre ‘a’ des que vous la trouverez dans le fichier source.
	// Refermez le fichier.

/*
void closeFile(FILE * file)
{
	if (fclose(file) == 0)
	{
		printf("Fermeture reussie\n");
	}
	else
	{
		printf("Echec de fermeture du fichier\n");
	}
}

int main(int argc, char ** argv)
{
	FILE * fichier = fopen("source.txt", "r");
	FILE * dest2 = fopen("dest2.txt", "w");

	if (fichier != NULL && dest2 != NULL)
	{
		char c;
		do
		{
			c = (char)getc(fichier);
			printf("%c", c);

			if (c != EOF && c != 'a')
			{
				putc(c, dest2);
			}
		} while (c != EOF);
		printf("\n");

		closeFile(dest2);
		closeFile(fichier);
	}
	else
	{
		printf("L'ouverture du fichier a echouee !\n");

		if (fichier != NULL) fclose(fichier);
		if (dest2 != NULL) fclose(dest2);
	}

	return (0);
}
*/


// ------- Exercice 4 ------- 

	// Ecrire une fonction ayant un pointeur de fichier en argument (pointeur sur un fichier qui 
	// sera deja ouvert dans le programme principal) et qui retournera un entier. Cette fonction  
	// aura pour but de calculer et de retourner la taille du fichier (en octets).
	// Essayez votre fonction avec les trois fichiers utilises (source.txt, dest1.txt, dest2.txt).
	// La fermeture du fichier se fera dans le programme principal.

/*
long getFileSize(FILE* file)
{
	long position = ftell(file);
	fseek(file, 0L, SEEK_END);
	long result = ftell(file);
	fseek(file, position, SEEK_SET);
	return result;
}

void closeFile(FILE * file)
{
	if (fclose(file) == 0)
	{
		printf("Fermeture reussie\n");
	}
	else
	{
		printf("Echec de fermeture du fichier \n");
	}
}

int main(int argc, char ** argv)
{
	FILE * fichier = fopen("source.txt", "r");
	FILE * dest1File = fopen("dest1.txt", "r");
	FILE * destFile = fopen("dest2.txt", "w");

	if (fichier != NULL && dest1File != NULL && destFile != NULL)
	{
		char c;
		do
		{
			c = (char)getc(fichier);
			printf("%c", c);

			if (c != EOF && c != 'a')
			{
				putc(c, destFile);
			}
		} while (c != EOF);
		printf("\n");

		printf("Taille fichier source : %ld octets\n", getFileSize(fichier));
		printf("Taille fichier dest1 : %ld octets\n", getFileSize(dest1File));
		printf("Taille fichier dest2 : %ld octets\n", getFileSize(destFile));
		
		closeFile(destFile);
		closeFile(fichier);
	}
	else
	{
		printf("L'ouverture du fichier a echouee !\n");

		if (fichier != NULL) fclose(fichier);
		if (destFile != NULL) fclose(destFile);
	}

	return 0;
}
*/


// ------- Exercices BONUS -------



// ------- Exercice 1 -------

	// Ecrire un programme C permettant de creer un fichier qui contiendra l’alphabet.

/*
void closeFile(FILE * file)
{
	if (fclose(file) == 0)
	{
		printf("Fermeture reussie\n");
	}
	else
	{
		printf("Echec de fermeture du fichier \n");
	}
}

int main(int argc, char ** argv)
{
	FILE * alphabet = fopen("alphabet.txt", "w");

	char c;
	do
	{
		int letter;
		letter = 'a';
		while (letter <= 'z')
		{
			_fputchar(letter);
			letter = letter + 1;
		}
	} while (c != EOF);
	printf("\n");

	fclose(alphabet);

	return(0);
}
*/


// ------- Exercice 2 -------

	// Ecrire un programme C permettant d’afficher le contenu d’un fichier cree prealablement.

/*
int main(int argv, char ** argc){	FILE * fichier = fopen("source.txt", "r");

	if (fichier != NULL) // fichier trouvé
	{
		char c;
		do
		{
			c = (char)getc(fichier);
			printf("%c", c);
		} while (c != EOF);

		fclose(fichier);
	}
	else // fichier introuvable ou inexistant
	{
		printf("L'ouverture du fichier a echouee !\n");
	}

	return(0);
}
*/


// ------- Exercice 3 -------

	// Ecrire un programme qui permet de lire dans un fichier des entiers et de les trier avant de les
	// enregistrer dans un autre fichier.Vous devez ecrire les fonctions suivantes :

	// 1. int lireDonnees(char* nomFichier, int* T) qui lit les données dans le fichier nomme nomFichier
	// des entiers, puis les stocke dans un tableau T.La valeur de retour est le nombre d’entiers qui ont été
	// lus(c’est - à - dire le nombre d’éléments du tableau).

	// 2. void afficherTableau(int* T, int nb) qui affiche le contenu du tableau T qui comprend nb elements.

	// 3. void triABulles(int* T, int nb) qui trie le tableau T de nb elements avec la methode du tri a bulles et
	// qui retourne le tableau trie.

	// 4. void enregistrerDonnees(char* nomFichier, int* T, int nb) qui enregistre les nb valeurs du tableau
	// T dans le fichier nommé nomFichier.

	// Pour tester vos fonctions, vous réaliserez un programme principal.Vous choisirez le nom du fichier	
	// pour la lecture des donnees ainsi que celui pour l’enregistrement des valeurs (vous pouvez mettre
	// ces noms en dur dans votre code).


void closeFile(FILE* file)
{
	if (fclose(file) == 0)
	{
		printf("Fermeture reussie\n");
	}
	else
	{
		printf("Echec de fermeture du fichier \n");
	}
}

void afficherTableau(int* T, int nb)
{

}

void triABulles(int* T, int nb)
{

}

void enregistrerDonnees(char* nomFichier, int* T, int nb)
{

}

int main(int argc, char** argv)
{

}
