#include <stdio.h>
void main()

// {
// int n;
// printf("Enter a number: ");
// scanf("%d", &n);

// if (n > 6);
// {
//     printf("The number is larger than 6");
// }
// }


// {
// int g,m;
// printf("Enter a number: ");
// scanf("%d", &g);

// m = g % 8;

// if (m > 4);
// {
//     printf("Ostatuka e > 4");
// }
// }

// {
//     int n;
//     printf("Enter the day:");
//     scanf("%d", &n);

//     switch (n)
//     {
//     case 1:
//         printf("It's Monday");
//         break;
//     case 2:
//         printf("It's Tuesday");
//         break;
//     case 3:
//         printf("It's Wednesday");
//         break;
//     case 4:
//         printf("It's Thursday");
//         break;
//     case 5:
//         printf("It's Friday");
//         break;
//     case 6:
//         printf("It's Saturday");
//         break; 
//     case 7:
//         printf("It's Sunday");
//         break;          
//     default:
//         printf("Invalid number");
//         break;
//     }
// }


// {
//     int i, j,n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//    for (i = 1; i <= n; ++i) {
//       for (j = 1; j <= i; ++j) 
//       {
//          printf("%d", i);
//       }
//       printf("\n");
//    }
//    return 0;
// }   

// {
//     int n, g,s,i;
//     printf("Enter a number:");
//     scanf("%d", &n);
//     printf("Enter a number:");
//     scanf("%d", &g);

//     for(i = n;i < g;n++)
//     {
//         s+=n;

//     }
//     printf(s);
// }

{
    int N,K,i;
    int sum, count;
    count = 0;
    printf("Enter N:");
    scanf("%d", &N);
    printf("Enter K:");
    scanf("%d", &K);

    for(i=1; i<=N; i++)
    {
        scanf("%d",&sum);
        if(sum > K && sum % 3 == 0)
        {
            count++;
        }
    }printf("%d",count);

}

