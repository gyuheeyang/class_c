#include<stdio.h> //거꾸로 값을 출력해야 하기 때문에 배열을 사용하는 것이다 
//while if문 사용 => 뭔가로 깔끔하게 바꿀 수 있다  if문 안쓰고..
int main()
{
	int decimal = 13;
	int binary[20]= {0, };
	
	int position =0;
	while(decimal !=0)
	{
		binary[position] = decimal%2;
		decimal = decimal /2;
		
		position++;
	}
	
	for (int i = position -1 ; i >= 0; i--)
	{
		printf("%d", binary[i]);
	}	
	
	printf("\n");
	
	return 0;	
	 
 } 
