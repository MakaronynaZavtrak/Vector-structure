#include <iostream>
#include <math.h>
#include "Header.h"
#include <string>
using namespace std;

int main()
{
	int c[3]{ 3,1, 2 };
	int b[3]{ 2,5,2 };
	int d[3]{ 2,2,2 };
	Vectors M;
	M.printf("vector c: ");
	M.printNewVector(c);
	M.printfEndl("");

	M.printf("vector b: ");
	M.printNewVector(b);
	M.printfEndl("");

	M.printf("vector d: ");
	M.printNewVector(d);
	M.printfEndl("");

	double x = M.findLength(c);// нахождения длины вектора
	M.printf("length is: ");
	M.printfEndl(x);

	int* z = M.summVectors(c, b);//сложение векторов
	M.printf("New vector is ");
	M.printNewVector(z);
	M.printfEndl(" ");

	int* normedVector = M.shortedNormed(c);//нормирование вектора с 
	M.printf("normed vector is: ");
	M.printNewVector(normedVector);
	M.printfEndl("");

	int scalarMult = M.scalMultiplication(c, b);//скалярное произведение векторов b и с 
	M.printf("scalar multiplication is: ");
	M.printf(scalarMult);
	M.printfEndl("");

	int mixedMult = M.mixedMultiplication(c, b, d);//смешанное произведение
	M.printf("mixed multiplication is : ");
	M.printf(mixedMult);
	M.printfEndl("");

	int* vectorMult = M.vectorMultiplication(c, b);//векторное произведение
	M.printf("vector multiplication is :");
	M.printNewVector(vectorMult);
	M.printfEndl("");

	int* tMultiplicated = M.someTMultiplication(4, d);//умножения вектора d на скаляр = 4
	M.printf("t multiplicated on d is: ");
	M.printNewVector(tMultiplicated);
	M.printfEndl("");

	int* normalVector = M.findNormalVector(c, b);//нахождение нормального вектора
	M.printf("normal vector is: ");
	M.printNewVector(normalVector);
	M.printfEndl("");
};
