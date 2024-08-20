#include<stdio.h>
void fun(int c){
    int sum = 0, r;
    while(c)
    {
        r = c % 10;
        sum = sum + r;
        c = c / 10;
    }
    printf("Sum of digits : %d\n", sum);
}
void main(){
    int c;
    printf("Enter Number : ");
    scanf("%d", &c);
    fun(c);
}