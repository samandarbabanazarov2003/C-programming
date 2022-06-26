#include <stdio.h>

int main_1() 
{
	int son;

	scanf(" %d", &son);

	int sanoq = 1;
	while(sanoq <= 9)
	{
		printf("%d*%d=%d\n", sanoq, son, sanoq * son);

		sanoq++;
	}

	return 0;
}

int main_2()
{
	int sum = 0;
	int son = 0;

	while(sum <= 100)
	{
		sum += son;
		son++;
	}

	printf("%d\n", --son);

	return 0;	
}

int main_3()
{
	char belgi;
	int son;

	scanf(" %c %d", &belgi, &son);

	while(son--)
	{
		printf("%c ", belgi);
	}


	return 0;
}

int main_4()
{	
	int sumEven = 0;
	int sumOdd = 0;

	for(int son = 1; son <= 10; son++)
	{
		if(son % 2 == 0)
		{
			sumEven += son;
		}
		else
		{
			sumOdd += son;
		}
	}

	printf("%d\n%d\n", sumOdd, sumEven);

	return 0;
}

int main_5()

{
	int raqam = 1;
	for(int qator = 5; qator; qator--)
	{
		for(int ustun = 1; ustun <= qator; ustun++)
		{
			printf("%2d ", raqam++);
		}
		printf("\n");
	}

	return 0;
}

int main_6()
{
	int son;
	scanf(" %d", &son);

	for(int start = 2; start <= son; start++)
	{
		int bolinuvchisiBor = 0;
		for(int boluvchi = 2; boluvchi < start; boluvchi++)
		{
			if(start % boluvchi == 0)
			{
				bolinuvchisiBor = 1;
				break;
			}
		}
		
		if(!bolinuvchisiBor)
		{
			printf("%d ", start);
		}

	}	
	return 0;
}

int main_7()
{
	int sum = 0;
	int sanoq = 0;

	while(1)
	{
		int son;
		scanf(" %d", &son);

		if(son == 0)
		{
			break;
		}

		sum += son;
		sanoq++;
	}

	printf("%d\n%d\n", sum, sum / sanoq);

	return 0;
}

int main_8()
{
	for(int son = 2; son <= 10; son++)
	{
		int fact = son;
		printf("%d!=", son);
		for(int i = 1; i < son; i++)
		{
			fact *= i;
			printf("%d*", i);
		}

		printf("%d=%d\n", son, fact);
	}

	return 0;
}

int main_9()
{
	int qatorlar = 10;

	for(int qator = 1; qator <= qatorlar; qator++)
	{
		int joylar = qatorlar - qator;
		while(joylar--)
		{
			printf(" ");
		}

		int yulduz = qator * 2 - 1;
		while(yulduz--)
		{
			printf("*");
		}

		printf("\n");
	}

	for(int qator = qatorlar - 1; qator >= 1; qator--)
	{
		int joylar = qatorlar - qator;
		while(joylar--)
		{
			printf(" ");
		}

		int yulduz = qator * 2 - 1;
		while(yulduz--)
		{
			printf("*");
		}

		printf("\n");
	}

	return 0;
}

int main_10()
{
	int son;
	int nollar = 0;

	scanf(" %d", &son);

	for(int i = 1; i <= son; i++)
	{
		int iCopy = i;
		while(iCopy)
		{
			if(iCopy % 10 == 3)
			{
				nollar++;
			}
			iCopy /= 10;
		}
	}

	printf("%d\n", nollar);

	return 0;
}

int main_11()
{
	for(int qator = 1; qator <= 10; qator++)
	{
		int son = qator;
		for(int ustun = 1; ustun <= 10; ustun++)
		{
			printf("%d ", son++ % 10);
		}

		printf("\n");
	}

	return 0;
}

int main_12()
{	
	int n;
	scanf(" %d", &n);

	int son = 1;

	for(int qator = 1; qator <= n; qator++)
	{
		int joylar = n - qator;
		while(joylar--)
		{
			printf(" ");
		}

		for(int ustun = 1; ustun <= qator; ustun++)
		{
			printf("%d ", son++ % 10);
		}

		printf("\n");
	}

	return 0;
}