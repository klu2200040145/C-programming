#include<stdio.h>
void fun(int n){
    int f = 1;
    while(n > 0){
        f = f * n;
        n--;
    }
    printf("fact : %d\n", f);
}
void main(){
    int n;
    printf("Enter the n : ");
    scanf("%d", &n);
    fun(n);
}
