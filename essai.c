#include <stdio.h>
#include <stdarg.h>

void essai(int nombre, ...)
{
  int i;
  va_list ap;

  va_start(ap,nombre);
  for (i=0;i<nombre;i++)
      printf("%d\n", va_arg(ap,int));
  va_end(ap);
}

int main()
{
  essai(4,5,6,7,9);
  return 0;
}
