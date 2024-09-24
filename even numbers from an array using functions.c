#include<stdio.h>
void funn(int a[], int n) {
    int i;
    for(int i = 0; i < n; i++){
        if(a[i] % 2 == 0){
            printf("%d\t", a[i]);
        }
    }
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
