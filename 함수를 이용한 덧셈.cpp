#include<stdio.h>
//�Լ��� ����Ͽ� ���ϴ� ���α׷� �����  

//�Լ� ����
int plus(int a, int b){
	int result;
	result = a+b;
	return result; 
} 

int main(){
	int returnData;	
	returnData = plus(2,10);
	printf("%d", returnData);
	return 0;
} 
