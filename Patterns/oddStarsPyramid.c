#include <stdio.h>
int main() {
   int i, j, n, k = 0,t=1;
   printf("Enter the number of rows: ");
   scanf("%d", &n);
   for (i = 0; i < n; ++i, k = 0) {
      for (j = 0; j < n - 1 - i; ++j) {
         printf("   ");
      }
      while (k != 2 * i + 1) {
         printf("%d  ",t++);
         ++k;
      }
      printf("\n");
   }
   return 0;
}
