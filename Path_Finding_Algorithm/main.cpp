#include<iostream>
#include"Grid.h"
#define SIZE 10
using namespace std;

int main() {

	Grid G;

	//G.Display_Grid();

	//Obstacles
	G.Add_Obstacle(9, 7);
	G.Add_Obstacle(8, 7);
	G.Add_Obstacle(6, 7);
	G.Add_Obstacle(6, 8);

	G.Add_Obstacle(9, 7);
	G.Add_Obstacle(8, 7);
	G.Add_Obstacle(6, 7);
	G.Add_Obstacle(7, 7);
	G.Add_Obstacle(6, 8);


	G.Add_Obstacle(6, 3);
	G.Add_Obstacle(6, 4);
	G.Add_Obstacle(6, 5);
	//G.Add_Obstacle(6, 9);

	G.Display_Grid();


	for (size_t i = 0; i < SIZE; i++)
	{
		for (size_t j = 0; j < SIZE; j++)
		{
		G.adjacent(i, j);
		}
	}

	G.BFS(0, 0);

	G.Display_Grid();

	G.lineage(9, 9);

	return 0;
}