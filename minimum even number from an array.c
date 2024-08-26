#include<stdio.h>
void fun(int n){
    int a[n];
    printf("Enter Elements: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    printf("Elements are : ");
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\nminimum number : ");
    int min = a[0];
    for(int i = 1; i < n; i++){
        if(a[i] % 2 != 0){
        if(min > a[i])
        min = a[i];
        }
    }
    printf("%d\t", min);
}
void main(){
    int n, r;
    printf("Enter size : ");
    scanf("%d", &n);
    fun(n);
}
