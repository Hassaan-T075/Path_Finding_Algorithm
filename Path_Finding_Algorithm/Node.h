#pragma once
#include<iostream>
#include<vector>
using namespace std;

struct Pred
{
	int x;
	int y;
};

class Node
{
public:

	//predecessor of discovered node
	Pred p;
	int value;

public:
	Node();
};