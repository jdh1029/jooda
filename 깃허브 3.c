#include <stdio.h>

int main(void) {
  int a;
  printf("�ﰢ���� ���̸� ���Ͻÿ� : ");
  scanf("%d", &a);
  int k = a;
  for(int i = 0; i < a; i++) {
    for(int j = k; j > 0; j--) {
      printf(" ");
    }
    printf("*");
    for(int l = 0; l < i; l++) {
      printf("  ");
    }
    printf("*");
    printf("\n");
    k--;
  }
  for(int i = 0; i <= a; i++) {
    printf("**");
  }
  return 0;
}
