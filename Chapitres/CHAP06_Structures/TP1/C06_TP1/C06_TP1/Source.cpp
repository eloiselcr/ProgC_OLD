#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>


// 1 / 4 Exercices 



// ------- Exercice 1 ------- 

	// Creer un programme qui definisse la structure fiche, qui saisisse une fiche et qui l'affiche.

/*
typedef struct Fiche
{
	char nom[50];
	char oryentation_polytyque[100];
	char anymal_domestyque[50];
	char vin_prefere[50];
	int activite_sexelle_par_semaine;
	int age;
} Fiche;


void initFiche (Fiche* p)
{
	printf("Rentrez votre nom : ");
	scanf("%s", p->nom); // nom
	printf("Rentrez votre oryentation polytyque : ");
	scanf("%s", p->oryentation_polytyque); // orientation po
	printf("Rentrez votre anymal_domestyque : ");
	scanf("%s", p->anymal_domestyque); // animal
	printf("Rentrez votre vin prefere : ");
	scanf("%s", p->vin_prefere); // vin
	printf("Rentrez votre age : ");
	scanf("%d", &p->age); // age
}


int main(int argc, char** argv)
{
	Fiche p1;
	initFiche(&p1);
	printf("Votre nom est : %s\n", p1.nom);
	printf("Votre orientation politique est : %s\n", p1.oryentation_polytyque);
	printf("Votre animal prefere est : %s\n", p1.anymal_domestyque);
	printf("Votre vin prefere : %s\n", p1.vin_prefere);
	printf("Votre age est : %d\n", p1.age);
}
*/


// ------- Exercice 2 ------- 

	// Creer un programme qui definisse une structure point qui permet de stocker les
	// coordonnees d�un point (2 reels) et qui permette de :
	// - Saisir 15 points
	// - puis les afficher

/*
typedef struct Coordonnees
{
	int abscissex; 
	int ordonneesy;
} Coordonnees;

void initCoordonnes(Coordonnees* p)
{
	int i;
	for (i = 0; i < 15; i++)
	{
		printf("Rentrez une abscisse pour le point %d :", i+1);
		scanf("%d", &p->abscissex + 1);
		printf("Rentrez une ordonnee pour le point %d :", i+1);
		scanf("%d", &p->ordonneesy + 1);
	}
}

int main(int argc, char ** argv)
{
	Coordonnees(p1);
	initCoordonnes(&p1);
	int i;
	for (i = 1; i < 15; i++)
	{
		printf("Le point a pour coordonnees en abscisse %d et en ordonnees %d.\n", p1.abscissex, p1.ordonneesy);
	}
}
*/

