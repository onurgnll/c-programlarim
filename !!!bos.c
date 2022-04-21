#include <stdio.h>

int main(void)
{
  char cd1, cd2;

  printf("Ýki karakter girip ENTER tuþuna basýnýz: ");

  cd1 = getchar();
  cd2 = getchar();

  printf("Girdiðiniz karakterler: %c %c", cd1, cd2);

  return 0;
}
