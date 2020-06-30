#include "player.h"

int player::wuerfeln()
{
	int num1 = 0;
	int num2 = 0;
	int erg = 0;
	num1 = std::rand() % 5 + 1;
	num2 = std::rand() % 5 + 1;

	if (num1 < num2)
		erg = num2 * 10 + num1;
	else
		erg = num1 * 10 + num2;
	return erg;
}
