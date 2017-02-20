#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "ExpressionTree.h"
#include "ListBaseStack.h"
#include "BinaryTree2.h"

BTreeNode *MakeExpTree(char exp[]) {
	Stack stack;
	BTreeNode *pnode;

	int expLen = strlen(exp);
	int i;

	StackInit(&stack);

	for(i = 0; i < expLen; i++) {
		pnode = MakeBTreeNode();

		if(isdigit(exp[i])) {
			SetData(pnode, exp[i] - '0');
		}	
		else {
			MakeRightSubTree(pnode, SPop(&stack));
			MakeLeftSubTree(pnode, SPop(&stack));
			SetData(pnode, exp[i]);
		}

		SPush(&stack, pnode);
	}

	return SPop(&stack);
}

int EvaluateExpTree(BTreeNode *bt) {
	int op1, op2;

	if(GetLeftSubTree(bt) == NULL || GetRightSubTree(bt) == NULL) 
		return GetData(bt);

	op1 = EvaluateExpTree(GetLeftSubTree(bt));
	op2 = EvaluateExpTree(GetRightSubTree(bt));

	switch(GetData(bt)) {
		case '+':
			return op1 + op2;
		case '-':
			return op1 - op2;
		case '*':
			return op1 * op2;
		case '/':
			return op1 / op2;	
	}

	return 0;
}

void ShowNodeData(int data) {
	if(data >= 0 && data <= 9) 
		printf("%d ", data);
	else
		printf("%c ", data);
}

void ShowPrefixTypeExp(BTreeNode *bt) {
	PreorderTraverses(bt, ShowNodeData);
}

void ShowInfixTypeExp(BTreeNode *bt) {
	InorderTraverses(bt, ShowNodeData);
}

void ShowPostfixTypeExp(BTreeNode *bt) {
	PostorderTraverses(bt, ShowNodeData);
}
