#include<stdio.h>
void fun(int n){
    int a[n], b[n], c=0;
    int i, j;
    printf("Enter Elements for array : ");
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }printf("Elements of array 1: ");
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\nUnique elements");
    for(int i = 0; i < n; i++){
        c=0;
        for(int j = 0; j < n; j++){
            if(i==j){
                continue;
            }
            if(a[i] == a[j]){
                c++;
            }
        }
        if(c == 0){
            printf(" %d ", a[i]);
        }
    }
}
void main(){
    int n, m;
    printf("Enter size of array : ");
    scanf("%d", &n);
    fun(n);
}
