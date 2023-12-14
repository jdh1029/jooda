#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int random = 0;
  for (int i = 0; i < 10; i++) {
      random = rand()%99 + 1;
      printf("%d\n", random);
    }
  return 0;
}
