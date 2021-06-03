#include<stdio.h>
#include<math.h>
int getMaxPrimeFactor(long long n) {
   long long i, max = -1;
   while(n % 2 == 0) {
      max = 2;
      n = n/2; //reduce n by dividing this by 2
   }
   for(i = 3; i <= sqrt(n); i=i+2){ //i will increase by 2, to get only the odd numbers 
      
      while(n % i == 0) {
         max = i;
         n = n/i;
      }
   }
   if(n > 2) {
      max = n;
   }
   return max;
}
main() {
   long long n;
   printf("Enter a number: ");
   scanf("%lld", &n);
   printf("Max prime factor: %lld", getMaxPrimeFactor(n));
}
