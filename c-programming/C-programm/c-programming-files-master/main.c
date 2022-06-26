#include<stdio.h>
#include<stdlib.h>
#include<conio.h>



int main()
{
	// nth fibonacci number
	//int n;
	//int a = 0;
	//int b = 1;
	//int c;
	//scanf_s(" %d", &n);
	////printf("%d %d", a, b);
	//while (n - 2)
	//{
	//	c = a + b;
	//	a = b;
	//	b = c;
	//	n--;
	//}

	//	printf("%d", c);

	/*int n;
	scanf_s(" %d", &n);

	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= i; j++)
			for (int k = 1; k <= j; k++)
				if (i*i == (j*j + k * k))
					printf("%d %d %d\n", k, j, i);
*/


	/*int n;
	scanf_s(" %d", &n);

	while (n / 10)
	{
		int temp = n;
		int sum = 0;
		while (temp)
		{
			sum += temp % 10;
			temp /= 10;
		}

		n = sum;
	}
	printf("%d", n);
*/

	int n;
	int count = 0;

	for(scanf_s(" %d", &n); n;n--)
		for (int temp = n; temp; temp /= 10)
			count += (temp % 10 == 3);

	printf("%d", count);



	_getch();
	return 0;
}
