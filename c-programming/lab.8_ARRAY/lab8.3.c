#include <stdio.h>


int main()
{
	int n;
	int arr [3] [3] = { { 1, 2, 3,}, { 4, 5, 6, } ,{ 7, 8, 9,} };
	scanf(" %d", &n);

	for(int ustun = 0; ustun < n; ustun++)
	{
		for(int qator = 0; qator < n; qator++)
		{
			scanf("%d", &arr[ustun] [qator]);
		}
	}

	for(int qator = 0; qator < n; qator++)
	{
		for(int ustun = 0; ustun < n; ustun++)
		{
			printf("%d", arr[ustun] [qator]);
		}
		printf("\n");
	}

	return 0;
}















void readArray(int arr[], int count)
{
	for(int i = 0; i < count; i++)
	{
		scanf(" %d", &arr[i]);
	}
}

int arraySum(int arr[], int count)
{
	int sum = 0;
	for(int i = 0; i < count; i++)
	{
		sum += arr[i];
	}

	return sum;
}

int main_1()
{	
	int x[1000];

	int n;

	scanf(" %d", &n);
	readArray(x, n);

	int sum = arraySum(x, n);
	double avg = (double)sum / n;

	for(int i = 0; i < n; i++)
	{
		if(x[i] >= avg)
		{
			printf("%d ", x[i]);
		}
	}


	return 0;
}

int main_2()
{
	int x[1000], n;
	scanf(" %d", &n);

	readArray(x, n);

	for(int i = 0; i < n - 1; i++)
	{
		if(x[i] >= x[i+1])
		{
			int temp = x[i];
			x[i] = x[i+1];
			x[i+1] = temp;
		}
	}

	for(int i = 0; i < n; i++)
	{
		printf("%d\n", x[i]);
	}

	return 0;
}

int main_3()
{
	int n, x[10];

	scanf(" %d", &n);

	for(int i = 0; i < n; i++)
	{
		scanf(" %d", &x[i]);
	}

	for(int i = 0; i < n; i++)
	{
		if(x[i] % 2 == 0)
		{
			printf("%d ", x[i]);
		}
	}

	return 0;
}

void toUpper(char x[], int n)
{
	for(int i = 0; i < n; i++)
	{
		if(x[i] >= 'a' && x[i] <= 'z')
		{
			x[i] = x[i] - 32;
		}
	}
}

int main()
{	
	int n;
	char belgilar[20];

	scanf(" %d", &n);

	for(int i= 0; i < n; i++)
	{#include <stdio.h>


int main()
{
	int n;
	int arr [3] [3] = { { 1, 2, 3,}, { 4, 5, 6, } ,{ 7, 8, 9,} };
	scanf(" %d", &n);

	for(int ustun = 0; ustun < n; ustun++)
	{
		for(int qator = 0; qator < n; qator++)
		{
			scanf("%d", &arr[ustun] [qator]);
		}
	}

	for(int qator = 0; qator < n; qator++)
	{
		for(int ustun = 0; ustun < n; ustun++)
		{
			printf("%d", arr[ustun] [qator]);
		}
		printf("\n");
	}

	return 0;
}















void readArray(int arr[], int count)
{
	for(int i = 0; i < count; i++)
	{
		scanf(" %d", &arr[i]);
	}
}

int arraySum(int arr[], int count)
{
	int sum = 0;
	for(int i = 0; i < count; i++)
	{
		sum += arr[i];
	}

	return sum;
}

int main_1()
{	
	int x[1000];

	int n;

	scanf(" %d", &n);
	readArray(x, n);

	int sum = arraySum(x, n);
	double avg = (double)sum / n;

	for(int i = 0; i < n; i++)
	{
		if(x[i] >= avg)
		{
			printf("%d ", x[i]);
		}
	}


	return 0;
}

int main_2()
{
	int x[1000], n;
	scanf(" %d", &n);

	readArray(x, n);

	for(int i = 0; i < n - 1; i++)
	{
		if(x[i] >= x[i+1])
		{
			int temp = x[i];
			x[i] = x[i+1];
			x[i+1] = temp;
		}
	}

	for(int i = 0; i < n; i++)
	{
		printf("%d\n", x[i]);
	}

	return 0;
}

int main_3()
{
	int n, x[10];

	scanf(" %d", &n);

	for(int i = 0; i < n; i++)
	{
		scanf(" %d", &x[i]);
	}

	for(int i = 0; i < n; i++)
	{
		if(x[i] % 2 == 0)
		{
			printf("%d ", x[i]);
		}
	}

	return 0;
}

void toUpper(char x[], int n)
{
	for(int i = 0; i < n; i++)
	{
		if(x[i] >= 'a' && x[i] <= 'z')
		{
			x[i] = x[i] - 32;
		}
	}
}

int main()
{	
	int n;
	char belgilar[20];

	scanf(" %d", &n);

	for(int i= 0; i < n; i++)
	{
		scanf(" %c", &belgilar[i]);
	}

	toUpper(belgilar, n);

	for(int i= 0; i < n; i++)
	{
		printf("%c", belgilar[i]);
	}

	return 0;
}










