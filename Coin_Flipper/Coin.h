#pragma once
#ifndef COIN_H
#define COIN_H

#include <string>

class Coin
{private:
	bool isHeads;
	const int CentValue;
public:
	Coin(int value);
	int getCentValue();
	void flip();
	bool getIsHeads();
	std::string getSideUp();
};


#endif // !COIN_H