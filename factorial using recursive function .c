#include<stdio.h>
int fun(int n){
    if(n > 0){
        return n*fun(n-1);
    }else{
        return 1;
    }
}
void main(){
    int n, f = 1;
    printf("Enter the n : ");
    scanf("%d", &n);
    f = fun(n);
    printf("Factorial = %d\n", f);
}
