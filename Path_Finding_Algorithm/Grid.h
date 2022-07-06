#pragma once
#include<iostream>
#include"Node.h"
using namespace std;

class Grid
{
public:
	Node** ptr;

public:
	Grid();

	//helper functions
	void Display_Grid();
	void Add_Obstacle(int x, int y);
	void adjacent(int x, int y);
	void BFS();
};