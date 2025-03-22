// Binary to Decimal.
#include<stdio.h>
#include<math.h>
int convert(long long num)
{ int i = 0, decimal= 0;
 while (num!=0)
 { int digit = num % 10;
 decimal += digit * pow(2,i);
 num /= 10;
 i++;}
 return decimal;
}
int main()
{ long long binary;
 printf("Enter binary number: ");
 scanf("%lld", &binary);
 printf("%lld", convert(binary));
}