#include "program.h"


int Iter_add(void);
void main(void){
    
    int a =Iter_add();
    if(a==0){
        printf("Completed");
    }
    else{
        printf("Error\n");}
}


int Iter_add(void){
    
    printf("Enter Size of array\n");
    int array_size = 0;
    scanf("%d",&array_size);
    int input[100];
    
    printf("Total Array length is %d\n",array_size);
    int a =0;
    while(a    < array_size){
        scanf("%d",&input[a]);
        a++;
    }
    
    if(a = 0){
        printf("Error length must b greater than 1");
        return 1;}
    
    int result =input[0];
    printf("%d ",result);
    int b=1;
    while(b<array_size){
        result = result + input[b];
        printf("%d ",result);
        b++;
    }
    return 0;
    
}


