#include <stdio.h>

int main()
{
	int x[10];

	for(int i = 0; i < 10; i++)
	{
		printf("%d %#x\n", x[i], x[i]);
	}
	//nollar
	return 0;
}









int main()
{
	char belgilar[1000];
	int index = 0;

	//task 1
	while (1)
	{
		char c;
		scanf("%c", &c);
		if(c == '#')
		{
			break;
		}
		
		belgilar[index++] = c;
	}
	//biz kiritkan belgi panjaraga teng bolsa toxtasin!

	//task 2

	for(int i = 0; i < index; i++)
	{
		if(belgilar[i] >= 'a' && belgilar[i] <= 'z')
		{
			belgilar[i] -= 32;
		}
	}

	//task 3

	for(int i = 0; i < index; i++)
	{
		if(belgilar[i] >= 'a' && belgilar[i] <= 'z')
		{
			printf("%c", belgilar[i]);
		}
	}
	return 0;
}




int main()
{
	int arr[100];
	int n;
	scanf(" %d", &n);

	for(int i = 0; i < n; i++)
	{
		scanf(" %d", &arr[i]);
	}
	
	int sum = 0;
	for(int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	printf("%d\n", sum);


	return 0;
}



// int main()
// {
// 	int x[5]; //declaration |qiymat berilmagan| buni ichida faqat musor yani garbage value
// 	int x1[5] = { 1, 2, 3, 4, 5 }; //initalization | srazu qiymaat berish
// 	int x2[5] = { 1, 3, 4, 5}; // agar qiymat berilmagani qob ketsa u ozi nol bolib chop etiladi
// 	int x3[5] = { 1 }; // 1 0 0 0 0
// 	int x4[100] = { 0 }; //100 ta nol
// 	printf("%d\n", x1[4]);

	//davomi

// 	int x5[] = { 1, 2, 3, 4, 5}; //nechta son yozgan bosak shuncha joy beradi
// 	int x6[] = { 1 }; //hajmi 1
// 	int x7[5] = { 1 }; // bu yerda hajmi bor shuning uchun 1 qolgani 0 0 0 0
// 	return 0;
// }



//Juftlar alohida qilish
// int main()
// {
// 	int arr[5];

// 	for(int i = 0; i < 5; i++)
// 	{
// 		scanf(" %d", &arr[i]);
// 	}
	
// 	for(int i = 0; i < 5; i++)
// 	{
// 		if(arr[i] % 2 == 0)
// 		{
// 			printf("%d %d\n", arr[i], i);
// 		}
// 	}
// 	return 0;
// }





// Bu loop da ishlangani
// int main()
// {
// 	int x[10];

// 	for(int i = 0; i < 10; i++)	
// 	{
// 		scanf(" %d", &x[i]);
// 	}
// 	for(int i = 0; i < 10; i++)
// 	{
// 		printf("%d ", x[i]);
// 	}
// 	return 0;
// }




// int main()
// {
// 	int s[5];
// //alohida yozsak ham boladi Scanf ni!!
// 	scanf(" %d %d %d %d %d", &s[0], &s[1], &s[2], &s[3], &s[4]);

// 	printf("%d\n", s[0] );
// 	printf("%d\n", s[1] );
// 	printf("%d\n", s[2] );
// 	printf("%d\n", s[3] );
// 	printf("%d\n", s[4] );

// 	return 0;
// }









/////////////19
// int change(int x)
// {
// 	x = 5;
// 	return x;
// }

// int main()
// {
// 	int arr[5] = { 0 };

// 	int result = change(arr[0]);

// 	printf("%d", result);

// 	return 0;
// }

// void fillArray(int arr[], int size)
// {
// 	srand(time(0));
// cturn array
// 	// return arr[size];
// }

// void fillSon(int a)
// {
// 	srand(time(0));
// 	a = rand() % 1000;
// }

// int main_123123()
// {
// 	int x[10] = { 0 }, son = 0;

// 	fillArray(x, 10);
// 	fillSon(son);

// 	printf("%d son\n", son);

// 	for(int i = 0; i < 10; i++)
// 	{
// 		printf("%d ", x[i]);
// 	}

// 	return 0;
// }


// int main_1231()
// {	
// 	int arr[3][3] = { 0 };

// 	int qator, ustun, son;

// 	scanf(" %d %d %d", &qator, &ustun, &son);

// 	for(int i = 0; i < 3; i++)
// 	{
// 		for(int j = 0; j < 3; j++)
// 		{
// 			printf("%d ", arr[i][j]);
// 		}
// 		printf("\n");
// 	}

// 	arr[qator-1][ustun-1] = son;

// 	for(int i = 0; i < 3; i++)
// 	{
// 		for(int j = 0; j < 3; j++)
// 		{
// 			printf("%d ", arr[i][j]);
// 		}
// 		printf("\n");
// 	}

// 	return 0;
// }

// int main_123()
// {
// 	int baholar[2][3];

// 	for(int student = 0; student < 2; student++)
// 	{
// 		for(int fan = 0; fan < 3; fan++)
// 		{
// 			baholar[student][fan] = rand() % 100;
// 		}
// 	}

// 	for(int student = 0; student < 2; student++)
// 	{
// 		for(int fan = 0; fan < 3; fan++)
// 		{
// 			printf("a[%d][%d] = %d\t", student, fan, baholar[student][fan]);
// 		}

// 		printf("\n");
// 	}

// 	return 0;
// }

// int main_4()
// {
// 	int arr[10] = { 0 };
// 	int sumEven = 0;
// 	int sumOdd = 0;

// 	srand(time(0));

// 	for(int i = 0; i < 10; i++)
// 	{
// 		arr[i] = rand() % 100 + 1;

// 		if(arr[i] % 2 == 0)
// 		{
// 			sumEven += arr[i];
// 		}
// 		else
// 		{
// 			sumOdd += arr[i];
// 		}
// 	}



// 	return 0;
// }

// int main_3()
// {
// 	int x[5] = { 0, 5 }; // qolganlari 0
// 	char c[] = { 'D', 'u', 'c', 'k' };

// 	for(int i = 0; i < 5; i++)
// 	{
// 		printf("%d %#x\n", x[i], x[i]);
// 	}

// 	printf("%lu bayt hajmli array\n", sizeof(x));
// 	printf("%lu  array\n", sizeof(c) / sizeof(char));

// 	return 0;
// }

// int main_2()
// {
// 	int x[7];
// 	x[0] = 80;
// 	x[1] = 71;
// 	x[2] = 91;
// 	x[3] = 95;
// 	x[4] = 77;
// 	x[5] = 79;
// 	x[6] = 88;

// 	for(int i = 0; i < 7; i++)
// 	{
// 		if(x[i] >= 80)
// 		{
// 			printf("%d %d\n", i, x[i]);
// 		}
// 	}
// 	return 0;
// }

// int main_1(void) 
// {
// 	int a;

// 	int x[5]; // elon qilish
// 	char c[10]; // elon qilish

// 	x[1] = 5; // 1 - index


// 	for(int i = 0; i < 5; i++)
// 	{
// 		printf("%d\n", x[i]);
// 	}

// 	return 0;
// }