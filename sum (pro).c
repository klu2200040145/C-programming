#include<stdio.h>
void fun(int a, int b, int c){
    int sum;
    if(a < 13 || a > 19)
    sum = sum + a;
    if(b < 13 || b > 19)
    sum = sum + b;
    if(c < 13 || c > 19)
    sum = sum + c;
    printf("Sum of digits : %d\n", sum);
}
void main(){
    int a, b, c;
    printf("Enter 1st number : ");
    scanf("%d", &a);
    printf("Enter 2nd number : ");
    scanf("%d", &b);
    printf("Enter 3rd number : ");
    scanf("%d", &c);
    fun(a, b, c);
}
