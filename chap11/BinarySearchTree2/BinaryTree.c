#include <stdio.h>
#include <stdlib.h>
#include "BinaryTree.h"

BTreeNode *MakeBTreeNode(void) {
	BTreeNode *nd = (BTreeNode *)malloc(sizeof(BTreeNode));
	nd->left = NULL;
	nd->right = NULL;

	return nd;
}

BTData GetData(BTreeNode *bt) {
	return bt->data;
}

void SetData(BTreeNode *bt, BTData data) {
	bt->data = data;
}

void MakeLeftSubTree(BTreeNode *main, BTreeNode *sub) {
	if(main->left != NULL)
		free(main->left);

	main->left = sub;

}

void MakeRightSubTree(BTreeNode *main, BTreeNode *sub) {
	if(main->right != NULL)
		free(main->right);

	main->right = sub;
}

BTreeNode *GetLeftSubTree(BTreeNode *bt) {
	return bt->left;
}

BTreeNode *GetRightSubTree(BTreeNode *bt) {
	return bt->right;
}

void PreorderTraverse(BTreeNode *bt, VisitFuncPtr action) {
	if(bt == NULL)
		return;

	action(bt->data);
	PreorderTraverse(bt->left, action);
	PreorderTraverse(bt->right, action);
}

void InorderTraverse(BTreeNode *bt, VisitFuncPtr action) {
	if(bt == NULL)
		return;

	InorderTraverse(bt->left, action);
	action(bt->data);
	InorderTraverse(bt->right, action);
}

void PostorderTraverse(BTreeNode *bt, VisitFuncPtr action) {
	if(bt == NULL)
		return;

	PostorderTraverse(bt->left, action);
	PostorderTraverse(bt->right, action);
	action(bt->data);
}

void ChangeLeftSubTree(BTreeNode *main, BTreeNode *sub) {
	main->left = sub;
}

void ChangeRightSubTree(BTreeNode *main, BTreeNode *sub) {
	main->right = sub;
}

BTreeNode *RemoveLeftSubTree(BTreeNode *bt) {
	BTreeNode *delNode = NULL;

	if(bt != NULL) {
		delNode = bt->left;
		bt->left = NULL;
	}

	return delNode;
}

BTreeNode *RemoveRightSubTree(BTreeNode *bt) {
	BTreeNode *delNode = NULL;

	if(bt != NULL) {
		delNode = bt->left;
		bt->left = NULL;
	}

	return delNode;
}
