#include<stdio.h>
void fun(int a, int b){
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            if(i == j || i+j == a-1){
                printf("@ ");
            }else{
                printf("* ");
            }
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
