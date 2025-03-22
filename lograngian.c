//lograngian interpolation
#include<stdio.h>
float formula(float x[],float y[],int data,float x1){
    float yx=0,mx=1,dx=1;
    int i,j;
  for(j=0;j<data;j++){
    int k=j;
    mx=1,dx=1;
      for(i=0;i<data;i++){
        if(i!=j){
        mx=mx*(x1-x[i]); 
        dx=dx*(x[k]-x[i]);        
      }
  }
  yx=yx+(y[k]*(mx/dx));  
  } 
  return yx;  
}
int main(){
    float x[10],y[10],x1;
    int data,i;
    printf("Enter the number of data:");
    scanf("%d",&data);
    printf("Enter the values for x & y:\n");
    for(i=0;i<data;i++){
        printf("x[%d]=",i);
        scanf("%f",&x[i]);
        printf("y[%d]=",i);
        scanf("%f",&y[i]);   
    }
    printf("Enter the value of x:");
    scanf("%f",&x1);
    printf("answer: %f",formula(x,y,data,x1));
}