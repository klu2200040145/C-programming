#include<stdio.h>
void funn(int a[], int n) {
    int i, s = a[0];
    for(int i = 1; i < n; i++){
        if(s <= a[i]){
            s = a[i];
        }
    }
    printf("largest element : %d\n", s);
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
