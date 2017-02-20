#ifndef __BINARY_TREE_H__
#define __BINARY_TREE_H__

typedef int BTData;

typedef struct _bTreeNode {
	BTData data;
	struct _bTreeNode *left;
	struct _bTreeNode *right;
} BTreeNode;
BTreeNode *MakeBTreeNode(void);
BTData GetData(BTreeNode *bt);
void SetData(BTreeNode *bt, BTData data);

BTreeNode *GetLeftSubTree(BTreeNode *bt);
BTreeNode *GetRightSubTree(BTreeNode *bt);

void MakeLeftSubTree(BTreeNode *main, BTreeNode *sub);
void MakeRightSubTree(BTreeNode *main, BTreeNode *sub);

typedef void VisitFuncPtr(BTData data);

void PreorderTraverse(BTreeNode *bt, VisitFuncPtr action);
void InorderTraverse(BTreeNode *bt, VisitFuncPtr action);
void PostOrderTraverse(BTreeNode *bt, VisitFuncPtr action);

void ChangeLeftSubTree(BTreeNode *main, BTreeNode *sub);
void ChangeRightSubTree(BTreeNode *main, BTreeNode *sub);

BTreeNode *RemoveLeftSubTree(BTreeNode *bt);
BTreeNode *RemoveRightSubTree(BTreeNode *bt);

#endif
