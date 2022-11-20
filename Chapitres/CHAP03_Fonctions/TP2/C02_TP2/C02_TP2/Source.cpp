#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>


// 1 / 4 Exercices 



// ------- Exercice 1 ------- 

	// Ecrire deux fonctions qui retourne une valeur entière permettant de savoir si l’entier passé en argument est multiple 
	// de deux et multiple de trois pour la seconde fonction.
	// Utiliser ces deux fonctions dans un petit programme qui lit un nombre entier et qui précise s’il est pair, 
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

	// Ecrire une fonction mot_de_passe permettant de saisir dans une chaîne de caractères passée en argument un mot de passe. 
	// Pour que ce mot de passe soit gardé secret, vous ferez en sorte qu’à chaque appui sur une touche, on fasse apparaître 
	// une étoile.
	// Dans le programme principal, vous appellerez la fonction mot de passe puis vous afficherez le mot de passe réel.
	// NB : Utiliser la fonction getch() permet de lire la valeur à stocker dans la chaîne.
	// Pour finir la saisie, appuyez sur la touche « ENTREE », qui possède le code ASCII 13.


// ------- Exercice 3 -------

	// Ecrire une fonction transforme qui permet de transformer les caractères minuscules en majuscule dans une chaine 
	// passée en argument.
	// La chaine modifiée sera affichée dans le programme principal, ainsi que le nombre de lettres qui ont subies une modification.


// ------- Exercice 4 -------

	// Il s'agit d'écrire quatre fonctions.
		// La première, « lire » permet d’entrer les valeurs dans un tableau dont la taille ne doit pas dépasser 20 éléments. 
		// La seconde, affiche, permet d’afficher le tableau trié.
		// La troisième, « indice_min », doit, étant donnés deux indices d'un tableau, indiquer celui en lequel est rangée 
		// la plus petite donnée.
		// La quatrième, « trier », doit obligatoirement utiliser la fonction indice_min pour trier le tableau. 
		// Pour cela, on utilisera un "tri à bulle".
