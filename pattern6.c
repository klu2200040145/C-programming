#include<stdio.h>
void fun(int a){
    for(int i = 1; i <= a; i++){
        for(int j = 1; j <= i; j++){
            printf("%d ", i);
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
