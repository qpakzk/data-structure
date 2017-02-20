#include <stdio.h>
#include "BinaryTree2.h"
#include "BinarySearchTree.h"

void BSTMakeAndInit(BTreeNode **pRoot) {
	*pRoot = NULL;
}

BSTData BSTGetNodeData(BTreeNode *bst) {
	return GetData(bst);
}

void BSTInsert(BTreeNode **pRoot, BSTData data) {
	BTreeNode *pNode = NULL;
	BTreeNode *cNode = *pRoot;
	BTreeNode *nNode = NULL;

	while(cNode != NULL) {
		if(GetData(cNode) == data)
			return;

		pNode = cNode;

		if(GetData(cNode) > data)
			cNode = GetLeftSubTree(cNode);
		else
			cNode = GetRightSubTree(cNode);
	}

	nNode = MakeBTreeNode();
	SetData(nNode, data);

	if(pNode != NULL) {
		if(GetData(pNode) > data)
			MakeLeftSubTree(pNode, nNode);
		else
			MakeRightSubTree(pNode, nNode);	
	}
	else {
		*pRoot = nNode;
	}
}

BTreeNode *BSTSearch(BTreeNode *bst, BSTData target) {
	BTreeNode *cNode = bst;
	BSTData cd;

	while(cNode != NULL) {
		cd = GetData(cNode);

		if(target == cd)
			return cNode;
		else if(target < cd)
			cNode = GetLeftSubTree(cNode);
		else
			cNode = GetRightSubTree(cNode);
	}

	return NULL;
}
