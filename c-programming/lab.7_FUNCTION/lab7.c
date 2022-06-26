#include <stdio.h>

        //6
int sqr(int n)
{
	int nSqr = n * n;
	return nSqr;
}
int main(void)
{
	int n;
	scanf(" %d", &n);
	int result = sqr(5);
	printf("%d\n", sqr(n));
	return 0;
}






             // 7//
int isTub(int n)
{
	int tub = 1;
	for(int i = 2; i < n; i++)
	{
		if(n % i == 0)
		{
			tub = 0;
			break;
		}
	}
	return tub;
}
int main()
{
	int n;
	scanf(" %d", &n);

	if(isTub(n))
	{
		printf("%d Tub son", n);
	}
	else
	{
		printf("%d Tub son emas\n", n);
	}
		return 0;
}





                  8
double circleArea(double radius)
{
	double Pi = 3.14;
	double yuza = Pi * radius * radius;

	return yuza;
}
int main()
{
	double r;

	scanf(" %lf", &r);

	double yuza = circleArea(r);
	printf("%lf", yuza);

	return 0;
}






                   9
int isInRange(int min, int max, int x)
{
	return x >= min && x <= max;
}
int main()
{
	int min, max, x;

	scanf(" %d %d %d", &min, &max, &x);

	int orasidami = isInRange(min, max, x);

	if(orasidami)
	{
		printf("Orasida\n");
	}
	else
	{
		printf("Orasida emas\n");
	}
	return 0;
}


      


	        10
int totalCoffees(int sotibOlindi)
{
	int bonuslar = sotibOlindi / 6;

	return sotibOlindi + bonuslar;
}
int main()
{
	int sotibOlindi;
	scanf(" %d", &sotibOlindi);

	printf("Jami kofelar: %d", totalCoffees(sotibOlindi));

	return 0;
}







             11
void printBolinuvchilar(int x)
{
	for(int sanoq = 1; sanoq <= x; sanoq++)
	{
		if(x % sanoq == 0)
		{
			printf("%d ", sanoq);
		}
	}
}
int main()
{
	int n;
	
	scanf(" %d", &n);

	printBolinuvchilar(n);

	return 0;
}



















			
13
int main()
{

	printf("-----------------------\n");
	printf("|     ILMHUB CAFE     |\n");
	printf("-----------------------\n");
	printf("\n");
	printf("\n");
	printf("        TANLANG \n");
	printf("1. Ice latte\n");
	printf("2. Americano\n");
	printf("3. Ko'k Choy\n");
	printf("4. Lemon Choy\n");


	return 0;
}

