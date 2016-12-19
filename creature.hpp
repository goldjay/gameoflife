/******************************************************************************************
**Program Filename: creature.hpp
**Author: Jay Steingold
**Date: 1/13/16
**Description: Group of functions that create and place groups of live "cells" in a
** 		2D Array. 
**Input: User input specifying the coordinate of the "creatures"
** Functions take a 2D array and sometimes specific coordinates for an element in the array.
**OutPut: No output, but the array is manipulated into a certain starting active state.
******************************************************************************************/ 

#ifndef CREATURE_HPP
#define CREATURE_HPP
	

void makeCreature(int array[40][60]);

void makeOscillator(int array[40][60], int x, int y);

void makeGlider(int array[40][60], int x, int y);

void makeGliderGun(int array[40][60], int x, int y);

#endif
