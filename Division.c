#include<stdio.h>
void NN(float a, float b){
    float c = a/b;
    printf("Division : %f\n", c);
}
void main(){
    float a, b;
    printf("Enter a and b values : ");
    scanf("%f %f", &a, &b);
    NN(a, b);
}