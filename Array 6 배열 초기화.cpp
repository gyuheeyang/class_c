#include<stdio.h>
//0이 아닌 다른 값으로 초기화를 하는 것 안됨! for문 사용해야됨  
int main()
{
	int numArr[10] = {0,}; // 배열의 요소를 모두 0으로 초기화  
	
	printf("%d\n", numArr[0]);
	printf("%d\n", numArr[5]);
	printf("%d\n", numArr[9]);
	
	return 0;
 } 
//실행결과 모두 0 
