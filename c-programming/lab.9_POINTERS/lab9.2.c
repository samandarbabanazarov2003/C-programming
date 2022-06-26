#include <stdio.h>





void swap(int *x, int *y)
{
	int z = *x;
	*x = *y;
	*y = z;
	
}

int main()
{
	int a = 0, b = 1;

	printf("%d %d\n", a, b);
	swap(&a, &b);
	printf("%d %d\n", a, b);
	return 0;
}



// int main()
// {	
// 	int x;
// 	int *px = &x;

// 	scanf(" %d", px);

// 	printf("%d\n", *px);

// 	return 0;
// }





// int main()
// {
// 	int n, m, sum = 0;
// 	int *pn = &n, *pm = &m, *ps = &sum;

// 	scanf(" %d %d", &n, &m);

// 	while(*pn <= *pm)
// 	{
// 		*ps += *pn;
// 		(*pn) ++;
// 	}
	
// 	printf("%d\n", *ps );

// 	return 0;
// }




// 





// int main()
// {
// 	int x = 10;
// 	int *px = &x;

// 	scanf(" %d", px);

// 	printf("%d %d\n", x, *px);

// // 	return 0;

// }




// 	int *p = NULL;

// 	if(p == NULL)
// 	{
// 		int x = 5;
// 		p = &x;
// 	}

// 	printf("%d %p\n", *p, p);
// 	int a = 6;
// 	p = &a;

// 	return 0;
// }

// int main_4()
// {	
// 	int x[5];

// 	for(int *p = x; p <= (x + 4); p++)
// 	{
// 		scanf(" %d", p);
// 	}

// 	int *p;
// 	for(p = x; p < (x + 5); p++)
// 	{
// 		printf("%d ", *p);
// 	}
// 	--p;
// 	printf("%d %p", *p, p);

// 	return 0;
// }


// int main_3()
// {
// 	int *p, x = 5, x1 = 6;

// 	p = &x;
// 	printf("%d\n", *p);

// 	p = &x1;
// 	printf("%d\n", *p);

// 	p = NULL;
// 	printf("%p\n", p);


// 	return 0;
// }

// void swap(int *x, int *y)
// {
// 	int temp = *x;
// 	*x = *y;
// 	*y = temp;
// }

// int main_2()
// {
// 	int a = 5, b = 7;

// 	swap(&a, &b);

// 	printf("%d %d\n", a, b);

// 	return 0;
// }







int main_1()
{
	int n;
	int arr [3] [3] = { { 1, 2, 3,}, { 4, 5, 6, } ,{ 7, 8, 9,} };
	scanf(" %d", &n);

	for(int ustun = 0; ustun < n; ustun++)
	{
		for(int qator = 0; qator < n; qator++)
		{
			
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
