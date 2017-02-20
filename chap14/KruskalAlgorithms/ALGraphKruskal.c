#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "DLinkedList.h"
#include "ArrayBaseStack.h"
#include "ALGraphKruskal.h"
#include "ALEdge.h"

int WhoIsPrecede(int data1, int data2) {
	if(data1 > data2)
		return 1;
	else
		return 0;
}

int PQWeightComp(Edge d1, Edge d2) {
	return d1.weight - d2.weight;
}

void GraphInit(ALGraph *pg, int nv) {
	int i;

	pg->adjList = (List *)malloc(sizeof(List) * nv);
	pg->numV = nv;
	pg->numE = 0;
	
	for(i = 0; i < nv; i++) {
		ListInit(&(pg->adjList[i]));
		SetSortRule(&(pg->adjList[i]), WhoIsPrecede);
	}

	pg->visitInfo = (int *)malloc(sizeof(int) * pg->numV);
	memset(pg->visitInfo, 0, sizeof(int) * pg->numV);

	PQueueInit(&(pg->pqueue), PQWeightComp);
}

void GraphDestroy(ALGraph *pg) {
	if(pg->adjList != NULL)
		free(pg->adjList);

	if(pg->visitInfo != NULL)
		free(pg->visitInfo);
}

void AddEdge(ALGraph *pg, int fromV, int toV, int weight) {
	Edge edge = {fromV, toV, weight};

	LInsert(&(pg->adjList[fromV]), toV);
	LInsert(&(pg->adjList[toV]), fromV);
	pg->numE += 1;

	PEnqueue(&(pg->pqueue), edge);
}


void ShowGraphEdgeInfo(ALGraph *pg) {
	int i;
	int vx;

	for(i = 0; i < pg->numV; i++) {
		printf("%c와 연결된 정점: ", i + 65);

		if(LFirst(&(pg->adjList[i]), &vx)) {
			printf("%c ", vx + 65);

			while(LNext(&(pg->adjList[i]), &vx)) {
				printf("%c ", vx + 65);
			}
			printf("\n");
		}
	}
}

int VisitVertex(ALGraph *pg, int visitV) {
	if(pg->visitInfo[visitV] == 0) {
		pg->visitInfo[visitV] = 1;
	//	printf("%c ", visitV + 65);	
		return TRUE;
	}
	return FALSE;
}

void DFShowGraphVertex(ALGraph *pg, int startV) {
	Stack stack;
	int visitV = startV;
	int nextV;
	StackInit(&stack);
	VisitVertex(pg, visitV);
	SPush(&stack, visitV);

	while(LFirst(&(pg->adjList[visitV]), &nextV) == TRUE) {
		int visitFlag = FALSE;

		if(VisitVertex(pg, nextV) == TRUE) {
			SPush(&stack, visitV);
			visitV = nextV;
			visitFlag = TRUE;
		}
		else {
			while(LNext(&(pg->adjList[visitV]), &nextV) == TRUE) {
				if(VisitVertex(pg, nextV) == TRUE) {
					SPush(&stack, visitV);
					visitV = nextV;
					visitFlag = TRUE;
					break;
				}
			}
		}

		if(visitFlag == FALSE) {
			if(SIsEmpty(&stack) == TRUE) 
				break;
			else
				visitV = SPop(&stack);
		}
	}
	memset(pg->visitInfo, 0, sizeof(int) * pg->numV);
}

void RemoveWayEdge(ALGraph *pg, int fromV, int toV) {
	int edge;

	if(LFirst(&(pg->adjList[fromV]), &edge) == TRUE) {
		if(edge == toV) {
			LRemove(&(pg->adjList[fromV]));
			return;
		}	

		while(LNext(&(pg->adjList[fromV]), &edge) == TRUE) {
			if(edge == toV) {
				LRemove(&(pg->adjList[fromV]));
				return;
			}
		}
	}
}

void RemoveEdge(ALGraph *pg, int fromV, int toV) {
	RemoveWayEdge(pg, fromV, toV);
	RemoveWayEdge(pg, toV, fromV);
	(pg->numE)--;
}

void RecoverEdge(ALGraph *pg, int fromV, int toV, int weight) {
	LInsert(&(pg->adjList[fromV]), toV);
	LInsert(&(pg->adjList[toV]), fromV);
	(pg->numE)++;
}
int IsConnVertex(ALGraph *pg, int v1, int v2) {
	Stack stack;
	int visitV = v1;
	int nextV;

	StackInit(&stack);
	VisitVertex(pg, visitV);
	SPush(&stack, visitV);

	while(LFirst(&(pg->adjList[visitV]), &nextV) == TRUE) {
		int visitFlag = FALSE;
		
		if(nextV == v2) {
			memset(pg->visitInfo, 0, sizeof(int) * pg->numV);
			return TRUE;
		}

		if(VisitVertex(pg, nextV) == TRUE) {
			SPush(&stack, visitV);
			visitV = nextV;
			visitFlag = TRUE;
		}
		else {
			while(LNext(&(pg->adjList[visitV]), &nextV) == TRUE) {
				if(nextV == v2) {
					memset(pg->visitInfo, 0, sizeof(int) * pg->numV);
				   return TRUE;	
				}

				if(VisitVertex(pg, nextV) == TRUE) {
					SPush(&stack, visitV);
					visitV = nextV;
					visitFlag = TRUE;
					break;
				}
			}
		}

		if(visitFlag == FALSE) {
			if(SIsEmpty(&stack) == TRUE) 
				break;
			else
				visitV = SPop(&stack);
		}
	}

	memset(pg->visitInfo, 0, sizeof(int) * pg->numV);
	return FALSE;
}

void ConKruskalMST(ALGraph *pg) {
	Edge recvEdge[20];
	Edge edge;
	int eidx = 0;
	int i;

	while(pg->numE + 1 > pg->numV) {
		edge = PDequeue(&(pg->pqueue));
		RemoveEdge(pg, edge.v1, edge.v2);

		if(!IsConnVertex(pg, edge.v1, edge.v2)) {
			RecoverEdge(pg, edge.v1, edge.v2, edge.weight);
			recvEdge[eidx++] = edge;
		}
	}
	
	for(i = 0; i < eidx; i++) {
		PEnqueue(&(pg->pqueue), recvEdge[i]);
	}
}

void ShowGraphEdgeWeightInfo(ALGraph *pg) {
	PQueue copyPQ = pg->pqueue;
	Edge edge;

	while(!PQIsEmpty(&(pg->pqueue))) {
		edge = PDequeue(&(pg->pqueue));
		printf("(%c-%c), w:%d\n", edge.v1 + 65, edge.v2 + 65, edge.weight);
	}
}
