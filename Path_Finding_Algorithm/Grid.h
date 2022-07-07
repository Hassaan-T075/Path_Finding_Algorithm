#pragma once
#include<iostream>
#include<queue>
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
	//finds adjacent nodes of a given node
	void adjacent(int x, int y);
	void BFS(int x, int y);
};