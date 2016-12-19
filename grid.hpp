/******************************************************************************************
**Program Filename: grid.hpp
**Author: Jay Steingold
**Date: 1/13/16
**Description: Prototypes for a group of functions to manipulate a grid. 
**		In combination they are design to check a grid's state and generate it.
**Input: One or two grids and coordinates for a particular grid element.
**OutPut: No output, but the grid displayed is changed based on the rules for
**		conway's game of life
******************************************************************************************/ 

#ifndef GRID_HPP
#define GRID_HPP


void generateGrid(int grid[40][60]);

void fillGrid(int grid[40][60]);

void copyGrid(int grid[40][60], int grid2[40][60]);

void checkGrid(int grid[40][60], int grid2[40][60]);

int checkNeighbors(int grid[40][60], int coordX, int coordY);

#endif
