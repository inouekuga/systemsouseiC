#include<stdio.h>

int main(void)
{   
	int* i;
	char a;

	printf("char‚ð“ü—Í");
	scanf_s("%c", &a);

	for (i = 0; i < a; i++)
	{
		if (a[i]<= 65 && 90 >= a[i])
		{
			printf("‘å•¶Žš‚ª‚ ‚é");
		}

		else { }
	}


	return 0;
}