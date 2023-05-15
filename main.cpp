#include <iostream>
#include "Struct.h"
using namespace std;

int main() 
{
	Vector V(-1, 1, 0);
	Vector Z(-2, 0, -3);
	double alpha = getAngle(V, Z);
	getRotatedVector(alpha, V);
}
