#include <stdio.h>
int main() {
  // PRINTING USING INCREAMENT OPERATORS
  printf("\n \nPRINTING USING INCREAMENT OPERATORS \n \n");
  for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= 5; j++) {
      printf("*");
      // printf("%d", j);
    }
    printf("\n");
  }
  printf("\n");
  for (int a = 1; a <= 5; a++) {
    for (int b = 1; b <= a; b++) {
      printf("*");
      //  printf("%d", b);
    }
    printf("\n");
  }
  printf("\n");
  for (int n = 1; n <= 5; n++) {
    for (int o = n; o <= 5; o++) {
      printf("*");
    }
    printf("\n");
  }
  printf("\n");
  for (int t = 1; t <= 5; t++) {
    for (int u = t; u <= 5; u++) {
      printf(" ");
    }
    for (int v = 1; v <= t; v++) {
      printf("*");
    }
    printf("\n");
  }
  printf("\n");

  printf("\n");
  for (int w = 1; w <= 5; w++) {
    for (int x = 1; x <= w; x++) {
      printf(" ");
    }
    for (int y = w; y <= 5; y++) {
      printf("*");
    }
    printf("\n");
  }
  printf("\n");

  // PRINTING USING DECREAMENT OPERATORS
  printf("\n \n PRINTING USING DECREAMENT OPERATORS \n \n");
  printf("\n");
  for (int c = 5; c >= 1; c--) {
    for (int d = 5; d >= 1; d--) {
      printf("*");
      //  printf("%d", d);
    }
    printf("\n");
  }
  printf("\n");
  for (int e = 5; e >= 1; e--) {
    for (int f = 5; f >= e; f--) {
      printf("*");
      //  printf("%d", f);
    }
    printf("\n");
  }
  printf("\n");
  for (int p = 5; p >= 1; p--) {
    for (int q = p; q >= 1; q--) {
      printf("*");
    }
    printf("\n");
  }
  printf("\n");
  for (int z = 5; z >= 1; z--) {
    for (int ab = z; ab >= 1; ab--) {
      printf(" ");
    }
    for (int ac = 5; ac >= z; ac--) {
      printf("*");
    }
    printf("\n");
  }

  printf("\n");
  for (int ad = 5; ad >= 1; ad--) {
    for (int af = 5; af >= ad; af--) {
      printf(" ");
    }
    for (int ae = ad; ae >= 1; ae--) {
      printf("*");
    }
    printf("\n");
  }
  // PRINTING USING BOTH INCREAMENT AND DECREAMENT OPERATORS
  printf("\n \n PRINTING USING BOTH INCREAMENT AND DECREAMENT OPERATORS\n \n");
  for (int g = 1; g <= 5; g++) {
    for (int h = 5; h >= 1; h--) {
      printf("*");
      //  printf("%d", g);
    }
    printf("\n");
  }
  printf("\n");
  for (int l = 1; l <= 5; l++) {
    for (int m = l; m >= 1; m--) {
      printf("*");
      //  printf("%d", l);
    }
    printf("\n");
  }
  printf("\n");
  for (int r = 1; r <= 5; r++) {
    for (int s = 5; s >= r; s--) {
      printf("*");
    }
    printf("\n");
  }
  printf("\n");

  // PRINTING MORE COMPLEX PATTERNS
  int n = 10, ba, bc, bd, b3 = 80;
  for (ba = 1; ba <= n; ba++) {
    for (bc = 1; bc <= (b3 / 2) - ba; bc++) {
      printf(" ");
    }
    for (bd = 1; bd <= (2 * ba) - 1; bd++) {
      printf("*");
    }
    printf("\n");
  }
  printf("\n");
  printf("\n");
  // FINDING THE FACTORIAL OF A GIVEN NUMBER
  printf("FINDING THE FACTORIAL OF A GIVEN NUMBER\n \n");
  int ca = 12, fact = 1;
  for (int cb = 1; cb <= ca; cb++) {
    fact = fact * cb;
  }
  printf("The factorial of %d is %d", ca, fact);

  printf("\n");

  return 0;
}