#ifndef __BINARY_TREE2_H__
#define __BINARY_TREE2_H__

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

void PreorderTraverses(BTreeNode *bt, VisitFuncPtr action);
void InorderTraverses(BTreeNode *bt, VisitFuncPtr action);
void PostorderTraverses(BTreeNode *bt, VisitFuncPtr action);

void DeleteTree(BTreeNode *bt);

#endif
