#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float* lecture_donnees(char**);
void statistiques(float*, float*, int, int);
void afficher_statistiques(float*, char*);


int main(int argn, char* argv[]){
	//// DECLARATION ZONE
	float *data; // Pointeur qui contiendra le tableau de toutes les données
	float *statistiques_setosa = (float*)malloc(3*sizeof(float)); // Taille 3 car 3 donneés statistiques
	float *statistiques_versicolor = (float*)malloc(3*sizeof(float));
	float *statistiques_virginica= (float*)malloc(3*sizeof(float));

	//// PROGRAMME ZONE

	// Si le nombre d'arguments n'est pas égal à deux alors soit il y a trop d'aguments
	// soit il n'y en a pas assez ce qui produit un risque de platage du programme
	// c'est pourquoi on préfère arrêter le programme si une telle situation se produit
	if(argn!=2){
		printf("Vous devez renseigner le chemin du fichier\n");
		exit(1);
	}

	// Stockage du contenu dans le tableau data
	data = lecture_donnees(argv);

	// Calcul des statistiques
	// Les deux derniers chiffres représent la plage de données du tableau data
	// sur laquelle on souhaite effectuer des statistiques
	statistiques(data, statistiques_setosa, 0, 50);
	statistiques(data, statistiques_versicolor, 50, 100);
	statistiques(data, statistiques_virginica, 100, 150);

	afficher_statistiques(statistiques_setosa, "setosa");
	afficher_statistiques(statistiques_versicolor, "versicolor");
	afficher_statistiques(statistiques_virginica, "virginica");

	exit(0);
}