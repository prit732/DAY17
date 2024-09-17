#include <stdio.h>

int main() {
   int size;
   printf("Enter of size: ");
   scanf("%d", &size);

   int a[size], b[size], c[size];

   printf("Enter of A:\n");
   for(int i = 0; i < size; i++) {
      printf("a[%d] = ", i);
      scanf("%d", &a[i]);
   }

   printf("Enter of b:\n");
   for(int i=0; i < size; i++) {
      printf("b[%d] = ", i);
      scanf("%d", &b[i]);
   }

   printf("Array of c: ");
   for(int i = 0; i < size; i++) {
      c[i] = a[i] + b[i]; //a and b to calculate c
      printf("%d, ", c[i]);
   }


}