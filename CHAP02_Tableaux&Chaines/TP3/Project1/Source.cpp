#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>


// 2 / 5 exercices



// -------  Exercice 1 ------- 

	// Ecrire un programme qui saisit une cha�ne de caract�res au clavier et qui l�affiche dans l�ordre inverse
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

	// �crivez un programme qui cherche la premi�re occurrence d'un caract�re (donn� par l�utilisateur) 
	// dans une cha�ne(donn�e par l�utilisateur) en partant de la droite.
	// 
	//	Ex : chaine entr�e : � le langage C est un langage extraordinaire � et le caract�re � rechercher est le �a�
	//	Le r�sultat attendu � l��cran est le suivant :
	//	� Le caract�re a se trouve � la position 4 � partir de la droite � 


/*
int main()
{
	char strphrase[100];
	char strcaractere;
	int i;
	int compteur = 1;


	printf("Rentrer la phrase  :");
	gets_s(strphrase, 100);
	printf("Rentrer le caract�re recherche : ");
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
		printf("Le caractere n'est pas pr�sent dans la phrase.");
	}
	else
	{
		printf("Le caractere %c se trouve a la position %d dans la phrase.", strcaractere, compteur);
	}

	return 0;
}
*/ 


// ------- Exercice 3 -------
