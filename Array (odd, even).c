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
    printf("\nEven numbers : ");
        for(int i = 0; i < n; i++){
            if(a[i] % 2 == 0){
            printf("%d ", a[i]);
            }
        }
    printf("\nOdd numbers : ");
    for(int i = 0; i < n; i++){
        if(a[i] % 2 != 0){
            printf("%d ", a[i]);
        }
    }
}
void main(){
    int n, r;
    printf("Enter size : ");
    scanf("%d", &n);
    fun(n);
}
