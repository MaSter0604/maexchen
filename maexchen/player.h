#pragma once

#include <iostream>
class player
{
public:
	std::string getName() { return name; }
	void setName(std::string name) { this->name = name; }
	int wuerfeln();
private:
	std::string name = "";
	int nPoints = 0;
	bool aussage = true;
};

