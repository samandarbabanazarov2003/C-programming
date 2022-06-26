#include <stdio.h>
#include <math.h>


int main()
{
    int a, b, c;

    scanf(" %d %d %d", &a, &b, &c);

    if(a + b == c)
    {
        printf("%d ", c);
    }
    else if(a + c == b)
    {
        printf("%d ", b);
    }
    else if(b + c == a)
    {
        printf("%d ", a);
    }
    else
    {
        printf("False\n");
    }
//kvadrat sonlar
    return 0;
}



// int main()
// {   
//     int A, B;

//     scanf(" %d %d", &A, &B);

//     if(A + B > 100)
//     {
//         printf("True\n");
//     }
//     else
//     {
//         printf("False\n");
//     }
// //100 dan katta bolsa True
//     return 0;
// }





// int main()
// {
//     int oy, kun;

//     scanf(" %d %d", &oy, &kun);

//     if(oy == 2 && kun == 28)
//     {
//         printf("Bu mani tug'ilgan kunim.\n");
//     }
//     else if(oy == 12 && kun == 31)
//     {
//         printf("Bu nodirning tug'ilgan kuni.\n");
//     }
//     else if(oy == 8 && kun == 23)
//     {
//         printf("Bu fozilning tug'ilgan kuni.\n");
//     }
//     else
//     {
//         printf("Bu bzaniki emas.\n");
//     }
//     return 0;
// }


// int main()
// {
//     int son;
//12345 > 1!2!3!4!5!
//     scanf(" %d", &son);

//     printf("%d!", son / 10000);
//     printf("%d!", son / 1000 % 10);
//     printf("%d!", son / 100 % 10);
//     printf("%d!", son / 10 % 10);
//     printf("%d\n", son % 10);

//     return 0;
// }

// int main()
// {
//     printf("  A\n");
//     printf(" A A\n");
//     printf("AAAAA\n");

//     return 0;
// }


// int main()
// {
//     printf("2222\n");
//     printf("2  2\n");
//     printf("2  2\n");
//     printf("2222\n");

//     return 0;
// }