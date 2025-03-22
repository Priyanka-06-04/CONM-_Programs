#include <stdio.h>

int main() {
    float coff[4]={1,1,1,9},coff2[4]={2,1,-1,0},coff3[4]={2,5,7,52},sol1,sol2,sol3;
    int i;
    float a=-coff2[0],b=-coff3[0];
    for(i=0;i<4;i++){
        coff[i]=(coff[i]/coff[0]);
        coff2[i]=(a*coff[i])+coff2[i];
        coff3[i]=(b*coff[i])+coff3[i];
    }
    float c=(coff2[1]),d=coff[1],e=coff3[1];
     for(i=0;i<4;i++){
      coff2[i]=(coff2[i]/c);
      coff[i]=((-1*coff2[i]*d)+coff[i]);
      coff3[i]=((-1*coff2[i]*e)+coff3[i]);
      
        
    }
    //  for(i=0;i<4;i++){
    //      coff3[i]=coff3[i]/(-coff3[2]);
    //     coff[i]=(-coff[2])*coff3[i]+coff[i];
    //      coff2[i]=(-coff2[2])*coff3[i]+coff2[i];
        
     //}
    //  printf("Final matrix is:\n");
   printf("%f %f %f = %f\n",coff[0],coff[1],coff[2],coff[3]);
       printf("%f %f %f = %f\n",coff2[0],coff2[1],coff2[2],coff2[3]);
     printf("%f %f %f = %f\n",coff3[0],coff3[1],coff3[2],coff3[3]);
    //  sol1=coff[0]/coff[4];
    //  sol2=coff2[1]/coff2[4];
    //  sol3=coff3[2]/coff3[4];
     
    // printf("x=%f\n",sol1);
    // printf("y=%f\n",sol2);
    // printf("z=%f\n",sol3);
   

     }