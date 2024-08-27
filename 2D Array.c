#include<stdio.h>
#include<math.h>
void fun(int m, int n){
    int a[10][10];
    int i, j;
    printf("Enter Elements : ");
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("Display elements \n");
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
void main(){
    int m, n;
    printf("Enter the rows : ");
    scanf("%d", &m);
    printf("Enter the column : ");
    scanf("%d", &n);
    fun(m, n);
}
