#include <stdio.h>
#include <math.h>

int main() {
int n, i;
   int uoc = 0;

   printf("Nhap so nguyen duong n: ");
 scanf("%d", &n);

   if (n < 2) {
 printf("%d khong phai so nguyen to\n", n);
   } 
else {
       for (i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
       uoc++;
             break;
         }
       }
       
  if (uoc == 0) {
      printf("%d la so nguyen to\n", n);
  } 
   else {
         printf("%d khong phai so nguyen to\n", n);
     }
   }

   return 0;
}
