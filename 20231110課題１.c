#include<stdio.h>

int main(void)
{
	for (int i=0; i < 10000; i++)
	{
		if (i % 13 == 0)
		{
			printf("%d ", i);
		}

		else if (i % 17 == 0)
		{
			printf("%d ", i);
		}
	}

		return 0;
}