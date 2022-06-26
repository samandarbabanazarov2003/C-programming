#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    scanf(" %d", &size);

    int *p = (int*)malloc(sizeof(int) * size);
    for(int i = 0; i < size; i++)
    {
        scanf(" %d", p + i);


    int cut;
    scanf(" %d", &cut);

    p = realloc(p, sizeof(int) * (size - cut));

    for(int i = 0; i < size - cut; i++)
    {
        printf("%d ", p[i]);
    }
    return 0;
}




int main_4()
{
    int lenght;
    scanf(" %d", &lenght);
    char *str = (char**)malloc(sizeof(char) * (lenght + 1));

    scanf(" %s", str);

    char a, b;
    int countA = 0, countB = 0; 

    for(char *p = str; *p; p++)
    {
        if(*p == a) countA++;
        else if(*p == b) countB++;
    }

    printf("%d %d\n", countA, countB);

    return 0;
}

int main_3()
{
    int qatorlar, ustunlar;
    scanf(" %d %d", &qatorlar, &ustunlar);
    
    char **p = (char**)malloc(sizeof(char*) * qatorlar);
    for(int i = 0; i < qatorlar; i++)
    {
        p[i] = (char*)malloc(sizeof(char) * (ustunlar + 1));
    }

    char belgi = 'a';

    for(int i = 0; i < qatorlar; i++)
    {
        for(int j = 0; j < ustunlar; j++)
        {
            p[i][j] = belgi++;

            if(belgi > 'z')
            {
                belgi = 'A';
            }
            else if(belgi > 'Z' && belgi < 'a')
            {
                belgi = 'a';
            }
        }
    }

    p[i][ustunlar] = '\0';
    printf("%s\n", p [i]);





















    
     
    return 0; 
}

int main_2()
{
    int n;
    scanf("%d", &n);
    float *arr = (float*)malloc(n * sizeof(float));
    for(float *p = arr; p < arr + n; p++)
    {
        scanf(" %f", p);
    }
    float max = *arr;
    for(float *j = arr + 1; j < arr + n; j++)
    {
        if(max < *j)
        {
            max = *j;
        }
    }
    printf("%.2lf", max);


    return 0;
}

int main_1()
{
    int n;
    int sum = 0;
    scanf(" %d", &n);
    int *arr = (int*)malloc(sizeof(int)*n);
    for(int *p = arr; p < arr + n; p++)
    {
        scanf(" %d", p);
        sum +=*p;
    
    }

    printf("%d\n", sum);

    return 0;
}