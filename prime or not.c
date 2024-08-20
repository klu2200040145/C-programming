#include<stdio.h>
void fun(int a){
    int f=0,i;
    if (a <= 1) {
        printf("%d is not a prime number\n", a);
    }else{
    for (i = 2; i <= a / 2; i++) {
        if (a % i == 0) {
            f = 1;
        }
    }
    if (f == 0){
        printf("%d is a prime number.\n", a);
    } else {
        printf("%d is not a prime number.\n", a);
    }
    }
}
void main(){
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);
    fun(a);
}
