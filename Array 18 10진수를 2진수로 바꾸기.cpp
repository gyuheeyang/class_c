#include<stdio.h> //�Ųٷ� ���� ����ؾ� �ϱ� ������ �迭�� ����ϴ� ���̴� 
//while if�� ��� => ������ ����ϰ� �ٲ� �� �ִ�  if�� �Ⱦ���..
int main()
{
	int decimal = 13;
	int binary[20]= {0, };
	
	int position =0;
	while(1)
	{
		binary[position] = decimal%2;
		decimal = decimal /2;
		
		position++;
		 
		if (decimal ==0)   //if ������ 9��° �ٿ� �־� ������  while (decimal != 0) 18-1 ����  
			break;
	}
	
	for (int i = position -1 ; i >= 0; i--)
	{
		printf("%d", binary[i]);
	}	
	
	printf("\n");
	
	return 0;	
	 
 } 
