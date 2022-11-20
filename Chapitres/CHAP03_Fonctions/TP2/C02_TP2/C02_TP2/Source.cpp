#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>


// 1 / 4 Exercices 



// ------- Exercice 1 ------- 

	// Ecrire deux fonctions qui retourne une valeur enti�re permettant de savoir si l�entier pass� en argument est multiple 
	// de deux et multiple de trois pour la seconde fonction.
	// Utiliser ces deux fonctions dans un petit programme qui lit un nombre entier et qui pr�cise s�il est pair, 
	// multiple de 3 et / ou multiple de 6.

/*
int multiple2(int value)
{
	return value % 2 == 0;
}

int multiple3(int value)
{
	return value % 3 == 0;
}

int main(int argc, char** argv)
{
	int var, mult2, mult3;
	printf("Entrer une valeur : ");
	scanf("%d", &var);

	mult2 = multiple2(var);
	mult3 = multiple3(var);

	printf("%d est %s\n", var, (mult2 == 1 ? "pair" : "impair"));
	printf("%d %s\n", var, (mult3 == 1 ? "est multiple de Troie" : "n'est pas multiple de Troyes"));
	printf("%d %s\n", var, ((mult2 == 1 && mult3 == 1) ? "est multiple de Siss" : "n'est pas multiple de Ciss"));

	return 0;
}
*/

// ------- Exercice 2 -------

	// Ecrire une fonction mot_de_passe permettant de saisir dans une cha�ne de caract�res pass�e en argument un mot de passe. 
	// Pour que ce mot de passe soit gard� secret, vous ferez en sorte qu�� chaque appui sur une touche, on fasse appara�tre 
	// une �toile.
	// Dans le programme principal, vous appellerez la fonction mot de passe puis vous afficherez le mot de passe r�el.
	// NB : Utiliser la fonction getch() permet de lire la valeur � stocker dans la cha�ne.
	// Pour finir la saisie, appuyez sur la touche � ENTREE �, qui poss�de le code ASCII 13.


// ------- Exercice 3 -------

	// Ecrire une fonction transforme qui permet de transformer les caract�res minuscules en majuscule dans une chaine 
	// pass�e en argument.
	// La chaine modifi�e sera affich�e dans le programme principal, ainsi que le nombre de lettres qui ont subies une modification.


// ------- Exercice 4 -------

	// Il s'agit d'�crire quatre fonctions.
		// La premi�re, � lire � permet d�entrer les valeurs dans un tableau dont la taille ne doit pas d�passer 20 �l�ments. 
		// La seconde, affiche, permet d�afficher le tableau tri�.
		// La troisi�me, � indice_min �, doit, �tant donn�s deux indices d'un tableau, indiquer celui en lequel est rang�e 
		// la plus petite donn�e.
		// La quatri�me, � trier �, doit obligatoirement utiliser la fonction indice_min pour trier le tableau. 
		// Pour cela, on utilisera un "tri � bulle".
