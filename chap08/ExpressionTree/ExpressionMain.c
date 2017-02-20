#include <stdio.h>
#include "ExpressionTree.h"

int main(void) {
	char exp[] = "12+7*";
	BTreeNode *eTree = MakeExpTree(exp);
	
	printf("전위 표기법의 수식: ");
	ShowPrefixTypeExp(eTree);
	printf("\n");

	printf("중위 표기법의 수식: ");
	ShowInfixTypeExp(eTree);
	printf("\n");

	printf("후위 표기법의 수식: ");
	ShowPostfixTypeExp(eTree);
	printf("\n");

	printf("연산의 결과: %d\n", EvaluateExpTree(eTree));
	return 0;
}
