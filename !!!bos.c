#include <stdio.h>

int main(void)
{
  char cd1, cd2;

  printf("�ki karakter girip ENTER tu�una bas�n�z: ");

  cd1 = getchar();
  cd2 = getchar();

  printf("Girdi�iniz karakterler: %c %c", cd1, cd2);

  return 0;
}
