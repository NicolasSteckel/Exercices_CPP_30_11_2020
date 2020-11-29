#pragma once


class set_int
{
private:
	int compt_int = 0;	//Nombre maximum d'éléments
	int taille = 0;		//Taille du tableau
	int check = 0;		//Stockage du nombre dont il faut vérifier l'existence dans le tableau
	int* adrTab;		//Adresse du tableau

public:
	set_int(int max);
	set_int(set_int& tabl);
	~set_int();


	void entier(int n);
	void distinct();
};