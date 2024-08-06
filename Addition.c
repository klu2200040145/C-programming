#include<stdio.h>
void NN(int a, int b){
    printf("Addition of Two numbers : %d", (a+b));
}
void main(){
    int a, b;
    printf("Enter number 1 : ");
    scanf("%d", &a);
    printf("Enter number 2 : ");
    scanf("%d", &b);
    NN(a, b);
}