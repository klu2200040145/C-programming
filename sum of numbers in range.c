#include<stdio.h>
void main(){
    int n, a, b=0;
    printf("Enter start Number : ");
    scanf("%d", &n);
    printf("Enter Last Number : ");
    scanf("%d", &a);
    while(n <= a){
        b = b + n;
        n++;
    }
    printf("Sum = %d\n", b);
}
