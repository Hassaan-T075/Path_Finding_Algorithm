#include<iostream>
using namespace std;

int main() {

	int** grid = new int* [10];

	for (size_t i = 0; i < 10; i++)
	{
		grid[i] = new int[10];
	}

	for (size_t i = 0; i < 10; i++)
	{
		for (size_t j = 0; j < 10; j++)
		{
			grid[i][j] = 0;
		}
	}

	//Obstacles
	grid[9][7] = -1;
	grid[8][7] = -1;
	grid[6][7] = -1;
	grid[6][8] = -1;

	for (size_t i = 0; i < 10; i++)
	{
		for (size_t j = 0; j < 10; j++)
		{
			cout << grid[i][j] << "\t";
		}
		cout << "\n";
	}
}