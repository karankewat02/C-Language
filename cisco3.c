#include <stdio.h>

int main(void)
{
	int xValue=5;
	int yValue=9;
	int result;
	int bigResult;

	/*
		increment xValue by 3
		decrement yValue by xValue
		multiply xValue times yValue giving result
		increment result by result
		decrement result by 1
		assign result modulo result to yValue
		increment result by result added to xValue
		assign result times result times result to bigResult
		increment result by xValue times yValue
	*/
	xValue=xValue+3;
	yValue=yValue-xValue;
	result=yValue*xValue;
	result=result=result;
	result--;
	result=result+xValue;
	bigResult=result*result*result;
	result=result+(xValue*yValue);

	printf("result: %d\n", result);
	printf("big result: %d\n", bigResult);
	return 0;
}
