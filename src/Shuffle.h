/*
 * File: Shuffle.h 
 * Author: Spencer Brown
 * Date: 05/05/2022
 * Purpose: To define the shuffle class for randomly shuffling a deck of cards
 */

#ifndef SHUFFLE_H
#define SHUFFLE_H
#include <vector>

using namespace std;

class Shuffle {
public:
	//This function will be used to shuffle a desk of cards of n size.
	vector <int> shuffle(vector<int> cards, int size);
};

#endif /* SHUFFLE_H */