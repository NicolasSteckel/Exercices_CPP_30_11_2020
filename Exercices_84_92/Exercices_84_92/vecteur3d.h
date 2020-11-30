#pragma once

class vecteur3d
{
private:
	float v[3];

public:
	vecteur3d(float c1 = 0.0, float c2 = 0.0, float c3 = 0.0)
	{
		v[0] = c1;
		v[1] = c2;
		v[2] = c3;
	}

	float& operator[](int n);
	float operator[](int n) const;

	float getX();
	float getY();
	float getZ();

	void setX();
	void setY();
	void setZ();
};