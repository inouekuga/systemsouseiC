#include<stdio.h>

int main(void)
{
	int a;

	printf("数字を入力してください");
	scanf_s("%d", &a);

	if (a % 2 == 0) 
	{printf("%dは偶数である\n", a);}
	else { printf("%dは奇数である\n", a); }
	
	

	return 0;
}
