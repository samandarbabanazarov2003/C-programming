#include <stdio.h>
#include <string.h>

int main()
{
	char str1[21], str2[21];

	scanf(" %s %s", str1, str2);

	printf("%ld %ld\n", strlen(str1), strlen(str2));

	if(strcmp(str1, str2) > 0)
	{
		printf("%s\n", str1);
	}
	else
	{
		printf("%s\n", str2);
	}

	char str3[61];

	strcpy(str3, str1);
	strcat(str3, str2);
	strcat(str3, str1);

	printf("%s\n", str3);
	
	return 0;
}

int main_123()
{
	char c[3][20] = 
	{
		"Time is gold",
		"No pain, no gain",
		"No sweat, no sweet"
	};

	int count = 0;
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < strlen(c[i]); j++)
		{
			if(c[i][j] == 'a')
			{
				count++;
			}
		}
	}

	return 0;
}


int main_1() 
{
	char x[] = "Hello World";
	char x1[] = "Hello";

	x[5] = 'b';
	// '\0' - null character | string tugaganini bildiradi

	printf("%s %ld %ld\n", x, sizeof(x), sizeof(x1));

	scanf(" %s", x);
	printf("%s %ld %ld\n", x, sizeof(x), sizeof(x1));
	// %s - space yoki enter gacha o'qiydi

	for(int i = 0; i < sizeof(x); i++)
	{
		printf("%c", x[i]);
	}


	return 0;
}

int main_12313()
{	
	char *pc = "To be or not to be: that's the question";

	int count = 0;
	for(int i = 0; i < strlen(pc); i++)
	{
		if(pc[i] == 't')
		{
			count++;
		}
	}

	printf("%d\n", count);

	return 0;
}