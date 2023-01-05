#include <stdio.h>
#include<stdlib.h>
#include<string.h>

main ()
{
    int masive[10] = {10,100,5,3,88,4,7,25,66,90},a,min,max,b,total;
    min = -99999999;
    max = 99999999;
    for (i = 0; i < 10; i++){
        a = masive[i];
        b = masive[i];
        if(a > min){
            min = a;
        }
        if(b < max){
            max = b;
        }
    }
    for (i = 0; i < 10; i++){
        a = masive[i];
        total += a;
    }
    printf("%d%d%d",&min, &max, &total);
}