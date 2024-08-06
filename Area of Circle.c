#include<stdio.h>
#define PI 3.14
void NN(float a){
    float n = PI * a * a;
    printf("Area of the Circle : %f\n", n);
}
void main(){
    float a;
    printf("Enter radius value : ");
    scanf("%f", &a);
    NN(a);
}