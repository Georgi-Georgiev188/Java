#include <stdio.h>
#include<stdlib.h>
#include<string.h>

main ()
// {
//     int masive[10] = {10,100,5,3,88,4,7,25,66,90},a,min,max,b,total,i;
    
//     min = masive[0];
//     max = masive[0];

//     for (i = 0; i < 10; i++){
//         a = masive[i];
//         b = masive[i];
//         if(a <= min){
//             min = a;
//         }
//         if(b >= max){
//             max = b;
//         }
//     }
    
//     for (i = 0; i < 10; i++){
//         a = masive[i];
//         total += a;
//     }
//     printf("%d\n",min);
//     printf("%d\n",max);
//     printf("%d\n",total);
    
//     return 0;
// }
// {
//     int n, i, a,p = 0;

//     printf("How many numbers:");
//     scanf("%d", &n);

//     int num[n];

//     for(i = 0; i < n; i++){
//         printf("Enter the number:");
//         scanf("%d", &a);
//         num[i] = a;
//     }

//     for(i = 0; i < n - 2; i += 2){
//         if(num[i] < num[i + 1] && num[i + 1] > num[i + 2]){
//             p = 0;
//         }else{
//             p = 1;
//         }
//     }
//         if(p == 0){
//             printf("The program is fine");
//         }else{
//             printf("Program doesnt work");
//         }
    
//     return 0;
// }

// {
//     int n, i, a;

//     printf("How many numbers:");
//     scanf("%d", &n);

//     int mas[n], new[n];

//     for(i = 0; i < n; i++){
//         printf("Enter the numbers:");
//         scanf("%d", &a);
//         mas[i] = a;
//     }

//     for(i = 0; i < n; i++){
//         new[i] = mas[(n -1) - i];
//     }
//     for(i = 0; i < n; i++){
//         printf("%d", new[i]);
//     }

//     return 0;
// }

// {
//     int n, i, a, max = 0, min = 0;

//     printf("How many numbers:");
//     scanf("%d", &n);

//     int num[n], new[n], min[n];

//     for(i = 0; i < n; i++){
//         printf("Enter the number:");
//         scanf("%d", &a);
//         num[i] = a;
//     }

//     for(i = 0; i < n; i++){
//         while (num[i] < num[i + 1])
//         {
//             new[i] = num[i];
//             max++;
//         }
//         while (num[i] < num[i + 1])
//         {
//             min[i] = num[i];
//             min++;
//         }
//     }
//     if(max > min){
//         for(i = 0; i < n; i++){
//             printf("%d", new[i]);
//         }
//     }else if (min > max)
//     {
//        for(i = 0; i < n; i++){
//             printf("%d", min[i]);
//         }
//     }else{
//         printf("They are even.");
//     }
//     return 0;
// }

{
    int a,b,i,j;

    printf("Enter the a,b:");
    scanf("%d", &a, &b);

    int A[a][b];

    for(i = 0; i < a; i++){
        for(j = 0; J < b; j++){
            printf("Enter the numbers:");
            scanf("%d", &A[i][j]);
        }
    }
    for(i = 0; i < a; i++){
        for(j = 0; J < b; j++){
            printf("%d", A[i][j]);
        }
    }
    printf("\n");

    
}