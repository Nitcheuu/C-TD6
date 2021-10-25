#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* lecture_chemin(char**);
float* lecture_fichier(char*);

// VA : Permet de lire les données du fichier passé en argument lors de l'exécution du
//      programme
float* lecture_donnees(char** arguments){
	char* chemin_fichier;
	float *data;
	chemin_fichier = lecture_chemin(arguments);
	data = lecture_fichier(chemin_fichier);
	return data;
}

