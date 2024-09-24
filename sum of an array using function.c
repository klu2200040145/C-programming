#include<stdio.h>
void funn(int a[], int n) {
    int i, s = 0;
    for(int i = 0; i < n; i++){
        s = s + a[i];
    }
    printf("Sum : %d\n", s);
}
void main(){
    int a[10], n;
    printf("Enter the array size : ");
    scanf("%d", &n);
    printf("Enter array elements : ");
    for(int j = 0; j < n; j++){
        scanf("%d", &a[j]);
    }
    funn(a, n);
}
