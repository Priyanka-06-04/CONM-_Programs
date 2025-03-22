// Runge Kutta 4th Order
#include <stdio.h>
#include<math.h>
float eq(float x,float y){
    return (x*y)+(y*y) ;
}
int main() {
  float x,x0,y,y0,h,s1,s2,i,s3,s4,s;
  printf("Enter the intial value of x and y : ");
  scanf("%f %f",&x0,&y);
  printf("Enter the value of h : ");
  scanf("%f",&h);
  printf("Enter the value of x : ");
  scanf("%f",&x);
  i=x0;
  while(i<x){
      y0=y;
      s1=eq(i,y);
      s2=eq(i+(h/2),y0+((h/2)*s1));
       s3=eq(i+(h/2),y0+((h/2)*s2));
       s4=eq(i+h,y0+(h*s3));
       s=(s1+(2*s2)+(2*s3)+s4)/6;
      y=y0+(h*s);
      i=i+h;
    printf("\ns =%f",s);
   printf("\nx =%f\ny= %f",i,y);
      
  }
  
}