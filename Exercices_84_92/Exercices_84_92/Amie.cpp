#include<stdio.h>
#include"iostream"
#include"vecteur_3d.h"

vecteur_3d operator!=(vecteur_3d v1, vecteur_3d v2)
{
	bool test = false;

	if ((v1.getX() != v2.getX()) && (v1.getY() != v2.getY()) && (v1.getZ() != v2.getZ()))
	{
		test = true;
		std::cout << "Les vecteurs ne coincident pas." << "\n";
	}
	else
	{
		std::cout << "Les vecteurs coincident." << "\n";
	}

	return test;
}

vecteur_3d operator*(vecteur_3d v1, vecteur_3d v2)
{
	float stock_x, stock_y, stock_z;
	stock_x = v1.getX() * v2.getX();
	stock_y = v1.getY() * v2.getY();
	stock_z = v1.getZ() * v2.getZ();

	vecteur_3d V(stock_x, stock_y, stock_z);

	return V;
}