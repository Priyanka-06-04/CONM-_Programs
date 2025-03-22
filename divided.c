//Newton's divided difference interpolation...
#include<stdio.h>

int fact(int n){
    if(n==1)
      return 1;
    else
      return (n*fact(n-1));
}

void main()
{
	 float x[20],y[20],d[20][20], x0, sum, a,h,u,f,l;
	 int i,j,n,g;
	 
	 /* Input Section */
printf("Enter number of data: ");
	 scanf("%d", &n);
  	
  	l=n;
   printf("Enter data for x:\n");
	 for(i=0;i<n;i++)
	 {
      printf("x[%d] = ", i+1);
		  scanf("%f", &x[i]);
	  printf("y[%d] = ", i+1);
		  scanf("%f", &y[i]);
	 }
   printf("\nEnter interpolation point: ");
	 scanf("%f", &x0);
	
	 	a=x[0];
   	h=x[1]-x[0];
   	u=(x0-a)/h;
	
	printf("a=%f",a);
		printf("\nu=%f",u);
	printf("\nh=%f\n",h);
	
	 for(i=n-1;i>=1;i--)	{
	     d[i-1][0]=(y[i]-y[i-1])/(x[i]-x[i-1]);
	 }

  for(i=1;i<=n-2;i++)	{
      for(j=l-3;j>=0;j--){
          
  d[j][i]=(d[j+1][i-1]-d[j][i-1])/(x[j+(i+1)]-x[j]);
    
      }
      l--;
  }
  
  
  for(i=0;i<=n-2;i++){
    for(j=0;j<=n-2;j++){
        printf("%f\t",d[i][j]);
    }
    printf("\n");
}
   
	

   sum=y[0];
   u=x0-x[0];
   for(i=0;i<n-1;i++){
      sum+=(u*(d[0][i]));
      u*=(x0-x[i+1]);
      printf("\n%f",sum);
   }
  

	printf("\nInterpolated value at %.3f is %.3f.", x0, sum);
	 
}