#include <stdlib.h>
#include <_ansi.h>
#include <stddef.h>

float
atoff (const char *s)
{
  return strtof (s, NULL);
}
