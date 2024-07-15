#include <string>
#include "Coin.h"
#include <ctime>
#include <iostream>

using namespace std;

Coin::Coin(int value) :

CentValue(value) {

	flip();

}

void Coin:: flip() {
	
	isHeads = (rand() % 2 == 0);

}

bool Coin::getIsHeads() {
	return isHeads;
}

string Coin:: getSideUp() {

	string heads;

	if (isHeads == true) {
		string heads = "Heads";
	}
	else {
		string heads = "Tails";
	}

	string output = "The " + to_string(CentValue) + " is " + heads + "\n";

	return output;
}

int Coin::getCentValue() {
	return CentValue;
}