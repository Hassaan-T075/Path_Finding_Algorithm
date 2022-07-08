#include<iostream>
#include"Grid.h"
#define SIZE 10
using namespace std;

int main() {

	Grid G;

	G.Display_Grid();


	//initialize adjaceny lists for all nodes
	for (size_t i = 0; i < SIZE; i++)
	{
		for (size_t j = 0; j < SIZE; j++)
		{
			G.adjacent(i, j);
		}
	}

	//Adds obstacles
	G.Randomizer();

	G.Display_Grid();
	
	G.BFS(0, 0);

	G.Display_Grid();

	G.lineage(9, 9);

	return 0;
}