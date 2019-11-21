#include "Graph.h"
#include <iostream>

Graph::Graph(int numberOfVertices)
{
	// set number of vertices
	this->vertices = numberOfVertices;

	// initate matrix
	adjacencyMatrix = new bool* [vertices];

	for (int x = 0; x < numberOfVertices; x++) {
		adjacencyMatrix[x] = new bool[vertices];

		for (int y = 0; y < numberOfVertices; y++) {

			adjacencyMatrix[x][y] = false;
		}
	}
}


void Graph::addEdge(int origin, int destination)
{
	adjacencyMatrix[origin][destination] = true;
	adjacencyMatrix[destination][origin] = true;
}

bool Graph::isEdge(int origin, int destination)
{
	return adjacencyMatrix[origin][destination];
}

void Graph::removeEdge(int origin, int destination)
{
	adjacencyMatrix[origin][destination] = false;
	adjacencyMatrix[destination][origin] = false;
}

void Graph::displayMatrix()
{

	std::cout << "Node  | Destinations ";
	for (int adjanciesColumn = 0; adjanciesColumn < vertices; adjanciesColumn++) {
		std::cout << adjanciesColumn << " ";
	}
	std::cout << std::endl << std::endl; 
	for (int origin = 0; origin < vertices; origin++) {
		std::cout << "  " << origin << "                  ";
		for (int destination = 0; destination < vertices; destination++) {
			std::cout << adjacencyMatrix[origin][destination] << " ";
		}
		std::cout << std::endl;
	}
}
