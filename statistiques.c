#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float moyenne(float*, int, int);
float min(float*, int, int);
float max(float*, int, int);

// VA : Méthode permettant d'effectuer des statistiques basiques sur un jeu de données passé
//      en paramètres.
void statistiques(float* data, float* stats, int indice_debut, int indice_fin){
	stats[0] = min(data, indice_debut, indice_fin);
	stats[1] = moyenne(data, indice_debut, indice_fin);
	stats[2] = max(data, indice_debut, indice_fin);
	// Retourner le tableau n'est pas nécessaire car il est passé par adresse
	// par défaut
}
