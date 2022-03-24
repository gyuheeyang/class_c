#include<stdio.h>
//함수를 사용하여 곱하는 프로그램 만들기 


//함수 선언
int mul(int a, int b){
	int result;
	result = a*b;
	return result;
}


//int main 
 int main(){
	int returnData;	
	returnData = mul(2,10);
	printf("%d", returnData);
	return 0;
} 


//returnData의 값을 구하기 위해선 int main 위에 이미 선언된 함수를 사용해야된다. 
 
//16라인의 mul(2,10) 값 2와 10은 6라인 int a, int b 값으로 들어 간다 
//8라인에서 result 값은 a*b 즉 2*10이며 9라인에서 result 값이 return된다 
//15번라인에서 returnData는 mul(2,10)이므로 20이 되어 17라인에서 프린트 된다 !^^ 
