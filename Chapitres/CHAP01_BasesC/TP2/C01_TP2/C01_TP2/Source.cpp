#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h> //pour getch()


// 4 / 5 Exercices 



// -------  Exercice 1 -------

	// Ecrire un programme qui calcule le produit de 2 nombres a et b, sans utiliser 
	// l�op�ration de multiplication.

/*
int main(int argc, char ** argv)
{
	float a;
	float b;
	float temp;
	int I = 1;

	printf("saisir un nombre  :");
	scanf_s("%f", &a);

	temp = a;

	printf("saisir un nombre :");
	scanf_s("%f", &b);

	for (I; I < b; I++)
	{
		a += temp;
	}

	printf("le r�sultat de la multiplication est de %.2f", a);
}
*/


// -------  Exercice 2 -------

	// Ecrire un programme qui permet d�entrer 3 nombres entiers au clavier, puis les affiche 
	// � l��cran dans l�ordre croissant.

/*
int main(int argc, char ** argv)
{
	int a = 0, b = 0, c = 0, max, mil, min;

	printf("entrez trois nombre entier :");
	scanf("%d %d %d", &a, &b, &c);

	if (a > b && a > c) { max = a; }
	if (b > a && b > c) { max = b; }
	if (c > b && c > a) { max = c; }
	if (a > b && a < c) { mil = a; }
	if (b > a && b < c) { mil = b; }
	if (c > b && c < a) { mil = c; }
	if (a < b && a < c) { min = a; }
	if (b < a && b < c) { min = b; }
	if (c < b && c < a) { min = c; }

	printf("ranger dans l'ordre croissant %d %d %d", min, mil, max);
}
*/


// -------  Exercice 3 -------

	// Les tarifs d�affranchissement d�une lettre sont les suivants :
	//		Au dessous de 20 g : 3.00 frs
	//		A partir de 20 g et endessous de 50 g : 3.95 frs
	//		A partir de 50 g : 5.90 frs
	// Ecrire le programme qui d�livre le tarif pour un poids(donn� au clavier).

/*
int main(int argc, char ** argv)
{
	float poids;

	printf("saisir un nombre:");
	scanf_s("%f", &poids);

	if (poids < 20)
	{
		printf("vous devez payer 3frs");
	}
	if (poids >= 20 && poids < 50)
	{
		printf("vous devrez payer 3.95frs");
	}
	else {
		printf("vous devez payer 5.90frs");
	}
} 
*/


// -------  Exercice 4 -------

	// On d�sire effectuer un questionnaire aupr�s des �l�ves d�un lyc�e afin de conna�tre
	// mieux leurs activit�s extra - scolaires.
	// R�alisez un programme demandant � chaque �l�ve, son �ge, son sexe, le nombre de fois o� 
	// il va au cin�ma par mois, si il pr�f�re le Quick ou le Mac Donald, le nombre de fois o� il 
	// y va par mois, si il pratique un sport et si oui pratique t - il un sport parmi :
	//		foot, tennis, basket, judo, natation ? 
	// Quand l��l�ve a entr� toutes les informations, affichez lui le r�capitulatif des r�ponses 
	// � son questionnaire, puis passez � l��l�ve suivant.


// -------  Exercice 5 -------	

	// Ecrire un programme qui affiche � la table de multiplication � des nombres de 1 � x, sous la 
	// forme ci - dessous, x �tant une donn�e entr�e au clavier comprise entre 2 et 10 :
	
/*
int main(int argc, char ** argv)
{
	int x = 0, i, j, resultat;

	while (x < 2 || x > 10)
	{
		printf("Rentrez une valeur de x comprise entre 2 et 10 : ");
		scanf("%d", &x);
	}

	printf("\t|");

	for (i = 1; i <= x; i++)
	{
		printf("%3d ", i);
	}

	printf("\n-------------------------------------------------------\n");

	for (i = 1; i <= x; i++) {
		printf("%d	|", i);

		for (j = 1; j <= x; j++) {
			resultat = i * j;
			printf("%3d ", resultat);
		}

		printf("\n");
	}
}
*/
