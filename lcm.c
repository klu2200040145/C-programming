#include<stdio.h>
void fun(int a, int b){
    int l;
    if(a > b){
        l = a;
    }else{
        l = b;
    }
    while(1){
        if(l % a == 0 && l % b == 0){
            break;
        }
        l++;
    }
    printf("The lcm of %d and %d is %d\n", a, b, l);
}
void main(){
    int a, b;
    printf("Enter any two numbers : ");
    scanf("%d %d", &a, &b);
    fun(a, b);
}
