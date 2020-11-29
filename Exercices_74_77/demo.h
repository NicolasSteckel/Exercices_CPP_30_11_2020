#pragma once

#include<iostream>

using namespace std;

class demo
{
	int x, y;
public:
	demo(int abs = 1, int ord = 0) {
		x = abs; y = ord;
		cout << "constructeur I : " << x << y << "\n";
	}


	demo(demo&);

	~demo();

};