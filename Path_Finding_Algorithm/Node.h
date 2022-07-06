#pragma once
#include<iostream>
#include<vector>
using namespace std;

struct Cord
{
	int x;
	int y;
	Cord(int x = 0, int y = 0)
	{
		this->x = x;
		this->y = y;
	}
};

class Node
{
public:
	//predecessor of discovered node
	Cord pred;
	vector<Cord> adj;
	int value;

public:
	Node();
};