// PROGRAM FOR TRAPEZOIDAL RULE
#include <stdio.h>
#include<math.h>
 float eq(float val){
      return 1/(1+val);    
  }
int main() {
float sol,y[20],sum=0,even=0,i,h,ll,ul;
int n=0,j=0,k;
  printf("enter the upper limit and lower limit:");
  scanf("%f %f",&ul,&ll);
    printf("enter the value of h:");
    scanf("%f",&h);
    i=ll;
    printf("ll=%f\n",ll);
      printf("h=%f\n",h);

 while(i<=ul){
    printf("i=%f\n",i);
     y[j]=eq(i);
     printf("y(%f)=%f\n",i,y[j]);
     n++;
     j++;
     i=i+h;
 }
  
for(k=1;k<n-1;k++){
    sum=sum+y[k];
}


sol=(h*(y[0]+y[n-1]+2*sum))/2;
printf("sol=%f",sol);


    return 0;
}