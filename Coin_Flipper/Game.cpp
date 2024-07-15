#include <iostream>
#include "Game.h"
using namespace std;



void Game::printFlipResults()
{
	for (Coin c : coins)
	{
		cout << "The " << c.getCentValue() << " cent coin is " << c.getIsHeads() << endl;
	}
}
void Game::flipCoins()
{
	for (Coin &c : coins) 
	{
		c.flip();
		c.getSideUp();
	}
}

void Game::printScore()
{
	cout << "Score: " << totalScore << endl;
}
int Game::getRounds()
{
	return rounds;
}
int Game::getScore()
{
	for (Coin c : coins)
	{
		if (c.getIsHeads() == true)
			totalScore += c.getCentValue();
	}

	return totalScore;
}

Game::Game() 
{
	totalScore = 0;
	rounds = 0;
}

void Game::playGame()
{
	do
	{
		flipCoins();
		for (Coin c : coins)
		{
			if (c.getIsHeads())
				totalScore += c.getCentValue();
		}
		printFlipResults();
		printScore();
		rounds++;
	} while (totalScore < 100);
	cout << "Rounds: " << rounds;
}