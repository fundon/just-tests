#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  int8_t a = -127;

  int s = a / 16;

  printf("a: %i\n", a);
  printf("s: %i\n", s);

  return 0;
}
