#include<stdio.h>
//�Լ��� ����Ͽ� ���ϴ� ���α׷� ����� 


//�Լ� ����
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


//returnData�� ���� ���ϱ� ���ؼ� int main ���� �̹� ����� �Լ��� ����ؾߵȴ�. 
 
//16������ mul(2,10) �� 2�� 10�� 6���� int a, int b ������ ��� ���� 
//8���ο��� result ���� a*b �� 2*10�̸� 9���ο��� result ���� return�ȴ� 
//15�����ο��� returnData�� mul(2,10)�̹Ƿ� 20�� �Ǿ� 17���ο��� ����Ʈ �ȴ� !^^ 
