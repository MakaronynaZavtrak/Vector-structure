#include <iostream>
#include <math.h>
#include "Names.h"
#include <string>
struct Vectors {
	int* summVectors(int a[], int b[]) {
		int *new_vector = new int[3];
		for (int i = 0; i < 3; i++) {
			new_vector[i] = a[i] + b[i];
		};
		return new_vector;
	};

	double findLength(int a[]) {
		double ln = (sqrt(pow(*a, 2) + pow(*(a+1), 2) + pow(*(a+2), 2)));
		return ln;
	};
	int* shortedNormed(int a[]) {
		int *normed_vector = new int[3];
		for (int i = 0; i < 3; i++) {
			if (a[i] != 0) {
				normed_vector[i] = a[i] / abs(a[i]);
			}
			else {
				normed_vector[i] = 0;
			};
		};
		return normed_vector;
	};
	int scalMultiplication(int a[], int b[]) {
		int scal = 0;
		for (int i = 0; i < 3; i++) {
			scal += a[i] * b[i];
		};
		return scal;
	};
	int* vectorMultiplication(int a[], int b[]) {
		int *new_vector= new int[3];
		new_vector[0] = a[1] * b[2] - a[2] * b[1];
		new_vector[1] = -1 * (a[0] * b[2] - b[0] * a[2]);
		new_vector[2] = a[0] * b[1] - b[0] * a[1];
		return new_vector;
	};
	int mixedMultiplication(int a[], int b[], int c[]) {
		int result = a[0] * (b[1] * c[2] - c[1] * b[2]) - a[1] * (b[0] * c[2] - c[0] * b[2]) + a[2] * (b[0] * c[1] - c[0] * b[1]);
		return result;
	};
	int* someTMultiplication(int t, int a[]) {
		int *new_vector = new int[3];
		for (int i = 0; i < 3; i++) {
			new_vector[i] = t * a[i];
		};
		return new_vector;
	};
	int* findNormalVector(int a[], int b[]) {
		int A = a[1] * b[2] - b[1] * a[2];
		int B = -1 * (a[0] * b[2] - b[0] * a[2]);
		int C = a[0] * b[1] - b[0] * a[1];
		int *resultArr = new int[3]{ A,B,C };
		if (mixedMultiplication(a, b, resultArr) > 0) {
			return resultArr;
		}
		else {
			for (int i = 0; i < 3; i++) {
				resultArr[i] *= -1;
			};
			return resultArr;
		};
	};
};
template <class S>
void printfEndl( S result) {
	std::cout << result << std::endl;
};
template <typename T>
void printf(T result) {
	std::cout << result;
};
void printNewVector(int arr[]) {
	for (int i = 0; i < 3; i++) {
		std::cout << arr[i] << " ";
	};
};
