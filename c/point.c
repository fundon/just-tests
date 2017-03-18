#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  int a[10] = {0,1,2,3,};

  printf("a[1]:       %i\n", a[1]);
  printf("*(a + 2):   %i\n", *(a + 2));

  int *r = a;

  r += 1;
  printf("*r:         %i\n", *r);

  r += 2;
  printf("*r:         %i\n", *r);


  printf("\n");

  int8_t lt[] = { 3, 4, 5, 6, 7, 8, 9, 2, 1, 0 };
  int8_t *p = lt;
  unsigned char im[10] = "123456789";
  unsigned char *n = im + 1;
  unsigned char *i = n;

  printf("lt:         %s\n", lt);
  printf("im:         %s\n", im);
  printf("n:          %s\n", n);
  printf("i:          %s\n", i);

  printf("p:          %s\n", p);
  printf("*p:         %i\n", *p);

  printf("\n");

  printf("*n:         %i\n", *n);
  printf("*n:         %c\n", *n);
  printf("*i:         %i\n", *i);
  printf("*i:         %c\n", *i);

  n += 2;
  i = n;
  i +=-*p;

  printf("\n");

  printf("p:          %s\n", p);
  printf("*p:         %i\n", *p);

  printf("*n:         %i\n", *n);
  printf("*n:         %c\n", *n);

  printf("*i:         %i\n", *i);
  printf("*i:         %c\n", *i);

  return 0;
}
