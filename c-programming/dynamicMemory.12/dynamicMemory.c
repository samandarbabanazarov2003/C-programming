#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()
{
int n;
int *arr;
scanf(" %d", &n);
arr=(int*)malloc(sizeof (int)*n);




for (int i = 0; i < n; i++)
{
    scanf("%d", &arr[i]);
    
}

for (int i = 0; i < n; i++)
{
    printf("%d", &arr[i]);
    
}

    free(arr);
    arr = NULL;
    
    return 0;
}

int main()
{
    char *name;
    int n;
    scanf(" %d", &n);


    name = (char*)malloc(sizeof(char) * (n + 1));
    scanf(" %s", name);

    printf("%s\n", name);

 return 0;
}


