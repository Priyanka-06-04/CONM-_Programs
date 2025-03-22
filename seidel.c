#include <stdio.h>
int main() {
    float coff[4],coff2[4],coff3[4],x=0,y=0,z=0,sol1;
    int i,n=0;
     printf("Enter the cofficients and solution of first equation:");
    for(i=0;i<4;i++){
        scanf("%f",&coff[i]);
    }
      printf("Enter the cofficients and solution  of second equation:");
    for(i=0;i<4;i++){
        scanf("%f",&coff2[i]);
    }
      printf("Enter the cofficients and solution  of third equation:");
    for(i=0;i<4;i++){ 
      scanf("%f",&coff3[i]);
    }
    for(i=0;sol1!=coff[3];i++){ 
      printf("%d iteration",i+1) ;  
       x=(coff[3]-coff[1]*y-coff[2]*z)/coff[0];
       y=(coff2[3]-coff2[0]*x-coff2[2]*z)/coff2[1];
       z=(coff3[3]-(coff3[0]*x)-(coff3[1]*y))/coff3[2];
       printf(" x= %.4f\n",x);
       printf(" y= %.4f\n",y);
       printf(" z= %.4f\n",z);
       sol1=coff[0]*x+coff[1]*y+coff[2]*z;
    }
    
    return 0;
}