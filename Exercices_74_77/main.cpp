#include<stdio.h>
#include<iostream>
#include"chose.h"
#include"d�mo.h"

int main()
{
	//-----------------------------------------------------------------------------------------------------------------------------------------
	//74
	chose ch1;

	ch1.affichage();

	ch1.~chose();

	chose* adc = new chose;

	//-----------------------------------------------------------------------------------------------------------------------------------------
	//75
	void fct(demo, demo*);

	std::cout << "D�but main\n";

	demo a;
	demo b = 2;
	demo c = a;
	demo* adr = new demo(3, 3);

	fct(a, adr);

	demo d = demo(4, 4);
	c = demo(5, 5);

	std::cout << "Fin main\n";

	return 0;
}

void fct(demo d, demo* add)
{
	std::cout << "entr�e fct\n";
	delete add;
	std::cout << " sortie \n";
}