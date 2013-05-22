#include "assert.h"

int main()
{
  Assert<int>::True("whats", 1==2);

  return 0;
}
