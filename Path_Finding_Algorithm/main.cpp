#include<iostream>
#include"Grid.h"
using namespace std;

int main() {

	Grid G;

	//G.Display_Grid();

	//Obstacles
	G.Add_Obstacle(9, 7);
	G.Add_Obstacle(8, 7);
	G.Add_Obstacle(6, 7);
	G.Add_Obstacle(6, 8);

	G.Display_Grid();


	for (size_t i = 0; i < 10; i++)
	{
		for (size_t j = 0; j < 10; j++)
		{
		G.adjacent(i, j);
			cout << "\n(" << i << " , " << j << ")\n";


			for (int k = 0; k < G.ptr[i][j].adj.size(); k++) {
				cout << G.ptr[i][j].adj[k].x << " " << G.ptr[i][j].adj[k].y << "\n";
			}
		}
		cout << "\n\n";
	}

	return 0;
}