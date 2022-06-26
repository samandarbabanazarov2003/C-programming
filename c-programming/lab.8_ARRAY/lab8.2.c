#include <stdio.h>

int main()
{
	char arr[20], *p = arr;

	while(1)
	{
		scanf(" %c", p);
		if(*p == '#')
		{
			break;
		}

		p++;
	}

	for(p = p - 1; p >= arr; p--)
	{
		printf("%c", *p);
	}

	return 0;
}

int main_222222()
{
	int n, m, *pn = &n, *pm = &m;
	int sum = 0, *psum = &sum;

	scanf(" %d %d", pn, pm);

	while(*pn <= *pm)
	{
		*psum += *pn;

		(*pn)++;
	}

	printf("%d\n", *psum);

	return 0;
}

int main_4444444()
{
	int n, arr[100], *pn = &n;

	scanf(" %d", pn);

	for(int *p = arr; p < arr + *pn; p++)
	{
		scanf(" %d", p);
	}

	int *pmax, *pmin;
	pmax = pmin = arr;

	for(int *p = arr + 1; p < arr + *pn; p++)
	{
		if(*pmax < *p)
		{
			pmax = p;
		}
		else if(*pmin > *p)
		{
			pmin = p;
		}
	}

	printf("%d %d\n", *pmax, *pmin);

	return 0;
}

int main_000()
{
	int x = 4, *px = &x;
	int **ppx = &px;

	printf("%p - x address\n", &x);
	printf("%p - px qiymati\n", px);
	printf("%p - px addressi\n", &px);
	printf("%p - pxx qiymati\n", ppx);
	printf("%p - pxx addressi\n", &ppx);
	printf("%d - x qiymati\n", **ppx);
	return 0;
}

int main_12()
{
	int a1[3] = { 0 }, a2[2], a3[5];
	int *x[3];

	x[0] = a1;
	x[1] = a2;
	x[2] = a3;

	x[0][0] = 1;

	int a, b, c;
	x[0] = &a;
	x[1] = &b;
	x[2] = &c;

	*x[0] = -1;
	*(x[0]) = -1;
	(*x)[0] = -1;

	return 0;
}

int main_5()
{
	int n;
	
	scanf(" %d", &n);

	int x[n][n];

	for(int i = 0; i < n; i++)
	{
		int son = i;
		for(int j = 0; j < n; j++)
		{
			x[i][j] = son % 2;
			son++;
		}
	}

	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			printf("%d ", x[i][j]);
		}

		printf("\n");
	}

	return 0;
}

void almashtir(int x, int y)
{
	int z;
	z = x;
	x = y;
	y = z;

}

void readArray(int x[], int size)
{
	for(int i = 0; i < size; i++)
	{
		scanf(" %d", &x[i]);
	}
}

int main_4()
{
	// int a = 0, b = 1;
	// almashtir(a, b);
	// printf("%d %d\n", a, b);

	int arr[3] = { 0 };
	readArray(arr, 3);

	for(int i = 0; i < 3; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}

int main_3()
{
	int x[2][3][3] = { 0 };

	for(int qator = 0; qator < 3; qator++)
	{
		for(int ustun = 0; ustun < 3; ustun++)
		{
			x[1][qator][ustun] = 1;
		}
	}

	for(int sloy = 0; sloy < 2; sloy++)
	{
		for(int qator = 0; qator < 3; qator++)
		{
			for(int ustun = 0; ustun < 3; ustun++)
			{
				printf("%d ", x[sloy][qator][ustun]);
			}
			printf("\n");
		}
		printf("Sloy tugadi\n");
	}

	return 0;
}

int main_2()
{
	int x[3][3] = { 0 };

	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			printf("%d ", x[i][j]);
		}

		printf("\n");
	}

	int r, c, n;

	scanf(" %d %d %d", &r, &c, &n);

	x[r-1][c-1] = n;

	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			printf("%d ", x[i][j]);
		}

		printf("\n");
	}

	return 0;
}

int main_1() 
{	
	int x[3][3];

	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			scanf(" %d", &x[i][j]);
		}
	}

	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			printf("%d ", x[i][j]);
		}

		printf("\n");
	}

	return 0;	
}


