//secant method
#include <stdio.h>
#include <math.h>
float func(float* arr,int h,float x){
    float eq=0;
for(int i=0;i<=h;i++){
    eq=eq+(arr[i]*pow(x,i));
}
return eq;
}
int main() {
int degree,i;
float coef[10],c,a,b,x1,x2,x3,prev=0,x=0;
printf("enter the highest degree ");
scanf("%d",&degree);

for(i=0;i<=degree;i++){
printf("coefficent of x^%d = ",i);
    scanf("%f",&coef[i]);
}
printf( "entered equation is:");
for(i=degree;i>=0;i--){
printf(" %.3fx^%d",coef[i],i);
   
}
printf("\nEnter the range of real roots:");
scanf("%f %f",&a,&b);

do{
    x1=func(coef,degree,a);
     x2=func(coef,degree,b);
     prev=x;
x=(a-(x1*((b-a))/(x2-x1)));
printf("\na=%f\tb=%f\tx=%f\n",a,b,x);
x3=func(coef,degree,x);
if(x3>=0){
    b=x;
}
else{
    a=x;
}


}while((x-prev)>=.002);

printf("Answer is :%f",x);

    return 0;
}