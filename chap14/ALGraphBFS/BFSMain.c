#include <stdio.h>
#include "ALGraphBFS.h"

int main(void) {
	ALGraph graph;
	GraphInit(&graph, 7);

	AddEdge(&graph, A, B);
	AddEdge(&graph, A, D);
	AddEdge(&graph, B, C);
	AddEdge(&graph, D, C);
	AddEdge(&graph, D, E);
	AddEdge(&graph, E, F);
	AddEdge(&graph, E, G);

	ShowGraphEdgeInfo(&graph);

	BFShowGraphVertex(&graph, A);printf("\n");
	BFShowGraphVertex(&graph, C);printf("\n");
	BFShowGraphVertex(&graph, E);printf("\n");
	BFShowGraphVertex(&graph, G);printf("\n");

	GraphDestroy(&graph);
	return 0;
}
