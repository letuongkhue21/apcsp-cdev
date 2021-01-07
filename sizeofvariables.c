#include<stdio.h>

int main()
{
  int a = 545;
  printf("int a value: %d and size: %lu bytes\n", a, sizeof(a));

  char c = 'b';
  printf("char c value:%c and size: %lu bytes\n", c, sizeof(c));

  float d = 1.23;
  printf("float d value:%f and size: %lu bytes\n", d, sizeof(d));

  double e =123.24;
  printf("double e value:%f and size: %lu bytes\n",e, sizeof(e));

  unsigned int h = 45;
  printf("unsigned int h value:%d and size: %lu bytes\n",h, sizeof(h));

  short int m = 10;
  printf( "short int m value:%d and size: %lu bytes\n", m, sizeof(m));  
}
