// VA : Méthode permettant de retourner la plus grande valeur du jeu de données
float max(float* data, int indice_debut, int indice_fin){
	// Par défaut m prend une valeur du tableau pour être sûr de ne pas
	// retourner un résultat faux
	float m = data[0];
	int i;
	for(i=indice_debut;i<indice_fin;i++){
		if(data[i]>m){
			m = data[i];
		}
	}
	return m;
}