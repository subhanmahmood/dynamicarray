/*
 * Array.cpp
 *
 *  Created on: 1 Jan 2020
 *      Author: Subhan
 */
#include "Array.h"
#include <cstdlib>
#include <iostream>



template <class T>
Array<T>::Array() {
	currentSize = 0;
	cap = 5;
	array = new T[cap];
}

template <class T>
Array<T>::Array(const Array<T> &a) {
	currentSize = a.currentSize;
	cap = a.cap;
	array = a.array;
}

template <class T>
Array<T>::~Array() {
	delete [] array;
}

template <class T>
T& Array<T>::operator [] (unsigned int index) {
	return array[index];
}

template <class T>
void Array<T>::expand() {
	T* temp;
	cap *= 2;
	temp = new T[cap];
	for(unsigned int i = 0; i < currentSize; i++) {
		temp[i] = array[i];
	}
	delete [] array;
	array = temp;
	delete [] temp;
}

template <class T>
void Array<T>::add(const T &item) {
	if(currentSize == cap) {
		expand();
		add(item);
	} else {
		if(currentSize > 0) {
			for(unsigned int i = currentSize; i > 0; i--) {
				array[i] = array[i - 1];
			}
		}
		currentSize++;
		array[0] = item;
	}
}

template <class T>
void Array<T>::print() {
	for(unsigned int i = 0; i < currentSize; i++) {
		cout << array[i] << endl;

	}
	cout << "---------" << endl;
}

template <class T>
unsigned int Array<T>::getSize() {
	return currentSize;
}


using namespace std;
