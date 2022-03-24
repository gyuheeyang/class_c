#include<stdio.h>
//함수를 사용하여 더하는 프로그램 만들기  

//함수 선언
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
