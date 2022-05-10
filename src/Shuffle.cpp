/*
 * File: Shuffle.cpp
 * Author: Spencer Brown
 * Date: 05/05/2022
 * Purpose: To initialize the shuffle class for randomly shuffling a deck of cards
 */

#include <bits/stdc++.h>
#include "Shuffle.h"
#include <vector>

using namespace std;

vector <int> Shuffle::shuffle(vector<int> cards, int size) {

	//Initialize random seed
	srand(time(0));

	//Randomly shuffle the deck using the random seed
	for (int i = 0; i < size - 1; i++) {
		int r = i + rand() % (size - i);
		swap(cards[i], cards[r]);
	}
	return cards;
}