/*

typedef struct abscisse
{
	int abscisse1;
	int abscisse2;
	int abscisse3;
	int abscisse4;
	int abscisse5;
	int abscisse6;
	int abscisse7;
	int abscisse8;
	int abscisse9;
	int abscisse10;
	int abscisse11;
	int abscisse12;
	int abscisse13;
	int abscisse14;
	int abscisse15;
} abscisse;

typedef struct ordonn�
{
	int ordonn�1;
	int ordonn�2;
	int ordonn�3;
	int ordonn�4;
	int ordonn�5;
	int ordonn�6;
	int ordonn�7;
	int ordonn�8;
	int ordonn�9;
	int ordonn�10;
	int ordonn�11;
	int ordonn�12;
	int ordonn�13;
	int ordonn�14;
	int ordonn�15;
} ordonn�;


void initabscisse(abscisse* c)
{

	printf("veuillez saisir l'abscisse :");
	scanf("%d", &c->abscisse1);
	printf("veuillez saisir l'abscisse :");
	scanf("%d", &c->abscisse2);
	printf("veuillez saisir l'abscisse :");
	scanf("%d", &c->abscisse3);
	printf("veuillez saisir l'abscisse :");
	scanf("%d", &c->abscisse4);
	printf("veuillez saisir l'abscisse :");
	scanf("%d", &c->abscisse5);
	printf("veuillez saisir l'abscisse :");
	scanf("%d", &c->abscisse6);
	printf("veuillez saisir l'abscisse :");
	scanf("%d", &c->abscisse7);
	printf("veuillez saisir l'abscisse :");
	scanf("%d", &c->abscisse8);
	printf("veuillez saisir l'abscisse :");
	scanf("%d", &c->abscisse9);
	printf("veuillez saisir l'abscisse :");
	scanf("%d", &c->abscisse10);
	printf("veuillez saisir l'abscisse :");
	scanf("%d", &c->abscisse11);
	printf("veuillez saisir l'abscisse :");
	scanf("%d", &c->abscisse12);
	printf("veuillez saisir l'abscisse :");
	scanf("%d", &c->abscisse13);
	printf("veuillez saisir l'abscisse :");
	scanf("%d", &c->abscisse14);
	printf("veuillez saisir l'abscisse :");
	scanf("%d", &c->abscisse15);
}


void initordonn�(ordonn�* p)
{
	printf("veuillez saisir l'ordonn� :");
	scanf("%d", &p->ordonn�1);
	printf("veuillez saisir l'ordonn� :");
	scanf("%d", &p->ordonn�2);
	printf("veuillez saisir l'ordonn� :");
	scanf("%d", &p->ordonn�3);
	printf("veuillez saisir l'ordonn� :");
	scanf("%d", &p->ordonn�4);
	printf("veuillez saisir l'ordonn� :");
	scanf("%d", &p->ordonn�5);
	printf("veuillez saisir l'ordonn� :");
	scanf("%d", &p->ordonn�6);
	printf("veuillez saisir l'ordonn� :");
	scanf("%d", &p->ordonn�7);
	printf("veuillez saisir l'ordonn� :");
	scanf("%d", &p->ordonn�8);
	printf("veuillez saisir l'ordonn� :");
	scanf("%d", &p->ordonn�9);
	printf("veuillez saisir l'ordonn� :");
	scanf("%d", &p->ordonn�10);
	printf("veuillez saisir l'ordonn� :");
	scanf("%d", &p->ordonn�11);
	printf("veuillez saisir l'ordonn� :");
	scanf("%d", &p->ordonn�12);
	printf("veuillez saisir l'ordonn� :");
	scanf("%d", &p->ordonn�13);
	printf("veuillez saisir l'ordonn� :");
	scanf("%d", &p->ordonn�14);
	printf("veuillez saisir l'ordonn� :");
	scanf("%d", &p->ordonn�15);
}
*/

int main()
{
	/*
	abscisse c1;
	ordonn� p1;
	initordonn�(&p1);
	initabscisse(&c1);

	printf("\n votre point a pour cordonn�  : %d  %d", c1.abscisse1, p1.ordonn�1);
	printf("\n votre point a pour cordonn�  : %d  %d", c1.abscisse2, p1.ordonn�2);
	printf("\n votre point a pour cordonn�  : %d  %d", c1.abscisse3, p1.ordonn�3);
	printf("\n votre point a pour cordonn�  : %d  %d", c1.abscisse4, p1.ordonn�4);
	printf("\n votre point a pour cordonn�  : %d  %d", c1.abscisse5, p1.ordonn�5);
	printf("\n votre point a pour cordonn�  : %d  %d", c1.abscisse6, p1.ordonn�6);
	printf("\n votre point a pour cordonn�  : %d  %d", c1.abscisse7, p1.ordonn�7);
	printf("\n votre point a pour cordonn�  : %d  %d", c1.abscisse8, p1.ordonn�8);
	printf("\n votre point a pour cordonn�  : %d  %d", c1.abscisse9, p1.ordonn�9);
	printf("\n votre point a pour cordonn�  : %d  %d", c1.abscisse10, p1.ordonn�10);
	printf("\n votre point a pour cordonn�  : %d  %d", c1.abscisse11, p1.ordonn�11);
	printf("\n votre point a pour cordonn�  : %d  %d", c1.abscisse12, p1.ordonn�12);
	printf("\n votre point a pour cordonn�  : %d  %d", c1.abscisse13, p1.ordonn�13);
	printf("\n votre point a pour cordonn�  : %d  %d", c1.abscisse14, p1.ordonn�14);
	printf("\n votre point a pour cordonn�  : %d  %d", c1.abscisse15, p1.ordonn�15);
	*/

	for (int i = 0; i != -1; i++)
	{
		printf("I = %d", i);
	}
}


// ------- Exercice 3 ------- 

	// Reprendre l�exercice ci-dessus en creant une fonction � saisie � qui permet de saisir ces
	// points, une fonction � affiche � qui permet de les afficher.
	// Mettre en oeuvre ces deux fonctions dans main(). On ne devra voir apparaitre dans main() que
	// la declaration des differentes variables ainsi que l�appel aux fonctions.





