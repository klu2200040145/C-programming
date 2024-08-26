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
    printf("\nmaximum number : ");
    int max = a[0];
    for(int i = 1; i < n; i++){
        if(max < a[i])
        max = a[i];
    }
    printf("%d\t", max);
}
void main(){
    int n, r;
    printf("Enter size : ");
    scanf("%d", &n);
    fun(n);
}
