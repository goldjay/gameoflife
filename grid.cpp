/******************************************************************************************
**Program Filename: grid.cpp
**Author: Jay Steingold
**Date: 1/13/16
**Description: Group of functions to manipulate a grid. In combination they are
**		design to check a grid's state and generate said grid.
**Input: One or two grids and coordinates for a particular grid element.
**OutPut: No output, but the grid displayed is changed based on the rules for
**		conway's game of life
******************************************************************************************/ 

#include <iostream>
#include "grid.hpp"

/******************************************************************************************
**Function: generateGrid 
**Description: Prints a given 60x40 array
**Parameters: A 60x40 array
**Pre-Conditions: The array must be initialized and filled beforehand 
**Post-Conditions: No post-conditions required
******************************************************************************************/

void generateGrid(int grid[40][60])
{
	/* Only the visible window is printed.*/
	for(int i = 10; i < 30; i++)
	{
		for (int j = 10; j < 50; j++)
		{
			std::cout << grid[i][j] << " ";	
		}

	std::cout << "\n";
	
	}
   
}

/******************************************************************************************
**Function: fillGrid
**Description: Populates a 60x40 2D array with 1's
**Parameters: A 60x40 array
**Pre-Conditions: The array must be initialized
**Post-Conditions: No post-conditions required
******************************************************************************************/

void fillGrid(int grid[40][60])
{
	for(int i = 0; i < 40; i++)
	{
		for(int j = 0; j < 60; j++)
		{
			grid[i][j] = 1;
		}
	} 
}	

/******************************************************************************************
**Function: copyGrid
**Description: Copys the contents of one 40x60 array to another
**Parameters: Two 40x60 arrays
**Pre-Conditions: Both grids must be initialized and filled
**Post-Conditions: No post-conditions are required
******************************************************************************************/

void copyGrid(int gridA[40][60], int gridB[40][60])
{
	for(int i = 0; i < 40; i++)
	{
		for(int j = 0; j < 60; j++)
		{
			gridB[i][j] = gridA[i][j];
		}
	}
}

/******************************************************************************************
**Function: checkGrid
**Description: Compares the state of elements in two 60x40 arrays.
**Parameters: Two 60x40 arrays
**Pre-Conditions: Both arrays must be initialized and filled. The function checkNeighbors 
** must be working correctly
**Post-Conditions: No post-conditions are required
******************************************************************************************/

void checkGrid(int gridA[40][60], int gridB[40][60])
{
	int count;

	for(int i = 0; i < 40; i++)
	{
		for(int j = 0; j < 60; j++)
		{
			/*Each element inthe grid has its neighbor count counted and 
 			evaluated based on the rules of life.
			 */
			count = checkNeighbors(gridA, i, j);
			
			/* If the element is alive */
			if(gridA[i][j] == 0)
			{
				if(count < 2 || count > 3)
				{
					gridB[i][j] = 1;
				}
				else
				{
					gridB[i][j] = 0;
				}
			}
			/* If the element is not alive */
			else
			{
				if(count == 3)
				{
					gridB[i][j] = 0;
				}
			}	
		}
	}
}

/******************************************************************************************
**Function: checkNeighbors
**Description: Examines the 8 elements surrounding an element and counts their active states.
**Parameters: One 60x40 arrayi, an x coordinate and a y coordinate
**Pre-Conditions: The grid must be created and filled
**Post-Conditions: No post-conditions required
******************************************************************************************/

int checkNeighbors(int grid[40][60], int coordX, int coordY)
{
	int neighborsCount = 0;	
	
	/*Iterates over a 3x3 matrix with the (x,y) element at the center */
	for(int x = -1; x < 2; x ++)
	{
		for(int y = -1; y < 2; y++)
		{
			if(grid[coordX + x][coordY + y] == 0)
			{
				neighborsCount++;
			 
			}
			
		}
	}
	
	/*If the center element is "alive" subtract it from the neighbors count */
	if(grid[coordX][coordY] == 0 )
			{
				neighborsCount--;
			}

	return	neighborsCount; 
}






