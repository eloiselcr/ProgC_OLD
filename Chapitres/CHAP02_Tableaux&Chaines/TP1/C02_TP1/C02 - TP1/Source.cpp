#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>


// 2 / 4 Exercices 



// -------  Exercice 1 ------- 

	// Réaliser le programme en langage C permettant de lire 10 nombres entiers dans un tableau
	// avant d’en chercher le plus grand et le plus petit.

/*
int main(int argc, char ** argv)
{




}

*/
// -------  Exercice 2 -------

	// Soient deux tableaux t1 et t2 déclarés ainsi :
	//		float t1[10], t2[10] ;
	// Réalisez le programme en langage C permettant de recopier dans t1 tous les éléments positifs de t2.

/*
int main(int argc, char ** argv)
{
	int i = 0;
	float t1[10];
	float t2[20];

	do
	{
		printf("Entrez une valeur : ");
		scanf("%?", t2);
	} while (i < 10);

	int j = 1;
	{
		if (t2[i] < 0);
		t1[j] = t2[j];
	}

	for (int i = 0; 1 < 10; i++);
	{
		printf("%c", t1[j]);
	}

	return 0;
}
*/

// -------  Exercice 3 -------
	
	// Soit le tableau t déclaré ainsi :
	//		float t[10] ;
	// Réalisez un programme en C permettant de calculer dans une variable somme, la somme des éléments de t.

/*
int main(int argc, char ** argv)
{
	float t[10], somme = 0;

	for (int i = 0; i < 10; i++)
	{
		printf("Entrez une valeur : ");
		scanf("%f", &t[i]);
		somme += t[i];
	}

	printf("La somme vaut %d \n", somme);

	_getch();
	return 0;
}
*/

// -------  Exercice 4 -------