#include <stdlib.h>
#include <string.h>
#include "InfixToPostfix.h"
#include "PostCalculator.h"

int EvalInfixExp(char exp[]) {
	int ret;
	int len = strlen(exp);
	char *expcpy = (char *)malloc(len + 1);
	strcpy(expcpy, exp);
	ConvToRPNExp(expcpy);
	ret = EvalRPNExp(expcpy);
	
	free(expcpy);
	return ret; 

}
