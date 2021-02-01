#include <iostream>
#include <stdio.h>

struct penis {
	double length;
	double radius;
	double ballSize;
	std::string colour;
	double pubeLength;
	std::string pubeColour;
	std::string nickname;
};

void printCock(penis cock) {
	std::cout << "Penis: " << cock.nickname << "\n" << "Length: " << cock.length << "\"\n" << "Cock diameter: " << cock.radius << "\"\n" << "Balls diameter: " << cock.ballSize << "\"\n" << "Cock colour: " << cock.colour << "\n" << "Pubic hair length: " << cock.pubeLength << "\"\n" << "Pubic hair colour: " << cock.pubeColour << "\n" << std::endl;
};

int main()
{
	penis mine{ 7.2, 1.8, 2.7, "White", 1.3, "Black", "Got milk?" };
	penis femboyCrusher{ 9.8, 2.1, 3.8, "Black", 0.8, "Black", "Femboy Crusher" };
	penis ArabianGod{ 18.5, 3.16, 3.9, "Light Brown", 2.7, "Black", "Allah's Fiend" };
	
	printCock(mine);
	printCock(femboyCrusher);
	printCock(ArabianGod);
	
	return 0;
}