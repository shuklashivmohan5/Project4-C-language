#include <stdio.h>
int main()
{
  int n = 5;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < i; j++)
    {
      printf("  ");
    }
    for (int k = i; k < n; k++)
    {
      if (k % 2 == 0)
      {
        printf("1 ");
      }
      else
      {
        printf("0 ");
      }
    }
    printf("\n");
  }
  return 0;
}
