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
    printf("\nAfter Sorting : ");
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] > a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        printf("%d ", a[i]);
    }
}
void main(){
    int n, r;
    printf("Enter size : ");
    scanf("%d", &n);
    fun(n);
}
