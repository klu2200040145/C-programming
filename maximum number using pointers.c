#include<stdio.h>
void fun(int a, int b, int c){
    int *p, *q, *r;
    p = &a;
    q = &b;
    r = &c;
    if(*p > *q && *p > *r){
        printf("%d is max\n", *p);
    }else if(*q > *p && *q > *r){
        printf("%d is max\n", *q);
    }else if(*r > *p && *r > *q){
        printf("%d is max\n", *r);
    }else{
        printf("Improper\n");
    }
}
void main(){
    int a, b, c;
    printf("Enter the a & b & c : ");
    scanf("%d %d %d", &a, &b, &c);
    fun(a, b, c);
}
