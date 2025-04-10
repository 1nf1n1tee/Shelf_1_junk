#include <stdio.h>

int sumRecursively(int n) {
   if (n == 0) {
      return 0;
   } else {
      return n + sumRecursively(n - 1);
   }
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Sum of first %d natural numbers is %d\n", n, sumRecursively(n));
    return 0;
}