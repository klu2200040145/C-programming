#include<stdio.h>
void fun(int m, int n){
    int a[n], b[n], c=0;
    int i, j;
    printf("Enter Elements for array 1: ");
    for(int i = 0; i < m; i++){
        scanf("%d", &a[i]);
    }printf("Enter Elements for array 2: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &b[i]);
    }
    printf("Elements of array 1 : ");
    for(int i = 0; i < m; i++){
        printf("%d ", a[i]);
    }
    printf("\nElements of array 2 : ");
    for(int i = 0; i < n; i++){
        printf("%d ", b[i]);
    }
    printf("\ncomparision of Arrays\n");
    for(int i = 0; i < n; i++){
        printf("%d ", (a[i]+b[i])); 
    }
}
void main(){
    int n, m;
    printf("Enter size of array 1: ");
    scanf("%d", &m);
    printf("Enter size of array 2: ");
    scanf("%d", &n);
    fun(m, n);
}
