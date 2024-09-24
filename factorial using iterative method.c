#include<stdio.h>
int fun(int n){
    return n;
}
void main(){
    int n, f = 1;
    printf("Enter the n : ");
    scanf("%d", &n);
    while(n > 0){
        f = f * fun(n);
        n--;
    }
    printf("Factorial = %d\n", f);
}
