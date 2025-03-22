#include<stdio.h>
#include<math.h>
float func(float* arr,int h,float x){
    float eq=0;
    for(int i=0;i<=h;i++){
        eq=eq+(arr[i]*pow(x,i));
    }
    return eq;
}
float deriv(float* arr,int h,float x){
    int d=0;
    for(int i=0;i<=h;i++){
        d=i*arr[i]*pow(x,i-1)+d;
    }
    return d;
}
int main() {
int degree,i;
float coef[10],c,a,x1,x2,x=0,x3,prev;
printf("enter the highest degree: ");
scanf("%d",&degree);

for(i=0;i<=degree;i++){
printf("coefficent of x^%d = ",i);
    scanf("%f",&coef[i]);
}
printf( "entered equation is:");
for(i=degree;i>=0;i--){
printf(" %.3fx^%d",coef[i],i);
   
}
printf("\nEnter the range of real root:");
scanf("%f",&a);
do{
    prev=x;
    x=a-(func(coef,degree,a))/deriv(coef,degree,a);
    printf("x =%f\n ",x);
    a=x;
    c=prev-x;
    if(c<0)
    c=-c;
}
while((c)>0.002);
printf("answer = %f",x);
return 0;
}