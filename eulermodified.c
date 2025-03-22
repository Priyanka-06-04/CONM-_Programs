// Euler's Modified Method
#include <stdio.h>

float solve(float x,float y){
    return (x+y);
}
int main() {
    float x0,x,yp,h,i,a,yc,prey,prex,b,c;
    printf("Enter the initial values of x and y: ");
    scanf("%f %f",&x0,&yp);
    printf("Enter the value of h:");
    scanf("%f",&h);
    printf("Enter the value of x:");
    scanf("%f",&x);
    i=x0;
    while(i<x){
        prex=i;
        prey=yp;
        a=solve(i,yp);
        yp=yp+h*a;
        printf("yp=%f\n",yp);
        i=i+h;
        b=solve(prex,prey);
        c=solve(i,yp);
        yp=prey+(h*(b+c)/2);
        printf("yc=%f\n",yp);
      

    }
    printf("The value of y at %f is %f",i,yp);

    return 0;
}