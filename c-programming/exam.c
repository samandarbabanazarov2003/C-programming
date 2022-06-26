#include <stdio.h>
#include <stdlib.h>


    int isDigit(char c) { return c >= '0' && c <= '9';}
    int isUpper(char c) { return c >= 'A' && c <= 'Z';}
    int isLower(char c) { return c >= 'a' && c <= 'z';}

int main()
{
    int str[101];

    scanf(" %s", str);

    while(1)
    {

        break;
    }

    int sum = 0;
    int upper = 0;
    int lower = 0;
    int special = 0;

    for(char *p = str; *p; p++)
    {
        if(isDigit(*p))
        {
            sum += (*p - '0');
        }
        else if(isUpper(*p))
        {
            upper++;
        }
        else if(isLower(*p))
        {
            lower++;
        }
        else
        {
            special++;
        }

    }

    printf("%d %d %d %d\n", sum, upper, lower, special);

    return 0;
}








int isLower(char c)
{
    return c >= 'a' && c <= 'z';
}
    
int isUpper(char c)
{
    return c >= 'A' && c <= 'Z';
}

char toUpper(char c)
{
    if(isLower(c))
    {
        return c - 32;
    }

    return c;
}

char toLower(char c)
{
    if(isUpper(c))
    {
        return c + 32;
    }

    return c;
}
  
void reverseCase(char *str)
{
    for(int i = 0; i < strlen(str); i++)
    {
        if(isLower(str[i]))
        {
            str[i] = toUpper(str[i]);
        }
        else if(isUpper(str[i]))
        {
            str[i] = toLower(str[i]);
        }
    }
}

int main()
{   
    char str[101];
    scanf(" %s", str);
   
    reverseCase(str);
    printf("%s\n", str);

    return 0;
}

void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

void reverse(char *str)
{
    for(int start = 0, end = strlen(str) - 1; start <= end; start++, end--)
    {
        swap(str + start, str + end);
    }
}

int main_1()
{
    char str[101];

    scanf(" %s", str);
    reverse(str);
    printf("%s\n", str);

    return 0;
}
