#include <stdio.h>

int main(void) {
  int a[2][3] = {{2,3, 8}, {4,7,9}};
  int b[3][2] = {{4,5}, {3,8}, {9, 6}};
  int sum_a = 1;
  int sum_b = 1;
  for(int i = 0; i < 2; i++) {
    for(int j = 0; j < 3; j++) {
      sum_a *= a[i][j];
    }
  }
  for(int i = 0; i < 3; i++) {
     for(int j = 0; j < 2; j++) {
       sum_b *= b[i][j];
     }
  }
  printf("배열 a의 곱은 %d입니다.\n", sum_a);
  printf("배열 b의 은 %d입니다.\n", sum_b);
  return 0;
}
