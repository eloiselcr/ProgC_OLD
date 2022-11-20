#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include "TcpServer.h"
#include "SampleParser.h"
#include "ClientState.h"




// 5 / 6 Exercices 



// ------- Exercice 1 ------- 

	// Écrire une fonction de prototype int puissance(int a, int b) qui calcule, a puissance b
	// a et b étant des entiers et qui renvoie le résultat au programme appelant.
	// Dans main(), demandez à l’utilisateur d’entrer 2 valeurs x et y, puis grâce à la fonction
	// puissance vous calculerez xpuissy et vous afficherez le résultat obtenu

/*
int puissance(int a, int b)
{
	int result = 1;
	for (int i = 0; i < b; i++)
	{
		result *= a; // result = resultat * a
	}
	return result;
}

int main(int argc, char ** argv)
{
	int x, y;
	printf("x : ");
	scanf("%d", &x);
	printf("y : ");
	scanf("%d", &y);
	int result = puissance(x, y);
	printf("%d puissance %d = %d\n", x, y, result);
	return 0;
}
*/


// ------- Exercice 2 ------- 

	// Un programme contient la déclaration suivante :
	// int tab[10] = { 1,2,4,8,16,32,64,128,256,512 };
	// Ecrire une fonction de prototype void affiche(int *t) qui affiche les éléments du tableau, et
	// leur position; la mettre en œuvre dans main().

/*
void affiche(int *tab, int n)
{
	int i; // i va parcourir le tableau 
	for (i = 0; i < n; i++) // tant que i n'a pas atteint la fin du tableau 
	{
		printf("La %deme valeur a pour valeur %d\n", i, tab[i]); // afficher la valeur de i en fonction de tab[i]
	}
}

int main(int argc, char ** argv)
{
	int tab[10] = { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512 }; // paramètres du tableau 
	affiche(tab, 10); // on affiche le tableau jusqu'à sa 10ème valeur 
}
*/


// ------- Exercice 3 ------- 

	// Un programme contient la déclaration suivante :
	// Float liste[8] = { 1.6,-6.9,9.67,5.90,345,-23.6,78,34.6 };
	// Ecrire une fonction de prototype float min(float* tab) qui renvoie le minimum de la liste.
	// Ecrire une fonction de prototype float max(float *tab) qui renvoie le maximum de la liste.
	// Les mettre en œuvre dans main().

/*
float min(float*tab, int n)
{
	int i;
	float min = tab[0];
	for (i = 0; i < n; i++)
	{
		if (min > tab[i])
		{
			min = tab[i];
		}
		
	}
	return min;
}

float max(float*tab, int n)
{
	int i;
	float max = tab[0];
	for (i = 0; i < n; i++)
	{
		if (max < tab[i])
		{
			max = tab[i];
		}
		
	}
	return max;
}

int main(int argc, char ** argv)
{
	float tab[8] = { 1.6, -6.9, 9.67, 5.90, 345, -23.6, 78, 34.6 };
	printf("La valeur du minimum est de %f\n", min(tab, 8));
	printf("La valeur du maximum est de %f\n", max(tab, 8));
}
*/


// ------- Exercice 4 -------

	// Ecrire une fonction qui calcule le pgcd de deux nombres initialisés dans le programme
	// principal par l’utilisateur. La mettre en œuvre dans main()

/*
 fonction euclide(a, b)
	tant que b ≠ 0
	   t := b;
	   b := a modulo b;
	   a := t;
	retourner a
*/

/*
int pgcd(int a, int b)
{
	while (b != 0)
	{
		int t = b;
		b = a % b;
		a = t;
	}
	return a;
}

int main(int argc, char ** argv)
{
	int nbr1, nbr2, pgcd, i;
	printf("----------------PGCD----------------\n");
	printf("Entrez deux entiers: ");
	scanf("%d %d", &nbr1, &nbr2);
	printf("Le PGCD de %d et %d est égale à %d", nbr1, nbr2, pgcd(nbr1, nbr2));
	return 0;
}
*/

	
// ------- Exercice 5 -------

	// Ecrire une fonction qui calcule n ! c'est-à-dire : n != n*(n-1)*(n-2)*…3*2*1, avec n>=0 et 0 != 1
	// Avec n unsigned, int passé en paramètre et initialisé dans le programme principal par l’utilisateur.

/*
unsigned long long factorielle(unsigned long long n);

unsigned long long factorielle(unsigned long long n)
{
	if (n == 0)
		return 1;
	else
		return n * factorielle(n - 1);
}

int main(int argc, char** argv)
{
	unsigned long long n, result;
	printf("donner un nombre positif \n");
	scanf("%lld", &n);
	result = factorielle(n);
	printf("le factorielle n est egale \x085 %d", result);

	return 0;
}
*/


// ------- Exercice 6 -------

	// Ecrire une fonction de prototype « void inverse(char *ch) » qui permette de convertir un texte,
	// c’est à dire qui inverse le contenu d’une chaine de caractères. La mettre en œuvre dans main().
	// Ex :
	// "il fait beau" va donner "uaeb tiaf li"

/*
void inverse(char *chaine) // Fonction inverse
{
	printf("L inverse de votre texte est : ");
	for (int i = strlen(chaine) - 1; chaine[i] != '\0'; i--)
	{
		printf("%c", chaine[i]);
	}
}

int main(int argc, char** argv)
{
	TcpServer<SampleParser, ClientState> * server = new TcpServer<SampleParser, ClientState>(1234);


	char chaine[100];

	printf("Entrez votre texte\n");
	gets_s(chaine, 100);

	inverse(chaine);

	return 0;
}
*/
