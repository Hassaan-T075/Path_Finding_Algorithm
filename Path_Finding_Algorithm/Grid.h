#pragma once
#include<iostream>
#include<queue>
#include<stdlib.h>
#include<ctime>
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
	//wrapper function
	void lineage(int x, int y);
	//recursively prints the predecessor nodes of a particular node
	void print_lineage(int x, int y, int& steps);
	//randomly adds 20 obstacles
	void Randomizer();
};