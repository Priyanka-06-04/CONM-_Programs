// Euler's Method
#include <stdio.h>

float solve(float x,float y){
    return (1-2*x*y);
}

int main() {
    float x0,x,y,h,i,a;

    printf("Enter the initial values of x and y: ");
    scanf("%f %f",&x0,&y);
    printf("Enter the value of h:");
    scanf("%f",&h);
    printf("Enter the value of x:");
    scanf("%f",&x);
    i=x0;
    while(i<x){
        a=solve(i,y);
        y=y+h*a;
        printf("y=%f\n",y);
        i=i+h;
    }
    printf("The value of y at %f is %f",i,y);

    return 0;
}