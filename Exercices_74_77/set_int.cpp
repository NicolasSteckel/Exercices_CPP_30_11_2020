#include <stdio.h>
#include <iostream>
#include "set_int.h"

using namespace std;

//Constructeur
set_int::set_int(int max)
{
	int i, test = 0, val = 0, compteur = 0;

	this->compt_int = 0;
	this->taille = max;
	this->adrTab = new int[this->taille];

	for (i = 0; i < taille; i++){
		this->adrTab[i] = 0;
	}

	while (test == 0){
		std::cout << "Tapez 0 pour entrer un nouvel element. Sinon, tapez 1.\n";
		std::cin >> test;

		if (test == 0)
		{
			std::cout << "Donnez un nouvel entier a rentrer\n";
			std::cin >> val;

			for (i = 0; i < taille; i++){		//Parcours du tableau pour trouver un emplacement dispo
			
				if (this->adrTab[i] == 0){		//V�rification si l'espace est utilis�
				
					this->adrTab[i] = val;
					this->compt_int++;
					compteur++;					//Permet de d�terminer le nombre d'�l�ments pr�sent dans le tableaux
					break;
				}
			}
		}
		else{
			std::cout << "Fin du remplissage\n";
			std::cout << "Il y a " << compteur << " cases du tableau utilisees\n";

			for (i = 0; i < taille; i++){
			
				std::cout << this->adrTab[i];
			}
		}
	}
}

set_int::set_int(set_int& tabl){		//Constructeur par copie
	int i, test = 0, val = 0, compteur = 0;

	this->compt_int = tabl.compt_int;
	this->taille = tabl.taille;
	this->adrTab = new int[this->taille];

	for (i = 0; i < taille; i++)
	{
		this->adrTab[i] = tabl.adrTab[i];
	}
}

set_int::~set_int()
{
}

void set_int::entier(int n)
{
	int i;
	bool pres = false;

	//std::cout << "JAAJ\n";
	//std::cout << compt_int;

	for (i = 0; i < this->compt_int; i++)
	{
		//std::cout << "JooJ\n";
		if (this->adrTab[i] == n)
		{
			pres = true;
		}
	}

	if (pres == true)
	{
		std::cout << "Entier demande present\n";
	}
	else
	{
		std::cout << "Entier demande non present\n";
	}
}

void set_int::distinct()
{
	int i, j, res = 0;

	for (i = 0; i < this->compt_int; i++)	//v�rification des �l�ments l'un apr�s l'autre
	{
		for (j = 0; j < i; j++){
			if (this->adrTab[i] == this->adrTab[j])
			{
				break;
			}
		}

		if (i == j){
			res++;
		}
	}

	std::cout << "\n Il y a " << res << " elements differents dans le tableau \n";
}
