/******************************************************************************************
**Program Filename: creature.cpp
**Author: Jay Steingold
**Date: 1/13/16
**Description: Group of functions that create and place groups of live "cells" in a
** 		2D Array. 
**Input: User input specifying the coordinates of the "creatures" 
 Functions take a 2D array and sometimes specific coordinates for an element in the array.
**OutPut: No output, but the array is manipulated into a certain starting active state.
******************************************************************************************/ 

#include "creature.hpp"
#include <iostream>


 /******************************************************************************************
**Function: makeCreature 
**Description: Prompts the user to specify and type of creature to make, its location, then
** 		alters the elements of a grid to make the creature "live"
**Parameters: A 60x40 array
**Pre-Conditions: The array must be defined 
**Post-Conditions: No post-conditions apply
******************************************************************************************/
        
void makeCreature(int array[40][60])
{
	int input;
	int  coordX = 0, coordY = 0;	
	
	std::cout << "So, you want to make a creature.\n";
	std::cout << "What kind of creature would you like to make?.\n"; 
	std::cout << "Press '1' for an oscillator\n";
	std::cout << "press '2' for a glider\n";
	std::cout << "press '3' for a glider cannon\n";
	std::cin >> input;

	std::cout << "Now, where do you want your creature?\n";
	std::cout << "Keep in mind our window is only so large.\n";

	switch(input)
	{
		case 1:
		{
			while(coordX < 11 || coordX > 48)
			{
				std::cout << "Enter an x value between 11 and 48\n";
				std::cin >> coordX;  
			}

			while(coordY < 11 || coordY > 28)
			{
				std::cout << "Enter a y value between 11 and 28\n";
				std::cin >> coordY;
			}

			makeOscillator(array, coordX, coordY);			
		}
		break;

		case 2:
		{
			while(coordX < 11 || coordX > 40)
			{
				std::cout << "Enter an x value between 11 and 40\n";
				std::cin >> coordX;  
			}

			while(coordY < 11 || coordY > 23)
			{
				std::cout << "Enter a y value between 11 and 23\n";
				std::cin >> coordY;
			}

			makeGlider(array, coordX, coordY);		
		}
		break;

		case 3:
		{
			while(coordX < 27 || coordX > 30)
			{
				std::cout << "Enter an x value between 27 and 29\n";
				std::cin >> coordX;  
			}

			while(coordY < 15 || coordY > 26)
			{
				std::cout << "Enter a y value between 15 and 25\n";
				std::cin >> coordY;
			}


			makeGliderGun(array, coordX, coordY);		
		}
		break;

		default:
		{
			std::cout << input << " is not a 1, 2 or 3."; 
		}	
	}		
			
}

/******************************************************************************************
**Function: makeOscillator
**Description: Creates a simple oscillator shape on a grid
**Parameters: A 60x40 array and an x and y coordinate 
**Pre-Conditions: Array must be initialized and coordinates chosen
**Post-Conditions: No post-conditions apply
******************************************************************************************/

void makeOscillator(int array[40][60],int coordX, int coordY)
{
	array[coordY][coordX] = 0;
	array[coordY][coordX - 1] = 0;
	array[coordY][coordX + 1] = 0;

}

/******************************************************************************************
**Function: makeGlider
**Description: Creates a simple glider shape on a grid
**Parameters: A 60x40 array and an x and y coordinate 
**Pre-Conditions: Array must be initialized and coordinates chosen
**Post-Conditions: No post-conditions apply
******************************************************************************************/

void makeGlider(int array[40][60], int coordX, int coordY)
{
	array[coordY][coordX] = 0;
	array[coordY - 1][coordX - 1] = 0;
	array[coordY - 1][coordX + 1] = 0;
	array[coordY][coordX + 1] = 0;
	array[coordY + 1][coordX] = 0;

}


/******************************************************************************************
**Function: makeGliderGun
**Description: Creates a simple gliderGun shape on a grid
**Parameters: A 60x40 array and an x and y coordinate 
**Pre-Conditions: Array must be initialized and coordinates chosen
**Post-Conditions: No post-conditions apply
******************************************************************************************/

void makeGliderGun(int array[40][60], int coordX, int coordY)
{
	array[coordY][coordX] = 0;
	array[coordY][coordX - 1] = 0;
	array[coordY + 1][coordX - 1] = 0;
	array[coordY - 1][coordX - 1] = 0;
	array[coordY - 2][coordX - 2] = 0;
	array[coordY + 2][coordX - 2] = 0;
	array[coordY][coordX - 3] = 0;
	array[coordY][coordX - 7] = 0;
	array[coordY + 1][coordX - 7] = 0;
	array[coordY- 1][coordX - 7] = 0;
	array[coordY + 2][coordX - 6] = 0;
	array[coordY + 3][coordX - 5] = 0;
	array[coordY + 3][coordX - 4] = 0;
	array[coordY - 2][coordX - 6] = 0;
	array[coordY - 3][coordX - 5] = 0;
	array[coordY - 3][coordX - 4] = 0;

	array[coordY][coordX - 16] = 0;
	array[coordY][coordX - 17] = 0;
	array[coordY - 1][coordX - 16] = 0;
	array[coordY - 1][coordX - 17] = 0;

	array[coordY - 1][coordX + 3] = 0;
	array[coordY - 2][coordX + 3] = 0;
	array[coordY - 3][coordX + 3] = 0;
	array[coordY - 1][coordX + 4] = 0;
	array[coordY - 2][coordX + 4] = 0;
	array[coordY - 3][coordX + 4] = 0;
	array[coordY][coordX + 5] = 0;
	array[coordY - 4][coordX + 5] = 0;
	array[coordY][coordX + 7] = 0;
	array[coordY + 1][coordX + 7] = 0;
	array[coordY - 4][coordX + 7] = 0;
	array[coordY - 5][coordX + 7] = 0;

	array[coordY - 2][coordX + 17] = 0;
	array[coordY - 3][coordX + 17] = 0;
	array[coordY - 2][coordX + 18] = 0;
	array[coordY - 3][coordX + 18] = 0;
} 




