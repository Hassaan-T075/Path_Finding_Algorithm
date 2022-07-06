#include "Grid.h"
#define SIZE 10

Grid::Grid()
{
	this->ptr = new int* [SIZE];

	for (size_t i = 0; i < SIZE; i++)
	{
		this->ptr[i] = new int[SIZE];
	}

	for (size_t i = 0; i < SIZE; i++)
	{
		for (size_t j = 0; j < SIZE; j++)
		{
			this->ptr[i][j] = 0;
		}
	}
}