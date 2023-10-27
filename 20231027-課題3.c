#include<stdio.h>

int main(void)
{
	int a,result;

	printf("道に迷ってしまった。分かれ道が三つある。どの道を進もうか？\n1.真っすぐ\n2.右の道\n3.左の道\n(数字を入力してね)\n");
	scanf_s("%d", &a);

	if (a ==1) 
	{printf("残念、行き止まりみたいだ\n");}

	else if(a==2)
	{ printf("最初の場所に戻ってきてしまった...\n"); }

	if (a == 3)
	{
		printf("やった!見知った場所まで戻ってこれた!\n");
	}

	
	

	return 0;
}