#include <stdio.h>
#include <string.h>

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

  unsigned char im[10] = "123456789";
  unsigned char *n = im + 1;
  unsigned char *p = n;

  printf("im:         %s\n", im);
  printf("n:          %s\n", n);
  printf("p:          %s\n", p);

  printf("\n");

  printf("*n:         %i\n", *n);
  printf("*n:         %c\n", *n);
  printf("*p:         %i\n", *p);
  printf("*p:         %c\n", *p);

  n += 2;
  p = n;

  printf("\n");

  printf("*n:         %i\n", *n);
  printf("*n:         %c\n", *n);

  printf("*p:         %i\n", *p);
  printf("*p:         %c\n", *p);

  return 0;
}
