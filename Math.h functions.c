#include<stdio.h>
#include<math.h>
void NN(float a){
    printf("Ceil %f\n", ceil(a));
    printf("Floor %f\n", floor(a));
    printf("Sqrt %f\n", sqrt(a));
    printf("pow %f\n", pow(a, a));
    printf("log %f\n", log(a));
    printf("exp %f\n", exp(a));
    printf("Sin %f\n", sin(a));
    printf("Cos %f\n", cos(a));
    printf("Tan %f\n", tan(a));
}
void main(){
    float a;
    printf("Enter the a Value : ");
    scanf("%f", &a);
    NN(a);
}