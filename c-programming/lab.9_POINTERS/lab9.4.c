#include <stdio.h>

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

int main()
{
	char c[10];

	for(char *p = c; p < c + 10; p++)
	{
		scanf(" %c", p);
	}

	int max = 0;
	char *pmax;

	for(char *p = c; p < c + 10; p++)
	{
		int count = 0;
		for(char *q = c; q <= p; q++)
		{
			if(*q == *p)
			{
				count++;
			}
		}

		if(count > max)
		{
			max = count;
			pmax = p;
		}
	}

	printf("%c %d\n", *pmax, max);

	return 0;
}

int main_123123()
{
	// '#'
	char c[20];

	int start = 0;
	while(1)
	{
		scanf(" %c", c + start);
		if(*(c + start) == '#')
		{
			break;
		}

		// duck#

		start++;
	}
	for(char *p = c + start - 1; p >= c; p--)
	{
		printf("%c", *p);
	}

	return 0;
}

int main_4()
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

int main_2342(void) 
{
	int *p, x[5];

	printf("%p %p %p\n", p, &x[0], x);
	p = x;
	printf("%p %p %p\n", p, &x[0], x);

	// for(int *q = x; q < x + 5; q++)
	// {
	// 	scanf(" %d", q);
	// }

	for(int i = 0; i < 5; i++)
	{
		scanf(" %d", x + i);
	}

	for(int i = 0; i < 5; i++)
	{
		printf("%d ", *(x + i));
	}

	// for(int *q = x; q < x + 5; q++)
	// {
	// 	printf("%d ", *q);
	// }
	// for(int *q = x, i = 0; i < 5; i++)
	// {
	// 	printf("%d ", q[i]);
	// }
	int *q = x;
	q[0] = 1; // -> x[0] = 1;

	return 0;
}