#include <stdio.h>

void print16(unsigned int x){
  if(x <= 9) {
    printf("%d", x);
    } else {
      switch(x) {
        case 10: printf("A");break;
        case 11: printf("B");break;
        case 12: printf("C"); break;
        case 13: printf("D"); break;
        case 14: printf("E"); break;
        case 15: printf("F"); break;
    }
  }
}

int main() {
  unsigned int num1, num2, count, upper, lower[100];
  count = 0;
  printf("num? ");
  scanf("%d", &num1);
  num2 = num1;
  upper = num1;
  while (num2 >= 16)
  {
      num2 = num2/16;
      count++;
  } 
  for (int i = 0; i < count; i++)
  {
      upper = num1/16;
      lower[i] = num1%16;
      num1 = upper;
  }

  print16(upper);

  for (int j = count-1; j >= 0; j--)
  {
      print16(lower[j]);
  }
  printf("\n");
  return 0;
}