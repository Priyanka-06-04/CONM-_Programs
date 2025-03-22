// runge-kutta second order
#include <stdio.h>
float eq(float x,float y){
    return 3*x+y;
}
int main() {
  float x,x0,y,y0,h,s1,s2,i;
  printf("Enter the intial value of x and y");
  scanf("%f %f",&x0,&y);
  printf("Enter the value of h:");
  scanf("%f",&h);
  printf("Enter the value of x");
  scanf("%f",&x);
  i=x0;
  while(i<x){
      y0=y;
      s1=eq(i,y);
      i=i+h;
      y=y0+h*s1;
      s2=eq(i,y);
      y=y0+((h/2)*(s1+s2));
      printf("\nx =%f\ny= %f",i,y);
      
  }
}
  