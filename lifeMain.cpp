/******************************************************************************************
**Program Filename: lifeMain.cpp 
**Author: Jay Steingold
**Date: 1/13/16
**Description: 
**Input: User input specifying which creature and where to generate.
**OutPut: A grid of alive and dead "cells" that move based on the rules of
** Conway's game of life. 
******************************************************************************************/ 

#include <iostream>
#include "creature.hpp"
#include "grid.hpp"


int main()
{
	int generations = 0, generationsCount = 0;
	std::cout << "How many generations would you like to watch?\n";	
	std::cin >> generations;
 
	int gridA[40][60];
	int gridB[40][60];	

	fillGrid(gridA);	
	fillGrid(gridB);	
	makeCreature(gridA);

	while (generationsCount < generations)
	{
		for(int i = 0; i < 50; i++)
		{
			std::cout << std::endl;
		} 
	
	generateGrid(gridA);
	std::cout << "\n";
	usleep(100000);
	checkGrid(gridA, gridB);
	copyGrid(gridB, gridA);
	generationsCount++;
	}

return 0;
}
