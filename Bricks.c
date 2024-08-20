#include<stdio.h>
void fun(int a, int b, int c){
    int d, e, f, re;
    d = c/5;
    if(d < a)
    e = d;
    else
    e = a;
    f = e*5;
    re = c - f;
    if(re <= b){
        printf("Possible\n");
    }else{
        printf("Not Possible\n");
    }
}
void main(){
    int a, b, c;
    printf("Enter The Large Bricks : ");
    scanf("%d", &a);
    printf("Enter The Small Bricks : ");
    scanf("%d", &b);
    printf("Enter The length of the wall : ");
    scanf("%d", &c);
    fun(a, b, c);
}