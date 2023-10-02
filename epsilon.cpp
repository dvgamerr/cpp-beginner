#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
  float epsilon = 1;
  float n = 1;
  while (1+epsilon != 1.0) {
    printf(" - %.12f\n", epsilon);
    epsilon /= 2;
  }
  printf("Epsilon = %.24f is ", epsilon);
  if (1+epsilon == 1.0) {
    printf("Yes\n");
  } else {
    printf("No\n");
  }
  return 0;
}
