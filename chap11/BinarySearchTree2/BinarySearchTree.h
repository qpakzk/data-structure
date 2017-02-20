#ifndef __BINARY_SEARCH_TREE2_H__
#define __BINARY_SEARCH_TREE2_H__

#include "BinaryTree.h"

typedef BTData BSTData;

void BSTMakeAndInit(BTreeNode **pRoot);

BSTData BSTGetNodeData(BTreeNode *bst);

void BSTInsert(BTreeNode **pRoot, BSTData data);

BTreeNode *BSTSearch(BTreeNode *bst, BSTData target);

BTreeNode *BSTRemove(BTreeNode **pRoot, BSTData target);

void BSTShowAll(BTreeNode *bst);

#endif
