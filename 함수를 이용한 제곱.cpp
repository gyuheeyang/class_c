#include<stdio.h>
//사칙연산과 제곱하는 코드 짜기 

//함수 선언
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


