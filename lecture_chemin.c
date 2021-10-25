// VA : Permet de récupérer le chemin du fichier passé en argument lors de 
//      l'exécution du programme
char* lecture_chemin(char** arguments){
	char* chemin_fichier;
	chemin_fichier = arguments[1];
	return chemin_fichier;
}