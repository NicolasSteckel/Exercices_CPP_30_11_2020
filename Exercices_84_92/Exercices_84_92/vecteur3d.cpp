#include"iostream"
#include "vecteur3d.h"

float& vecteur3d::operator[](int n)
{
	if (n > 3 || n < 1)
	{
		std::cout << "Vous sortez de la limite du tableau\n";
		exit(1);
	}
	else
	{
		n = n - 1;
	}

	return this->v[n];
}

float vecteur3d::operator[](int n) const
{
	if (n > 3 || n < 1)
	{
		std::cout << "Vous sortez de la limite du tableau\n";
		exit(1);
	}
	else
	{
		n = n - 1;
	}

	return this->v[n];
}

float vecteur3d::getX()
{
	return this->v[0];
}

float vecteur3d::getY()
{
	return this->v[1];
}

float vecteur3d::getZ()
{
	return this->v[2];
}

void vecteur3d::setX()
{
	this->v[0] = v[0];
}

void vecteur3d::setY()
{
	this->v[1] = v[1];
}

void vecteur3d::setZ()
{
	this->v[2] = v[2];
}