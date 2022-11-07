
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>



// 0 / 6 Exercices 



// ------- Exercice 1 ------- 

	// Écrire une fonction de prototype int puissance(int a, int b) qui calcule, a puissance b
	// a et b étant des entiers et qui renvoie le résultat au programme appelant.
	// Dans main(), demandez à l’utilisateur d’entrer 2 valeurs x et y, puis grâce à la fonction
	// puissance vous calculerez xpuissy et vous afficherez le résultat obtenu

float puissance(float a, float b)

int main{
	printf("--- A a la puissance B ---")
	float a, b;
	printf("Entrez la valeur de A : ");
	scanf("%f", &a);
	printf("Entrez la valeur de B : ");
	scanf("%f", &b);

	printf("%f puissance %f - %f \n\n", a, b, puissance(n, b));

	return 0;
}

float puissance(float a, float b)
{
	float resultat = 1;
	resultat = pow(a, b);
	return resultat;
}

// ------- Exercice 2 ------- 

	// Un programme contient la déclaration suivante :
	// Int tab[10] = { 1,2,4,8,16,32,64,128,256,512 };
	// Écrire une fonction de prototype void affiche(int *t) qui affiche les éléments du tableau, et
	// leur position; la mettre en œuvre dans main().


// ------- Exercice 3 ------- 

	// Un programme contient la déclaration suivante :
	// Float liste[8] = { 1.6,-6.9,9.67,5.90,345,-23.6,78,34.6 };
	// Écrire une fonction de prototype float min(float* tab) qui renvoie le minimum de la liste.
	// Écrire une fonction de prototype float max(float *tab) qui renvoie le maximum de la liste.
	// Les mettre en œuvre dans main().


// ------- Exercice 4 -------

	// Écrire une fonction qui calcule le pgcd de deux nombres initialisés dans le programme
	// principal par l’utilisateur. La mettre en œuvre dans main()

	
// ------- Exercice 5 -------

	// Écrire une fonction qui calcule n ! c'est-à-dire : n != n*(n-1)*(n-2)*…3*2*1, avec n>=0 et 0 != 1
	// Avec n unsigned int passé en paramètre et initialisé dans le programme principal par l’utilisateur.


// ------- Exercice 6 -------

	// Écrire une fonction de prototype « void inverse(char *ch) » qui permette de convertir un texte,
	// c’est à dire qui inverse le contenu d’une chaine de caractères.la mettre en œuvre dans main().
	// Ex :
	// "il fait beau" va donner "uaeb tiaf li"