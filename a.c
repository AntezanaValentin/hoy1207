#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int c;
  char buf[100];
  int i = 0;
  while ((c = getchar()) != '\n')
    buf[i++] = c;
  buf[i] = 0;
  int numero = atoi(buf);
  printf("%d\n", numero);
  return 0;
}
