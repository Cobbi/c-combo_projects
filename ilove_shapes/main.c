#include "main.h"
#include <stdio.h>

int main(void){
    int select;
    printf("Select 1: Draw Line\t2: Draw Rectangle\n");
    scanf("%d", &select);
    if (select == 1){
        line();
    }else if(select == 2){
        rectangle();
    }
}