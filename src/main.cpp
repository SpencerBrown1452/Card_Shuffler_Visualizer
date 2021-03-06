/*
 * File: main.cpp
 * Author: Spencer Brown
 * Date: 05/05/2022
 * Purpose: The main function of the program, the heart and soul
 */

#include "Shuffle.h"
#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector <int> arr{ 0,1,2,3,4,5,6,7,
			  8,9,10,11,12,13,14,15,
			  16,17,18,19,20,21,22,23,
			  24,25,26,27,28,29,30,31,
			  32,33,34,35,36,37,38,40,
			  41,42,43,44,45,46,47,48,
			  49,50,51 };
	arr.shrink_to_fit();

	int size = arr.size();

	Shuffle shuffler;
	arr = shuffler.shuffle(arr, size);

	for (auto const& i : arr) {
		cout << i << " ";
	}
	cout << endl;
	return 0;
}