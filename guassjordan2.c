/* program: gauss-jordan method */
#include<stdio.h>
int main()
{
    float a[10][10],x[10], temp;
    int i,j,k,n;
    printf("\nenter the number of equations : ");
    scanf("%d",&n);
    printf("\nthe number of equations are : %d\n",n);
    printf("\nenter coefficients of equation \n");
    for(i=1;i<=n;i++)
        for(j=1;j<=n+1;j++)
        scanf("%f",&a[i][j]);
    printf("\ncoefficients of equation are :\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n+1;j++)        
        printf("%.3f",a[i][j]);
        printf("\n");
    }

    /* applyying gauss jordan elimination  */
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
        {
        if(i!=j)
           temp = a[j][i]/a[i][i];
        for(k=1;k<=n+1;k++)
            a[j][k]=a[j][k]-(temp*a[i][k]); 
        }
        printf("\nafter operations\n");
        for(i=1;i<=n;i++)
    {
        for(j=1;j<=n+1;j++)        
        printf("%.3f",a[i][j]);
        printf("\n");
    }
    /* obtained solution  */
    for(i=1;i<=n;i++)
       x[i]= a[i][n+1]/a[i][i];

    printf("\nsolution of the equation is :\n");
    for(i=1;i<=n;i++)
        printf("x[%d] = %.3f\n",i,x[i]);

    return 0;
}