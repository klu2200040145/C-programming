#include<stdio.h>
#define PI 3.14
void min(int c){
    float a, b, as, at, ac, ar;
    float s;
    switch(c){
        case 1:
        printf("Area Of Square Menu\n");
        printf("Enter side of Square : ");
        scanf("%f", &s);
        printf("Area Of the Square : %.2f\n", (s*s));
        break;
        case 2:
        printf("Area Of Rectangle Menu\n");
        printf("Enter Length of The Rectangle: ");
        scanf("%f", &a);
        printf("Enter Width Of the rectangle :");
        scanf("%f", &b);
        printf("Area Of the Rectangle : %.2f\n", (a*b));
        break;
        case 3:
        printf("Area Of Triangle Menu\n");
        printf("Enter The base of the triangle : ");
        scanf("%f", &a);
        printf("Enter Height Of the Triangle : ");
        scanf("%f", &b);
        printf("Area Of the Triangle : %.2f\n", (0.5*a*b));
        break;
        case 4:
        printf("Area Of Circle Menu\n");
        printf("Enter Radius of circle : ");
        scanf("%f", &a);
        printf("Area Of the Circle : %.2f\n", (PI*a*a));
        break;
    }
}
void main(){
    int c;
    printf("****************\n");
    printf("1.Area Of Square\n");
    printf("2.Area Of Rectangle\n");
    printf("3.Area of Triangle\n");
    printf("4.Area of Circle\n");
    printf("Select the option : ");
    scanf("%d", &c);
    min(c);
}