#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, n, a, s, p;
	float m;
	//Initialisation a ne pas oublier!!!
	s = 0;
	p = 1;
	printf("Donner le nombre d'entiers: ");
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		printf("Entrer l'entier %d: ", i);
		scanf("%d", &a);
		s = s + a;
		p = p * a;
	}
	m = (float)s / n;  //Pour ne pas avoir une division entiere

	printf("\nLa Somme des valeurs: %d\n", s);
	printf("Le Produit des valeurs: %d\n", p);
	printf("La Moyenne des valeurs: %.2f\n", m);
}
