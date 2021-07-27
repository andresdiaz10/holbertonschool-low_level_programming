#include "holberton.h"
#include "stdio.h"
int main (void)
{
  int ret;
  ret = _printf("%s, %c\n", "Hola", 'e');
  printf("printf returns %d bytes\n", ret);
  return 0;
}

