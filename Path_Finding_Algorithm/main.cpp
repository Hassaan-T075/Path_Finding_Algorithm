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

	return 0;
}