#include "main.c"
#include <stdio.h>

int times_table(void){
    int times_table_of; 
    int times_table_to; 
    printf("Basic times table for kids\n");
    printf("Times table of: \n");
    scanf("%d", &times_table_of);
    printf("Times table to: \n");
    scanf("%d", &times_table_to);
    for (int i = 1; i <= times_table_to; i++){
        int result = times_table_of * i;
        printf("%d x %d = %d\n", times_table_of, i, result);
    }
    return (0);
}