/*
 * main.cpp
 *
 *  Created on: 5 Jan 2020
 *      Author: Subhan
 */

#include "Array.h"
#include "Array.cpp"
#include <iostream>

int main() {
	Array<int> intArray;
	for(int i = 0; i < 5; i++){
		intArray.add(rand() % 100);
	}
	cout << "First 5 in int array: " << endl;
	intArray.print();
	intArray.add(1);
	intArray.add(2);
	intArray.add(3);
	intArray.add(4);
	intArray.add(5);
	cout << "Second 5 in int array: " << endl;
	intArray.print();
	Array<double> doubleArray;

	for(int i = 0; i < 5; i++){
		doubleArray.add((double) rand() / (double) RAND_MAX);
	}
	cout << "Double Array: ";
	doubleArray.print();

	doubleArray.add(0.1);
	doubleArray.add(0.2);
	doubleArray.add(0.3);
	doubleArray.add(0.4);
	doubleArray.add(0.5);

	cout << "Double Array 2: ";
	doubleArray.print();
	return 0;
}
