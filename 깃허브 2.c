 #include <stdio.h>

  int main(void) {
    char a;
    char b;
    while(1) {
      printf("���ڸ� �Է��Ͻÿ� : ");
      scanf("%c", &a);
      scanf("%*c");
      printf("���ڸ� �Է��Ͻÿ� : ");
      scanf("%c", &b);
      scanf("%*c");
      if(a == b) {
        printf("�����ϴ�\n");
      }
      else {
        printf("�ٸ��ϴ�\n");
      }
    }
  }
