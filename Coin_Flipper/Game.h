#pragma once
#ifndef GAME_H
#define GAME_H

#include "Coin.h"

class Game
{
private:
	Coin coins[3] = {Coin (25),Coin (10), Coin(5)};
	int totalScore = 0;
	int rounds = 0;
	void printFlipResults();
	void flipCoins();

public:
	Game();
	void printScore();
	int getRounds();
	int getScore();
	void playGame();
};

#endif GAME_H