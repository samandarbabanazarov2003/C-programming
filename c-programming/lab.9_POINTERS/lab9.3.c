#include <stdio.h>


int main()
{
	int x[100];
	int n;
	
	scanf(" %d", &n);
	for(int *p = x; p < x + n; p++)
	{
		scanf(" %d", p);
	}

	int *pmin, *pmax;
	pmin = pmax = x;

	for(int *p = x + 1; p < x + n; p++)
	{
		if(*p < *pmin)
		{
			pmin = p;
		}
		else if(*p > *pmax)
		{
			pmax = p;
		}
	}

	printf("%d %d\n", *pmin, *pmax);

	return 0;
}
	

int main_2()
{

	int n, m, sum = 0;
    int *pn = &n, *pm =&m, *ps =&sum; 
    
    scanf(" %d %d", pn ,pm);

        while (*pn <= *pm)
        {
            *ps += *pn;
            (*pn)++;
        }
        printf("%d\n", *ps);

	return 0;
}





	int main_1()
	{
		int x;
		scanf( "%d", &x);

		int *px = &x;

		scanf(" %d", px);

		printf("%d", *px);

		return 0;
	}





























int main_8()
{

	int x[5];

	for(int *p = x; p < x + 5; p++)
	{	
		scanf(" %d", p); 
	}
	
	for(int *p = x; p < x + 5; p++)
	{	
		printf("%d ", *p); 
	}
	return 0;
}


int main_7()
{
	int x[5];
	int *p = x;

	for(int i = 0; i < 5; i++)
	{
		scanf("%d", &p[i]);
	}
	for(int i = 0; i < 5; i++)
	{
		printf("%d ", p[i]);
	}
	return 0;
}


int main_6()
{
	int x[5] = { 0 };

	scanf(" %d", x);
	printf("%d\n", *x);

	int *p = x;
	for(int i = 0; i < 5; i++)
	{
		printf("%d ", p[i]);
	}

	return 0;
}

int main_5()
{	
	char a = 5;
	char *p = &a;

	printf("%d\n", *p);

	return 0;
}

void swap(int *x, int *y)
{
	int z = *x;
	*x = *y;
	*y = z;
}

int main_4()
{
	int s[5];

	for(int i = 0; i < 5; i++)
	{
		scanf(" %d", &s[i]);
	}

	for(int i = 0; i < 4; i++)
	{
		if(s[i] > s[i+1])
		{
			swap(&s[i], &s[i+1]);
		}
	}

	for(int i = 0; i < 5; i++)
	{
		printf("%d ", s[i]);
	}

	return 0;
}

int main_3()
{
	int a = 0, b = 1;

	printf("%d %d\n", a, b);
	swap(&a, &b);
	printf("%d %d\n", a, b);

	return 0;
}

int main_22()
{
	int *p = NULL;

	*p = 7;
	printf("%d\n", *p);


	return 0;
}

int main_11(void) 
{
	int x;
	int *px = &x;

	scanf(" %d", px);
	printf("%d\n", *px);

	return 0;
}