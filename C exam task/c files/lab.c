#include <stdio.h>
#include<stdlib.h>
#include<string.h>


int main()
{
int one, two, three, total, min;

printf("Enter the time for players:");
scanf("%d", &one);
scanf("%d", &two);
scanf("%d", &three);

total = one + two;
total += three;

while (total > 60)
    total -= 60;
    min++;
{
if (total < 10)
    printf("%d:0%d",min, total);
if (total >= 10)
    printf("%d:%d", min, total);  
}     
return 0;
}

// {
//     int x,x1,x2,y,y1,y2;

//     printf("Enter the x:");
//     scanf("%d%d%d", &x,&x1,&x2);
//     printf("Enter the y:");
//     scanf("%d", &y,&y1,&y2);


    
//     while (x1 > x2)
//         printf("Enter larger number for x2:");
//         scanf("%d", &x2);
//     {
//         while (y1 > y2)
//         printf("Enter larger number for y2:");
//         scanf("%d", &y2);
//     }
    
//     if (x >= x1 && x <= x2)
//         {if (y >= y1 && y <= y2)
//             printf("Inside");
//         }
//     else{
//         printf("Outside");
//     }
//     return 0;
// }

// {
//     int km, taxy, bus, train, r, total;
//     char days;

//     printf("Enter day/night:");
//     scanf("%s", &days);
//     days = getchar();

//     printf("Enter the km:");
//     scanf("%d", &km);
    

//     r = 0.70;
    
//     {
//         if (days == "day")
//             taxy = r + (km * 0.79);
//         else 
//             taxy = r + (km * 0.90);    
//     }
    
//     {
//         if (km >= 100)
//             train = 0.06 * km;
//         else
//             train = _INTEGRAL_MAX_BITS;
//     }        
//     {
//         if (km >= 20)
//             bus = 0.09 * km;   
//         else
//             bus = _INTEGRAL_MAX_BITS;
//     }
//     {
//         if (taxy < train && taxy < bus)
//             printf("Taxy is the cheaper");
//     }
//     {
//        if (train < taxy && train < bus)
//             printf("Train is cheaper");
//     }
//     {
//         if (bus < train && bus < taxy)
//             printf("Bus is cheaper");    
//     }
//     return 0;
// }

// {
//     int h, t1, t2, v, total, condition;

//     printf("Enter V for the pool:");
//     scanf("%d", &v);

//     printf("Enter hours of work:");
//     scanf("%d", &h);

//     printf("Enter the pipes:");
//     scanf("%d%d",&t1,&t2);

//     total = (t1 + t2) * h;
//     condition = v / 2;
    
//     {
//         if (total >= v)
//             printf("The pool is full");
//     }
//     {
//         if (total >= condition)
//             printf("Pool is half full");
//     }
//     {
//         if(total < condition)
//             printf("Pool has only %d liters", &total);
//     }

// }
// {
//     int n, i,k[1000],p1 = 0, p2 = 0, p3 = 0, p4 = 0, p5 = 0;
//     float pr = 0, pr2 = 0, pr3 = 0, pr4 = 0, pr5 = 0;

//     printf("How many numbers:");
//     scanf("%d", &n);
    
//         for (i = 0; i < n; i++){
//             printf("Number [%d] =", i);
//             scanf("%d", &k[i]);
//         }
//         for (i = 0;i <= n, i++;)
//         { 
//             if (k[i] >= 800){
//                 p5++;
//             }
//             else if(k[i] >= 600){
//                 p4++;
//             }
//             else if(k[i] >= 400){
//                 p3++;
//             }
//             else if(k[i] >=200){
//                 p2++;
//             }else if(k[i] < 200){
//                 p1++;
//             }
//         }

//     pr = (p1 / n) * 100;
//     pr2 = (p2 / n) * 100;
//     pr3 = (p3 / n) * 100;
//     pr4 = (p4 / n) * 100;
//     pr5 = (p5 / n) * 100;

//     printf("%f\n", &pr);
//     printf("%f\n", &pr2);
//     printf("%f\n", &pr3);
//     printf("%f\n", &pr4);
//     printf("%f\n", &pr5);
    
    // printf("\np1 = %.2f%", p1/n*100);
    // printf("\np2 = %.2f%", p2/n*100);
    // printf("\np3 = %.2f%", p3/n*100);
    // printf("\np4 = %.2f%", p4/n*100);
    // printf("\np5 = %.2f%", p5/n*100);

    // return 0;
    
// }