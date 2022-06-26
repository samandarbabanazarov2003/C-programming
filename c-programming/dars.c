#include <stdio.h>
#include <math.h>








// int main()
// {
//     int n;
//     int sum = 0;

//     scanf(" %d", &n);
//     while(n--)
//     {
//         int son = 0;
//         scanf(" %d", &son);

//         sum += pow(son, 3);
//     }
//     printf("%d\n",sum);

// }

// int main()
// {

//     int yegindi = 0;

//     while(1)
//     {
//         int son;
//         scanf(" %d", &son);

//         if(son == 0)
//         {
//             break;
//         }
//     }
//     printf("%d", yegindi);
// }




// #include <stdlib.h>


//     int isDigit(char c) { return c >= '0' && c <= '9';}
//     int isUpper(char c) { return c >= 'A' && c <= 'Z';}
//     int isLower(char c) { return c >= 'a' && c <= 'z';}

// int main()
// {
//     int str[101];

//     scanf(" %s", str);





// #include <stdio.h>
// #include <stdlib.h>


//     int isDigit(char c) { return c >= '0' && c <= '9';}
//     int isUpper(char c) { return c >= 'A' && c <= 'Z';}
//     int isLower(char c) { return c >= 'a' && c <= 'z';}

// int main()
// {
//     int str[101];

//     scanf(" %s", str);

//     while(1)
//     {

//         break;
//     }

//     int sum = 0;
//     int upper = 0;
//     int lower = 0;
//     int special = 0;

//     for(char *p = str; *p; p++)
//     {
//         if(isDigit(*p))
//         {
//             sum += (*p - '0');
//         }
//         else if(isUpper(*p))
//         {
//             upper++;
//         }
//         else if(isLower(*p))
//         {
//             lower++;
//         }
//         else
//         {
//             special++;
//         }

//     }

//     printf("%d %d %d %d\n", sum, upper, lower, special);

//     return 0;
// }