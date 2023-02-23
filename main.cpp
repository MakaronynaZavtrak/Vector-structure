#include "VectorStruct.cpp"
#include <iostream>
#include <math.h>
#include "Names.h"
#include <string>
using namespace std;
int summArr(int arr[]) {
	int result = 0;
	for (int i = 0; i < 3; i++) {
		result += *(arr + i);
	};
	return result;
}
int main()
{
	int c[3]{ 3,1, 2 };
	int b[3]{ 2,5,2 };
	int d[3]{ 2,2,2 };
		Vectors M;
	double x = M.findLength(c);// нахождения длины вектора
	printf("length is: ");
	printfEndl(x);

	int* z = M.summVectors(c, b);//сложение векторов
	printf("New vector is ");
	printNewVector(z);
	printfEndl(" ");

	int* normedVector = M.shortedNormed(c);//нормирование вектора с 
	printf("normed vector is: ");
	printNewVector(normedVector);
	printfEndl("");

	int scalarMult = M.scalMultiplication(c, b);//скалярное произведение векторов b и с 
	printf("scalar multiplication is: ");
	printf(scalarMult);
	printfEndl("");

	int mixedMult = M.mixedMultiplication(c, b, d);//смешанное произведение
	printf("mixed multiplication is : ");
	printf(mixedMult);
	printfEndl("");

	int* vectorMult = M.vectorMultiplication(c, b);//векторное произведение
	printf("vector multiplication is :");
	printNewVector(vectorMult);
	printfEndl("");

	int* tMultiplicated = M.someTMultiplication(4, d);//умножения вектора d на скаляр = 4
	printf("t multiplicated on d is: ");
	printNewVector(tMultiplicated);
	printfEndl("");

	int* normalVector = M.findNormalVector(c, b);//нахождение нормального вектора
	printf("normal vector is: ");
	printNewVector(normalVector);
	printfEndl("");
};
