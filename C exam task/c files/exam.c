#include <stdio.h>
#include<stdlib.h>
#include<string.h>


struct star
{
    char name [50];
    int age;
    char natiunality;
    double income;
    int statues;
}Arr[10];

void main()
{
    int i = 0;
    char Arr[i];
    char comand[10];

    while (1)
    {
        printf("\nEnter a name:");
        scanf("%s", &Arr[i].name);
        printf("\nEnter the age:");
        scanf("%d", &Arr[i].age);
        printf("\nEnter the nationality:");
        scanf("%s", &Arr[i].nationality);
        printf("\nEnter the income:");
        scanf("%c", &Arr[i].income);
        printf("\nEnter the statues:");
        scanf("%d", &Arr[i].statues);

        printf("If you want to add more stars(c), if you want to stop(s)");
        scanf("%s", &comand);

        if(comand == "s"){
            exit;
        }else{
            i++; 
        }
    }
    return 0;
}