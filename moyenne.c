// VA : Méthode permettant de calculer la moyenne du jeu de données
float moyenne(float* data, int indice_debut, int indice_fin){
	float m = 0;
	int i;
	for(i=indice_debut;i<indice_fin;i++){
		m = m + data[i];
	}
	// indice_fin - indice_debut permet de récupérer la taille
	// de la plage de données sur laquelle on souhaite faire
	// des modifications. Plutôt utile pour calculer une moyenne.
	m = m / (indice_fin - indice_debut);
	return m;
}