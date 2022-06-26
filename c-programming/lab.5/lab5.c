#include <stdio.h>


int main_12()
{
    int problemNum = 0;
    scanf(" %d", &problemNum);
    
    switch(problemNum)
    {
        case 1: main_1();break; 
        case 2: main_2();break;
        case 3: main_2();break;
        case 4: main_2();break;
        case 5: main_2();break;
        case 6: main_2();break;
        case 7: main_2();break;
        case 8: main_2();break;
        case 9: main_2();break;
        case 10: main_2();break;
        case 11: main_11();break;
        
        default: break;
    }
    
    return 0;
}

int main()
{
	int order;
	int tolov;

	scanf(" %d %d", &order, &tolov);

	int qaytim = 0;

	switch(order)
	{
		case 1:
			printf("Americano\n");
			qaytim = tolov - 500; break;
		case 2:
			printf("Cafe Latte\n");
			qaytim = tolov - 400; break;
		case 3:
			printf("Lemon Tea\n");
			qaytim = tolov - 300; break;
	}

	printf("%d %d\n", qaytim / 500, qaytim % 500 / 100);

	return 0;
}

int main_10()
{
	int a, b;
	char op;

	scanf(" %d %c %d", &a, &op, &b);

	switch(op)
	{
		case '+':
			printf("%d", a + b); break;
		case '-':
			printf("%d", a - b); break;
	}

	return 0;
}

int main_9()
{
	int j1, j2, j3;
	int t1, t2, t3;

	scanf(" %d %d %d", &j1, &j2, &j3);
	scanf(" %d %d %d", &t1, &t2, &t3);

	int strike = 0;
	int ball = 0;

	if(j1 == t1)
	{
		strike++;
	}
	else if(j1 == t2 || j1 == t3)
	{
		ball++;
	}

	if(j2 == t2)
	{
		strike++;
	}
	else if(j2 == t1 || j2 == t3)
	{
		ball++;
	}

	if(j3 == t3)
	{
		strike++;
	}
	else if(j3 == t1 || j3 == t2)
	{
		ball++;
	}

	printf("%dS%dB\n", strike, ball);


	return 0;
}

int main_8()
{	
	char belgi;
	scanf(" %c", &belgi);

	if(belgi >= 'A' && belgi <= 'Z')
	{
		printf("%c\n", belgi + 32);
	}

	else if(belgi >= 'a' && belgi <= 'z')
	{
		printf("%c\n", belgi - 32);
	}

	else
	{
		printf("none\n");
	}

	return 0;
}

int main_7()
{
	int javob;
	scanf(" %d", &javob);
	int taxmin;
	scanf(" %d", &taxmin);

	if(javob == taxmin)
	{	
		printf("Correct\n");
	}
	else
	{
		if(taxmin > javob)
		{
			printf("DOWN\n");
		}
		else
		{
			printf("UP\n");
		}

		scanf(" %d", &taxmin);

		if(javob == taxmin)
		{
			printf("CORRECT\n");
		}
		else if(javob < taxmin)
		{
			printf("DOWN\n");
		}
		else
		{
			printf("UP\n");
		}
	}

	return 0;

int main_6()
{
	int year;
	scanf(" %d", &year);

	if(year % 4 != 0)
	{
		printf("Normal year\n");
	}
	else if(year % 100 != 0)
	{
		printf("Leap year\n");
	}
	else if(year % 400 != 0)
	{
		printf("Normal year\n");
	}
	else
	{
		printf("Leap year\n");
	}

	return 0;
}

int main_5()
{	
	int n;
	scanf(" %d", &n);

	if(n % 2 == 0 && n % 3 == 0 && n % 5 == 0)
	{
		printf("A\n");
	}
	else if(n % 2 == 0 && n % 3 == 0)
	{
		printf("B\n");
	}
	else if(n % 2 == 0 && n % 5 == 0)
	{
		printf("C\n");
	}
	else if(n % 3 == 0 && n % 5 == 0)
	{
		printf("D\n");
	}
	else if(n % 2 == 0 || n % 3 == 0 || n % 5 == 0)
	{
		printf("E\n");
	}
	else
	{
		printf("N\n");
	}

	return 0;
}

int main_4()
{
	int a, b, c;
	scanf(" %d %d %d", &a, &b, &c);

	if(a > b)
	{
		if(a > c)
		{
			printf("%d ", a);
		}
		else
		{
			printf("%d ", c);
		}
	}
	else
	{
		if(b > c)
		{
			printf("%d ", b);
		}
		else
		{
			printf("%d ", c);
		}

	}

	if(a < b)
	{
		if(a < c)
		{
			printf("%d\n", a);
		}
		else
		{
			printf("%d\n", c);
		}
	}
	else
	{
		if(b < c)
		{
			printf("%d\n", b);
		}
		else
		{
			printf("%d\n", c);
		}
	}

	return 0;
}

int main_3()
{
	int a, b;

	scanf(" %d %d", &a, &b);

	if(a > b)
	{
		printf("%d\n", a);
	}
	else
	{
		printf("%d\n", b);
	}
	return 0;
}




	
int main_2()
{
	int a, b;

	scanf(" %d %d", &a, &b);

	if(a * a == b)
	{
		printf("%d*%d=%d\n", a, a, b);
	}
	else if(b * b == a)
	{
		printf("%d*%d=%d\n", b, b, a);
	}
	else
	{
		printf("none\n");
	}

	return 0;
}

int main_1(void) 
{
	int temp;

	scanf(" %d", &temp);

	if(temp >= 0 && temp < 40)
	{
		printf("tashqarida o'yna\n");
	}
	else
	{
		printf("ichkarida o'yna\n");
	}
	
	return 0;
}