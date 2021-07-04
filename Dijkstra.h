#ifndef DIJKSTRA_H_
#define DIJKSTRA_H_
#include <iostream>
#include "mazeFactory.h"
#include <set>
#include <queue>
using namespace std;

class Dijkstra
{
	mazeFactory mf;
	bool* visited;
	bool* inserted;
	int* parent;
	int final;
	pair<int, int> p;
	set<pair<int, int>> vertsies;
	set<pair<int, int>>::iterator top;
	set<pair<int, int>>::iterator it;
	int lengthofpath;
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> chosefinal;
	void makepath();

public:


	void displaypath();
	Dijkstra();
	~Dijkstra();
};
#endif

