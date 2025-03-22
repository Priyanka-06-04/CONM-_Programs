//Taylor Series Method. 
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
float root(float coeff[],int degree,float x){
 float sum=0;
for( int i=degree;i>=0;i--){
 sum+=coeff[i]*pow(x,i);
}
 return sum;
}
void der(float *fx,int degree,float coeff[],int temp){
 int i;
 for (i =1; i <= degree;temp++, i++){
 fx[i-1]=coeff[i]*temp;
 }
 printf("\nf'x:") ; 
 for (i = degree-1 ; i >= 0; i--)
 { 
 if(i==0)
 printf("(%.4fx^%d)",fx[i],i);
 else 
 printf("(%.4fx^%d)+",fx[i],i);
 }}
int fact(int n){
 if(n==1)
 return 1;
 else
 return (n*fact(n-1));
}
void main()
{
 int degree, i,j,w,z;
 float a,b,x0,x2,x,fx[10],coeff[10],temp,h,sol,f_x[10],f__x[10],f___x[10],c,d;
 printf("Enter highest degree of your equation : ");
 scanf("%d", &degree);
 temp=1; 
 for (i = 0; i <= degree; i++)
 {
 printf("Enter coefficient for x^%d:", i);
 scanf("%f", &coeff[i]); 
 printf("\nThe equation you entered is : ");
for (i = degree; i >= 0; i--)
 {
 if(i==0)
 printf("(%.4f)",coeff[i]);
 else
 printf("(%.4fx^%d)+",coeff[i],i);
 }
 printf("Enter the value of x and h : ");
 scanf("%f %f",&x ,&h);
 a= root(coeff,degree,x);
 der(fx,degree,coeff,temp);
 b= root(fx,degree,x);
 der(f_x,degree,fx,temp);
 c= root(f_x,degree,x);
 der(f__x,degree,f_x,temp);
 d= root(f__x,degree,x);
 der(f__x,degree,f_x,temp); 
sol=a+((h*b)/fact(1))+((h*h*c)/fact(2))+((h*h*h*d)/fact(3));
printf("\nSolution : %.4f\n",sol);
}
}