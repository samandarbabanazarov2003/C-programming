#include <stdio.h>
//1
void readArray(int x[], int size)
{
    for(int i = 0; i < size; i++)
    {
        scanf(" %d", &x[i]);
    }
}

int contains(int arr[], int size, int x)
{
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == x)
        {
            return 1;
        }
    }

    return 0;
}

void printIntersection(int a[], int n, int b[], int m)
{
    for(int i = 0; i < n; i++)
    {
        if(contains(b, m, a[i]))
        {
            printf("%d ", a[i]);
        }
    }
    printf("\n");
}

void printUnion(int a[], int n, int b[], int m)
{
    for(int i = 0; i < n; i++)
    {
        if(!contains(b, m, a[i]))
        {
            printf("%d ", a[i]);
        }
    }
    for(int i = 0; i < m; i++)
    {
        if(!contains(a, n, b[i]))
        {
            printf("%d ", b[i]);
        }
    }
    printf("\n");
}

int main()
{
    int n, m;
    int a[100], b[100];

    scanf(" %d %d", &n, &m);

    readArray(a, n);
    readArray(b, m);

    printIntersection(a, n, b, m);
    printUnion(a, n, b, m);

    return 0;
}
 
//2

long int seconds(long int m)
{
    return m * 60;
}

int main()
{
    long int m;
    scanf(" %ld", &m);

    printf("%ld\n", seconds(m));

    return 0;
}