#include <stdio.h>
#include <string.h>

int main()
{
	char str[101][101];

	int n;
	scanf(" %d", &n);

	char *min = str[0];

	for(int i = 0; i < n; i++)
	{
		gets(str[i]);
	}


	return 0;
}





int countSubstring(char *a, char *b)
{
	int count = 0;
	for(char *p = a; p<= a + len(a) - len(b); p++)
	{
		if(contains(p, b))
		{
			count++;
			p = p + len(b) - 1;
		}
	}
}



int main()
{

	char str1[101];
	char str2[101];

	gets(str1);
	gets(str2);

	printf("%d\n", countSubstring(str1, str2));

	return 0;
}