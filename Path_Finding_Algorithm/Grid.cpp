#include "Grid.h"
#define SIZE 10

Grid::Grid()
{
	this->ptr = new Node* [SIZE];

	for (size_t i = 0; i < SIZE; i++)
	{
		this->ptr[i] = new Node[SIZE];
	}

	for (size_t i = 0; i < SIZE; i++)
	{
		for (size_t j = 0; j < SIZE; j++)
		{
			this->ptr[i][j].value = 0;
		}
	}
}

void Grid::Display_Grid()
{
	for (size_t i = 0; i < SIZE; i++)
	{
		for (size_t j = 0; j < SIZE; j++)
		{
			cout << this->ptr[i][j].value << "\t";
		}
		cout << "\n";
	}
	cout << "\n";
}

void Grid::Add_Obstacle(int x, int y)
{
	this->ptr[x][y].value = -1;
}