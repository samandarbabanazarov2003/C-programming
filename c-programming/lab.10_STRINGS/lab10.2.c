#include <stdio.h>
#include <stdlib.h>
#include <string.h>



//gets= bu stringning space bn ham oqib beradi masalan Hello Worl bosa oqiydi
//puts bu faqat string printf qiladi va oxiridda har doim /n boladi shartli




//strcat = ikkita stringni bir biriga ulaydi 
//strcmp lexicographical tekshiradi solishtiradi katta kichigini






int main()
{
    int n;
    char c[10][20];

    scanf(" %d", &n);
    getchar();


    for(int i = 0; i < n; i++)
    {
        gets(c[i]);
    }

    for(int i = 0; i < n; i++)
    {
        puts(c[i]);
    }


    // char c[20];

    // // scanf("%s", c);
    // gets(c);

    // printf("%s\n", c);

    return 0;
}

int main_243()
{
    char carr[2][21];

    for(int i = 0; i < 2; i++)
    {
        scanf(" %s", carr[i]);
    }

    printf("%lu %lu\n", strlen(carr[0]), strlen(carr[1]));

    if(strcmp(carr[0], carr[1]) < 0)
    {
        printf("%s\n", carr[0]);
    }
    else
    {
        printf("%s\n", carr[1]);
    }

    char all[61];
    strcpy(all, carr[0]);
    strcat(all, carr[1]);
    strcat(all, carr[0]);

    printf("%s\n", all);

    return 0;
}

int countChar(char *str, char c)
{
    int count = 0;
    for(int i = 0; i < strlen(str); i++)
    {
        if(str[i] == c)
        {
            count++;
        }
    }

    return count;
}

int main_123123()
{
    char *carr[3] = 
    { 
        "Time is gold", 
        "No pain, no gain", 
        "No sweat, no sweet" 
    };

    int count = 0;
    for(int i = 0; i < 3; i++)
    {
        count += countChar(carr[i], 'a');
    }

    printf("%d\n", count);

    return 0;
}

int main_2()
{
    int n;
    char str[123];
    
    scanf(" %d", &n);

    int i;
    for(i = 0; n; i++, n /= 10)
    {
        str[i] = n % 10 + '0';
    }
    str[i] = '\0';

    printf("%s\n", str);

    return 0;
}