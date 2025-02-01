#include <stdio.h>

int main() {
  int n = 6, count = 0;
  for (int i = 1; i <= n; i++) {
    if (n % i == 0) {
      count++;
    }
  }
  printf("\nThe prime factors of %d are %d\n", n, count);
  if (count == 2) {
    printf("\nPrime number\n");
  } else {
    printf("\nNot prime number\n");
  }

  // REVERSE NUMBERS IN C
  int c = 1234, r, sum = 0;

  while (c > 0) {
    r = c % 10;
    sum = (sum * 10) + r;
    c = c / 10;
  }
  printf("%d", sum);

  return 0;
}