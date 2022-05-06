/*
 * File: Shuffle.cpp
 * Author: Spencer Brown
 * Date: 05/05/2022
 * Purpose: To initialize the shuffle class for randomly shuffling a deck of cards
 */

#include <bits/stdc++.h>
#include "Shuffle.h"

using namespace std;

void Shuffle::shuffle(int cards[], int n) {

	//Initialize random seed
	srand(time(0));

	//Randomly shuffle the deck using the random seed
	for (int i = 0; i < n; i++) {
		int r = i + (rand() % (n - i));
		swap(cards[i], cards[r]);
	}
}