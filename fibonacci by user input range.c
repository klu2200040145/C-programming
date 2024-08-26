#include<stdio.h>
void fun(int n){
    int c, a = 0, b = 1;
    if(n < 0)
    printf("Nothing\n");
    else if(n == 0)
    printf("%d", a);
    else if(n == 1)
    printf("%d\t %d\t %d", a, b, a+b);
    else{
        printf("%d\t %d\t", a, b);
        c = a+b;
        while(c <= n){
            printf("%d\t", c);
            a = b;
            b = c;
            c = a+b;
        }
    }
}
void funn(int n, int r){
    int a = 0, b = 1, c = 0;
    while(c <= n){
        if(c >= r)
            printf("%d\t", c);
        a = b;
        b = c;
        c = a + b;
    }
}
void main(){
    int n, r;
    printf("Enter first number : ");
    scanf("%d", &r);
    printf("Enter last Number : ");
    scanf("%d", &n);
    //fun(n);
    funn(n, r);
}
