/*
 * Array.h
 *
 *  Created on: 5 Jan 2020
 *      Author: Subhan
 */

#ifndef ARRAY_H_
#define ARRAY_H_

#include <iostream>

using namespace std;

template <class T>
class Array {
public:
	Array();
	~Array();
	Array(const Array &a);

	T& operator [] (unsigned int index);
	void add(const T &item);
	void expand();

	unsigned int getSize();
	void print();
private:
	T* array;
	unsigned int currentSize;
	unsigned int cap;
};

#endif /* ARRAY_H_ */
