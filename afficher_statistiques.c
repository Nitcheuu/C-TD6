#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// VA : Méthode permettant d'afficher en console des statistiques
void afficher_statistiques(float* statistiques, char* nom_espece){
	printf("Statistiques pour l'espece %s\n", nom_espece);
	printf("-Moyenne : %f\n", statistiques[1]);
	printf("-Min : %f\n", statistiques[0]);
	printf("-Max: %f\n", statistiques[2]);
}