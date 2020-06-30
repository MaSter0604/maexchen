#pragma once

#include "player.h"

class game
{
public:
	void startGame();
private:
	bool computer = false;
	player order[10];
};

