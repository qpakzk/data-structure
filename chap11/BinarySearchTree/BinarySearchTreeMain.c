#include <stdio.h>
#include "BinarySearchTree.h"

int main(void) {
	BTreeNode *bstRoot;
	BTreeNode *sNode;
	
	BSTMakeAndInit(&bstRoot);
	
	BSTInsert(&bstRoot, 9);
	BSTInsert(&bstRoot, 1);	
	BSTInsert(&bstRoot, 6);
	BSTInsert(&bstRoot, 2);	
	BSTInsert(&bstRoot, 8);
	BSTInsert(&bstRoot, 3);	
	BSTInsert(&bstRoot, 5);

	sNode = BSTSearch(bstRoot, 1);
	if(sNode == NULL)
		printf("탐색 실패\n");
	else
		printf("탐색에 성공한 키의 값: %d\n", BSTGetNodeData(sNode));

	sNode = BSTSearch(bstRoot, 4);
	if(sNode == NULL)
		printf("탐색 실패\n");
	else
		printf("탐색에 성공한 키의 값: %d\n", BSTGetNodeData(sNode));

	sNode = BSTSearch(bstRoot, 6);
	if(sNode == NULL)
		printf("탐색 실패\n");
	else
		printf("탐색에 성공한 키의 값: %d\n", BSTGetNodeData(sNode));

	sNode = BSTSearch(bstRoot, 7);
	if(sNode == NULL)
		printf("탐색 실패\n");
	else
		printf("탐색에 성공한 키의 값: %d\n", BSTGetNodeData(sNode));
	return 0;
}
