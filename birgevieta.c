//Birge vieta
#include<stdio.h>
int main()
{
float degree,coff[5],a[5],b[5],x,c[5],d;
int j,i=1,iter=0;
printf("Enter the degree of equation:");
scanf("%f",&degree);
for(int i=0;i<=degree;i++){
    printf("Enter the cofficient of x^%d:",i);
    scanf("%f",&coff[i]);

}
printf("Enter intial value of x:");
scanf("%f",&x);
printf("Enter no. of iterations:");
scanf("%d",&iter);
while(i<=iter){
    printf("\n%d Iteration\n",i);
    j=0;
for(int i=degree;i>=0;i--){
    a[j]=coff[i];
     printf("a%d=%f\n",j,a[j]);
    j++;
    }
 int j=0;
    for(int i=degree;i>=0;i--){
   
    if(j==0){
        b[j]=a[j];
        j++;
    }
    else{
b[j]=(b[j-1]*x)+a[j];
j++;
    } printf("b%d=%f\n",j-1,b[j-1]);
    }
      j=0;
    for(int i=degree;i>0;i--){
    if(j==0){
        c[j]=a[j];
        j++;
    }
    else{
c[j]=(c[j-1]*x)+b[j];

j++;}
printf("c%d=%f\n",j-1,c[j-1]);}
x=x-(b[j]/c[j-1]);
printf("x=%f",x);
i++;
}

return 0;
}