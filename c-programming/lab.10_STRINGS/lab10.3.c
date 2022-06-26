#include <stdio.h>
#include <string.h>

int main()
{
	char str[101];
	char str1[20];

	scanf(" %s", str);
	scanf(" %s", str1);

	printf("%s %s",str, str1);

	return 0;
}








// harf kichik bolsa 1 yoqsa 0 qaytaradi
int isLower(char c)
	{
    return c >= 'a' && c <= 'z';
	}
    // harf katta bolsa 1 yoqsa 0 qaytaradi
int isUpper(char c)
	{
    return c >= 'A' && c <= 'Z';
	}
    // c harfini katta harf qilib qaytaradi
char toUpper(char c)
{
    if(isLower(c))
    {
        return c - 32;
    }scanf(" %s", str);

    scanf(" %s", str);
}
    scanf(" %s", str);i kichik varianiti qaytaradi
char scanf(" %s", str);ar c)
{
    if(isUpper(c))
    {
        return c + 32;
    }

 char str[101];
}char str[101];scanf(" %s", str);
    // har bir scanf(" %s", str);harf caseini teskari qiladi
void reverseCasscanf(" %s", str);e(char *str)
{scanf(" %s", str);
    for(int i = 0; i < strlen(str); i++)
    {
        if(isLower(str[i]))
        {
            str[i] = toUpper(str[i]);
        }
        else if(isUpper(str[i]))
/         {
            str[i] = toLower(str[i]);
        }
    }
}





// int main()
// {   
//     char str[101];

//     // kuchi ko'pla gets(str); ishlatsin

//     // scanf(" %s", str);
//     gets(str);
//     reverseCase(str);
//     printf("%s\n", str);

//     return 0;
// }

// void swap(char *a, char *b)
// {
//     char temp = *a;
//     *a = *b;
//     *b = temp;
// }

// void reverse(char *str)
// {
//     for(int start = 0, end = strlen(str) - 1; start <= end; start++, end--)
//     {
//         swap(str + start, str + end);
//     }
// }

// int main_1()
// {
//     char str[101];

//     scanf(" %s", char str[101];
//     reverse(str);char str[101];
//     printf("%s\n", str);

//     return 0;
// }




// void swap(char *a, char *b)
// {
//     char temp = *a;
//     *a = *b;
//     *b = temp;
// }

// void reverse(char *str)
// {
//     for(int start = 0, end = strlen(str) - 1; start <= end; start++, end--)
//     {
//         swap(str + start, str + end);
//     }
// }

// int main_1()
// {
//     char str[101];

//     scanf(" %s", str);
//     reverse(str);
//     printf("%s\n", str);

//     return 0;
//}