#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h> 
#include <sys/stat.h> 
#include <fcntl.h>

// VA : Permet de lire le contenu du fichier passé en paramètres du service
float* lecture_fichier(char* chemin_fichier){
	// 150 car il y 150 nombres réels dans le fichier
	float* data = (float*)malloc(150*sizeof(float)); 
	int fichier;
	// Ouverture du fichier
	fichier = open(chemin_fichier, O_RDONLY); // Mode lecture seulement
	// Lecture du fichier et stockage des données dans data
	read(fichier, data, 150 * sizeof(float));
	// Fermeture du fichier
	close(fichier);
	return data;
}	
