#include<stdio.h>

int main()
{
	int numArr[10] = {11,22,33,44,55,66,77,88,99,110}; //ũ�Ⱑ 10�� int�� �迭  
	
	
	for (int i =0; i<10; i++) //�迭�� ��� ������ŭ �ݺ�  
	{
		numArr[i] = numArr[i]*2;
	}
	for (int i = 0;  i<10; i++) //�迭�� ��� ������ŭ �ݺ�  
	{
		printf("%d\n", numArr[i]);
	}
	
	return 0;
}
