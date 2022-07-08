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
			this->ptr[i][j].x = i;
			this->ptr[i][j].y = j;
			this->ptr[i][j].value = 0;
		}
	}
}

void Grid::Display_Grid()
{
	cout << "\t ";
	for (size_t i = 0; i < SIZE; i++)
	{
		cout << i << "\t ";
	}
	cout << "\n-----------------------------------------------------------------------------------------\n";
	for (size_t i = 0; i < SIZE; i++)
	{
		for (size_t j = 0; j < SIZE; j++)
		{
			if (j == 0)
				cout << i << "\t|" << this->ptr[i][j].value << "|\t|";
			else
				cout << this->ptr[i][j].value << "|\t|";
		}
		cout << "\n-----------------------------------------------------------------------------------------\n";
	}
	cout << "\n";

	//for (size_t i = 0; i < SIZE; i++)
	//{
	//	for (size_t j = 0; j < SIZE; j++)
	//	{
	//		cout << this->ptr[i][j].value << "\t";
	//	}
	//	cout << "\n";
	//}
	//cout << "\n";
}

void Grid::Add_Obstacle(int x, int y)
{
	this->ptr[x][y].value = -1;
}

void Grid::adjacent(int x, int y)
{
	//diagonal up-left
	if (x > 0 && y > 0)
		this->ptr[x][y].adj.push_back(Cord(x - 1, y - 1));

	//diagonal down-left
	if (x < SIZE - 1 && y > 0)
		this->ptr[x][y].adj.push_back(Cord(x + 1, y - 1));

	//up
	if (x > 0)
		this->ptr[x][y].adj.push_back(Cord(x - 1, y));

	//down
	if (x < SIZE - 1)
		this->ptr[x][y].adj.push_back(Cord(x + 1, y));

	//left
	if (y > 0)
		this->ptr[x][y].adj.push_back(Cord(x, y - 1));

	//right
	if (y < SIZE - 1)
		this->ptr[x][y].adj.push_back(Cord(x, y + 1));


	//diagonal up-right
	if (x > 0 && y < SIZE - 1)
		this->ptr[x][y].adj.push_back(Cord(x - 1, y + 1));

	//diagonal down-right
	if (x < SIZE - 1 && y < SIZE - 1)
		this->ptr[x][y].adj.push_back(Cord(x + 1, y + 1));
}

void Grid::BFS(int x, int y)
{
	queue<Node*> q;

	//push source vertex/node
	q.push(&this->ptr[x][y]);

	int xc, yc;
	Node* u, * v;

	while (!q.empty())
	{
		u = q.front();
		q.pop();

		for (int k = 0; k < u->adj.size(); k++) {

			xc = u->adj[k].x;
			yc = u->adj[k].y;

			if (this->ptr[xc][yc].value == NULL && (xc != x || yc != y))
			{
				//update adjacent node and insert into queue
				v = &this->ptr[xc][yc];
				v->pred = Cord(u->x, u->y);
				v->value = u->value + 1;
				q.push(v);
			}
		}
	}
}

void Grid::lineage(int x, int y)
{
	cout << "Path to reach delivery point (" << x << " , " << y << ") is as follows\n\n[";
	int steps = 0;
	print_lineage(x, y, steps);
	cout << "]\n\nTotal number of steps were " << steps << "\n";
}

void Grid::print_lineage(int x, int y, int& steps)
{
	if (this->ptr[x][y].pred.x == -1 && this->ptr[x][y].pred.y == -1)
	{
		return;
	}
	else
	{
		Node u = this->ptr[x][y];
		++steps;
		print_lineage(u.pred.x, u.pred.y, steps);
		cout << "(" << u.x << " , " << u.y << ") , ";
	}
}