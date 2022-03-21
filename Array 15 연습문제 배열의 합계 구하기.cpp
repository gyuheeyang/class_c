#include<stdio.h>

int main()
{
	int numArr[10] = {11,22,33,44,55,66,77,88,99,110}; //크기가 10인 int형 배열  
	
	
	for (int i =0; i<10; i++) //배열의 요소 개수만큼 반복  
	{
		numArr[i] = numArr[i]*2;
	}
	for (int i = 0;  i<10; i++) //배열의 요소 개수만큼 반복  
	{
		printf("%d\n", numArr[i]);
	}
	
	return 0;
}
