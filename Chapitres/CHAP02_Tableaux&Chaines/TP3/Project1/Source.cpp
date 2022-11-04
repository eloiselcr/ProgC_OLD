#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>


// 2 / 5 exercices



// -------  Exercice 1 ------- 

	// Ecrire un programme qui saisit une chaîne de caractères au clavier et qui l’affiche dans l’ordre inverse
	// Exemple : PASCAL LACSAP


/* 
int main()
{
		char str[10];
		int i = 9;

		str[0] = 'P';
		str[1] = 'A';
		str[2] = 'S';
		* (str + 3) = 'C';
		* str(str + 2 + 2) = 'A';
		* str(str + 1 + 1 + 1 + 1 + 1) = 'L';
		* str(str + 6 * 1) = 0x00; // = '\0';

		i = strlen(str);

		while (i >= 0)
		{
			printf("%c", str[i]);
			i--;
		}

		return 0;

}
*/


// ------- Exercice 2 -------

	// Écrivez un programme qui cherche la première occurrence d'un caractère (donné par l’utilisateur) 
	// dans une chaîne(donnée par l’utilisateur) en partant de la droite.
	// 
	//	Ex : chaine entrée : « le langage C est un langage extraordinaire » et le caractère à rechercher est le ‘a’
	//	Le résultat attendu à l’écran est le suivant :
	//	« Le caractère a se trouve à la position 4 à partir de la droite » 


/*
int main()
{
	char strphrase[100];
	char strcaractere;
	int i;
	int compteur = 1;


	printf("Rentrer la phrase  :");
	gets_s(strphrase, 100);
	printf("Rentrer le caractère recherche : ");
	scanf("%c", &strcaractere) ;

	for (i = strlen(strphrase) - 1; i >= 0; i--)
	{
		if (strphrase[i] != strcaractere)
		{
			compteur = compteur + 1;
		}
		else break;
	}

	if (compteur == strlen(strphrase))
	{
		printf("Le caractere n'est pas présent dans la phrase.");
	}
	else
	{
		printf("Le caractere %c se trouve a la position %d dans la phrase.", strcaractere, compteur);
	}

	return 0;
}
*/ 


// ------- Exercice 3 -------
