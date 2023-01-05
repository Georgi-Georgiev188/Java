#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Store{
    char name[31];
    int code;
    char data[11];
    double price;
};
typedef struct Store store;
struct Store *st;
int count = 0;

struct Trash{
    char name[31];
    int code;
    char data[11];
    double price;
};

typedef struct Trash trash;
trash *tr;
int count_tr = 0;

void add(){
    st = (store*) realloc(st, (++count) * sizeof(store));
    FILE *fp;
    fp = fopen("in.txt", "w");
    if(fp == NULL){
        printf("ERROR");
        exit(1);
    }
    printf("Enter name:\n");
    scanf("%s", st[count-1].name);
    fflush(stdin);

    printf("Enter a code\n");
    scanf("%d", &st[count-1].code);
    //fflush(stdin);

    printf("Enter deadline\n");
    scanf("%s", st[count-1].data);
    fflush(stdin);

    printf("Enter price:\n");
    scanf("%f", &st[count-1].price);
    fflush(stdin);

    fwrite(st, sizeof(store), count, fp);

    if(fwrite !=0){
        printf("success");
    }else{
        printf("error");
    }

    fclose(fp);


}

void check(char* dat1){
    for(int i = 0; i < count; i++){
       if(strcmp((store[i].data), dat1) <= 0){
            tr = (trash*) realloc(tr, (++count_tr) * sizeof(trash));
            strcpy(trash[count_tr-1].name, store[i].name);
            trash[count_tr-1].code = store[i].code;
            strcpy(trash[count_tr-1].data, store[i].data);
            trash[count_tr-1].price = store[i].price;
        }else{
       printf("No product");
        }
    }
}
*/
void read(){
    FILE *fp;
    fp = fopen("in.bin", "rb");
    char name[30], data[11];
    int code;
    double price;

    fscanf(fp, "%s", name);
    fscanf(fp, "%d", code);
    fscanf(fp, "%s", data);
    fscanf(fp, "%lf", price);

    printf("%s %d %s %lf", name, code, data, price);
    fclose(fp);
}
int main()
{
    add();
    //read();
 //   check('2022.09.22');

//    int i = 0;
//    struct Store *st;
//
//    FILE *fp;
//    fp = fopen("file.bin", "wb");
//    if(fp == NULL){
//        printf("Error!");
//        exit(1);
//    }
//    int step = 1;
//    while(1){
//
//    printf("Enter name:\n");
//    scanf("%s", &st[i].name);
//    fflush(stdin);
//    printf("Enter a code\n");
//    scanf("%d", &st[i].code);
//    fflush(stdin);
//    printf("Enter deadline\n");
//    scanf("%[^\n]S", &st[i].data);
//    fflush(stdin);
//    printf("Enter price:\n");
//    scanf("%lf", &st[i].price);
//    fflush(stdin);
//    i++;
//    printf("If you want more products type(1), else type(0)\n");
//    scanf("%d", &step);
//    fflush(stdin);
//    if(step == 0){
//        break;
//    }
//
//    }
//    for(int g = 0; g < i; g++){
//        fprintf(fp,"%s\n", st[g].name);
//        fprintf(fp,"%d\n", st[g].code);
//        fprintf(fp,"%s\n", st[g].data);
//        fprintf(fp,"%lf\n", st[g].price);
//
//    }
//    fclose(fp);
//
//    int count = 0;
//    char new_arr[30];
//    double goal;
//    printf("Enter the goal price:");
//    scanf("%d", &goal);
//    for (int j = 0; j < i; j++){
//
//        if(st[j].price > goal){
//            st[j].name = new_arr[count];
//            st[j].price = new_arr[count];
//            count++;
//        }
//    }
//    for(int k = 0; k < count; k++){
//        printf(new_arr[k]);
//    }

    return 0;
}
