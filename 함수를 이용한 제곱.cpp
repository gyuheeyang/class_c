#include<stdio.h>
//��Ģ����� �����ϴ� �ڵ� ¥�� 

//�Լ� ����
int powA(int a, int b){
	int result = 1;  							
	for (int index = 0; index < b; index++){
		result *=a;
	}  
	return result ; 
} 

int main(){
	int returnData;	
	returnData = powA(2,10);
	printf("%d", returnData);
	return 0;
} 


