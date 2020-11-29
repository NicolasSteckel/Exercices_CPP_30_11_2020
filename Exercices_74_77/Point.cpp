#include<stdio.h>
#include<iostream>
#include"Point.h"

point::point() {
	std::cout << "Entrez un numero de point : \n";
	std::cin >> num;
	std::cout << "Numero point cree : " << num << "\n";
}

point::~point() {
	std::cout << "Numero point detruit : " << num << "\n";
}