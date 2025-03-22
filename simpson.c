// PROGRAM FOR SIMPSON 1/3 RULE
#include <stdio.h>
#include<math.h>
float eq(float val){
      return 1/(1+pow(val,2));    
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
  if(k%2!=0){
      sum=sum+y[k];
  }
  else
    even=even+y[k];
}


sol=h*(y[0]+y[n-1]+(4*sum)+(2*even))/3;
printf("sol=%f",sol);


    return 0;
}