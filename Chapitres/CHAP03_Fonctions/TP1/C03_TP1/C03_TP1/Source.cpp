
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>



// 0 / 6 Exercices 



// ------- Exercice 1 ------- 

	// �crire une fonction de prototype int puissance(int a, int b) qui calcule, a puissance b
	// a et b �tant des entiers et qui renvoie le r�sultat au programme appelant.
	// Dans main(), demandez � l�utilisateur d�entrer 2 valeurs x et y, puis gr�ce � la fonction
	// puissance vous calculerez xpuissy et vous afficherez le r�sultat obtenu

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

	// Un programme contient la d�claration suivante :
	// Int tab[10] = { 1,2,4,8,16,32,64,128,256,512 };
	// �crire une fonction de prototype void affiche(int *t) qui affiche les �l�ments du tableau, et
	// leur position; la mettre en �uvre dans main().


// ------- Exercice 3 ------- 

	// Un programme contient la d�claration suivante :
	// Float liste[8] = { 1.6,-6.9,9.67,5.90,345,-23.6,78,34.6 };
	// �crire une fonction de prototype float min(float* tab) qui renvoie le minimum de la liste.
	// �crire une fonction de prototype float max(float *tab) qui renvoie le maximum de la liste.
	// Les mettre en �uvre dans main().


// ------- Exercice 4 -------

	// �crire une fonction qui calcule le pgcd de deux nombres initialis�s dans le programme
	// principal par l�utilisateur. La mettre en �uvre dans main()

	
// ------- Exercice 5 -------

	// �crire une fonction qui calcule n ! c'est-�-dire : n != n*(n-1)*(n-2)*�3*2*1, avec n>=0 et 0 != 1
	// Avec n unsigned int pass� en param�tre et initialis� dans le programme principal par l�utilisateur.


// ------- Exercice 6 -------

	// �crire une fonction de prototype � void inverse(char *ch) � qui permette de convertir un texte,
	// c�est � dire qui inverse le contenu d�une chaine de caract�res.la mettre en �uvre dans main().
	// Ex :
	// "il fait beau" va donner "uaeb tiaf li"