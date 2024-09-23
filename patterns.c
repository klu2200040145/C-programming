#include<stdio.h>
void fun(int a, int b){
    for(int i = 0; i <= a-1; i++){
        for(int j = 0; j <= b-1; j++){
            printf("* ");
        }
        printf("\n");
    }
}
void main(){
    int a,b;
    printf("Enter number of rows & columns : ");
    scanf("%d %d", &a, &b);
    fun(a, b);
}
