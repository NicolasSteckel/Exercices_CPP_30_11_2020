#include "Vect.h"

vect::vect(int Max) {

	this->m_nMax = Max;
	this->m_fltV = new float[this->nMax];
}