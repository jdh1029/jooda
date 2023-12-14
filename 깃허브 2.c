 #include <stdio.h>

  int main(void) {
    char a;
    char b;
    while(1) {
      printf("문자를 입력하시오 : ");
      scanf("%c", &a);
      scanf("%*c");
      printf("문자를 입력하시오 : ");
      scanf("%c", &b);
      scanf("%*c");
      if(a == b) {
        printf("같습니다\n");
      }
      else {
        printf("다릅니다\n");
      }
    }
  }
