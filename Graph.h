#pragma once
class Graph
{
private:
	bool** adjacencyMatrix;
	int vertices;

public:
	Graph(int);
	void addEdge(int, int);
	bool isEdge(int, int);
	void removeEdge(int, int);
	void displayMatrix();

};

