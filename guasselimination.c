#include <stdio.h>

int main() {
    float coff[4],coff2[4],coff3[4],sol1,sol2,sol3;
    int i;
    printf("Enter the cofficients and solution of first equation:");
    for(i=0;i<4;i++){
        scanf("%f",&coff[i]);
    }
      printf("Enter the cofficients and solution  of second equation:");
    for(i=0;i<4;i++){
        scanf("%f",&coff2[i]);
    }
      printf("Enter the cofficients and solution  of third equation:");
    for(i=0;i<4;i++){ scanf("%f",&coff3[i]);
    }
    float r2=(coff2[0]/coff[0]),r3=(coff3[0]/coff[0]);
    for(i=0;i<4;i++){
        coff2[i]=(-1*r2*coff[i])+coff2[i];
        coff3[i]=(-1*r3*coff[i])+coff3[i];
    }
    float r4=(coff3[1]/coff2[1]);
    for(i=0;i<4;i++){
        
        coff3[i]=(-1*r4*coff2[i])+coff3[i];
    }
    printf("Final matrix is:\n");
     printf("%f %f %f = %f\n",coff[0],coff[1],coff[2],coff[3]);
      printf("%f %f %f = %f\n",coff2[0],coff2[1],coff2[2],coff2[3]);
    printf("%f %f %f = %f\n",coff3[0],coff3[1],coff3[2],coff3[3]);
  sol3=(coff3[3]/coff3[2]);
  sol2=(coff2[3]-coff2[2]*sol3)/coff2[1];
    sol1=(coff[3]-coff[2]*sol3-coff[1]*sol2)/coff[0];
   
    printf("x=%f\n",sol1);
    
   
   printf("y=%f\n",sol2);
 
   printf("z=%f\n",sol3);
   
    return 0;
}