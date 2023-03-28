#include "main.c"
#include <stdio.h>

int line(void){
    char point = '*';
    int num;
    printf("Enter number:\n");
    scanf("%d", &num);
    for (int i = 0; i <= num; i++){
        putchar(point);
    }
    return (0);
}

int rectangle(void){
    char point = '*';
    int w, h;

    printf("Width:\n");
    scanf("%d", &w);
    printf("Height:\n");
    scanf("%d", &h);
    for (int i = 0; i < w; i++){
        for (int j = 0; j < h; j++){
            if (i == 0 || i == h-1 || j == 0 || j == w-1){
                putchar(point);
            }else{
            putchar(' ');
            }
        }
        putchar('\n');
    }
    return (0);
}