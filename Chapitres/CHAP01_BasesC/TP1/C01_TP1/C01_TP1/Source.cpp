#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h> //pour getch()


// 7 / 7 Exercices 



// -------  Exercice 1 -------

	// Testez ce programme : 

/*
main()
{
	int nb;
	printf("entrez un nombre compris entre 1 et 1000\n");
	scanf("%d", &nb);
	printf("le caract�re lu est : %d \n", nb);
	getch();
}
*/


// -------  Exercice 2 -------

	// Testez ce programme : 

/*
main()
{
	int x = 4, y;
	y = (x > 5) && (x < 8);
	printf("prem �valuation : \t x = %d y = %d\n", x, y); //x=4 y=0
	x = y + x + 2;
	y = (x > 5) && (x < 7);
	printf("2�me �valuation : \t x = %d y = %d\n", x, y); //x=6 y=1
	getch();
}
*/


// -------  Exercice 3 -------

	// Testez ce programme : 

/*
main()
{
	float x;
	printf("entrez votre nombre");
	scanf("%f", &x);
	if (!x) //x vaut 0
		printf("erreur de saisie");
	else
		printf("l�inverse du nombre est : %f", 1 / x);
	getch();
}
*/


// -------  Exercice 4 -------

	// Ecrire un programme en C qui calcule et affiche la somme des entiers de 1 � N, sans utiliser de formules.
	// N sera donn� par l�utilisateur et doit �tre sup�rieur ou �gal � 1 et vous utiliserez une
	// boucle tantque.
	// Ex�cutez ensuite votre programme avec 5 comme valeur pour N.

/*
int main(int argc, char ** argv)
{
	int N;
	int nb;
	int nbc;

	printf("saisir un nombre:");
	scanf_s("%d", &N);

	nb = 1;
	nbc = 0;
	while (nb <= N)
	{
		nbc += nb;
		printf("nb= %d nbc=%d\n", nb, nbc);
		nb + = 1;
	}
}
*/


// -------  Exercice 5 -------

	// Pour calculer le montant d�une facture, on demande � l�utilisateur d�entrer le montant de l�article d�sir� 
	// puis le nombre d�exemplaire attendu.
	// On d�sire �crire un programme en C qui permette de lire les informations n�cessaires � la cr�ation 
	// de la facture, puis afficher le montant de celle ci sachant qu�on effectue une remise de 10 % lorsque 
	// le montant d�passe 500�.


/*
int main(int argc, char ** argv)
{
	int nombre;
	float montant;
	float total;

	printf("saisir un montant pour l'article");
	scanf_s("%f", &montant);
	printf("saisir un nombre d'article");
	scanf_s("%d", &nombre);

	total = montant * nombre;
	if (total >= 500)
	{
		total *= 0.90;
	}

	printf("\nLe montant total est de : %.2f", total);
}
*/


// -------  Exercice 6 -------

	// On d�sire �crire un programme en C qui permette de saisir les notes d'une mati�re pour chaque �l�ve 
	// d'une classe. Si l'utilisateur saisi une note sup�rieure � 20 ou inf�rieure � 0, on stoppe la saisie.
	// On souhaite ensuite afficher le nombre de notes qui sont sup�rieures � 10.

/*
int main(int argc, char ** argv)
{
	float noteE;
	int nombreE;
	int noteSup;
	int I;

	noteE = 0;
	noteSup = 0;
	printf("entrez le nombre d'eleve :");
	scanf_s("%d", &nombreE);

	for (I = 0; I < nombreE; I++)
	{
		printf("\nSaisir note:");
		scanf_s("%f", &noteE);
		if (noteE < 0 || noteE>20)
		{
			exit(EXIT_SUCCESS);
		}
		if (noteE > 10)
		{
			noteSup += 1;
		}
	}
	printf("\nIl y a %d �l�ves au dessus de 10", noteSup);
	getch();
}
*/


// -------  Exercice 7 -------

	// On veut calculer et afficher la moyenne de 30 notes donn�es al�atoirement par l�ordinateur
	// (fonction random � utiliser voir aide embarcadero).
	// Ecrire un programme en C qui fait cette moyenne.

/*
int main(int argc, char ** argv)
{
	int i;
	float moyen;
	float note;
	moyen = 0;
	srand(time(NULL));
	for (i = 0; i < 30; i++)
	{
		note = ((float)rand() / RAND_MAX * 20);
		printf("%f\n", note);
		moyen += note;
	}
	moyen /= 30;
	printf("la moyenne est de %.2f/20", moyen);
}
*/
