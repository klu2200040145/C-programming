#include<stdio.h>
void fun(int a){
    for(int i = 1; i <= a; i++){
        for(int k = 1; k <= 32 - i*2; k++){
            printf(" ");
        }
        for(int j = 1; j <= i * 2 - 1; j++){
            printf("* ");
        }
        printf("\n");
    }
}
void main(){
    int a;
    printf("Enter the stair size : ");
    scanf("%d", &a);
    fun(a);
}
