#pragma once
#include<iostream>
#include"Node.h"
using namespace std;

class Grid
{
private:
	Node** ptr;

public:
	Grid();

	//helper functions
	void Display_Grid();
	void Add_Obstacle(int x, int y);
};