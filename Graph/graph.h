// graph.h -- Graph class declaration
#ifndef GRAPH_H_
#define GRAPH_H_
#include "vert_edge.h"

struct List
{

};

class Graph
{
public:
	// We can have directed or undirected graph
	// and also graph with weight and without
	enum DIRECTION {NO,YES};
	enum WEIGHT_MODE {NO,YES};
private:
	int number;
};

#endif // GRAPH_H_