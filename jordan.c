//Gauss jordan
#include<stdio.h>
int main()
{
float coff[4],coff2[4],coff3[4],a,b,c,d,e,f,k,g;
printf("Enter the cofficient of first equation:");
for(int i=0;i<4;i++){
scanf("%f",&coff[i]);}
printf("Enter the cofficient of second equation:");
for(int i=0;i<4;i++){
scanf("%f",&coff2[i]);}
printf("Enter the cofficient of third equation:");
for(int i=0;i<4;i++){
scanf("%f",&coff3[i]);}
a=(coff2[0]);
b=(coff3[0]);
for(int i=0;i<4;i++){
    coff[i]=(coff[i]/coff[0]);
    coff2[i]=((-1*coff[i]*a)+coff2[i]);
    coff3[i]=((-1*coff[i]*b)+coff3[i]);
}
c=(coff[1]);
d=(coff3[1]);
k=coff2[1];
for(int i=0;i<4;i++){
    coff2[i]=(coff2[i]/k);
    coff[i]=((-1*coff2[i]*c)+coff[i]);
    coff3[i]=((-1*coff2[i]*d)+coff3[i]);
}
e=(-coff[2]);
f=(-coff2[2]);
g=coff3[2];
for(int i=0;i<4;i++){
    coff3[i]=(coff3[i]/g);
    coff[i]=((coff3[i]*e)+coff[i]);
    coff2[i]=((coff3[i]*f)+coff2[i]);
}
  printf("%f\t%f\t%f\t%f\n",coff[0],coff[1],coff[2],coff[3]);
  printf("%f\t%f\t%f\t%f\n",coff2[0],coff2[1],coff2[2],coff2[3]);
  printf("%f\t%f\t%f\t%f\n",coff3[0],coff3[1],coff3[2],coff3[3]);
  printf("x=%f\ny=%f\nz=%f",coff[3],coff2[3],coff3[3]);
return 0;
}