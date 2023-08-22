#include <stdio.h>

int main()
{
  int i, j, s, n = 5;
  for (i = 0; i < n; i++)
  {
    for (s = 0; s < i; s++)
    {
      printf(" ");
    }
    for (j = 0; j < 2 * (n - i) - 1; j++)
    {
      if (j == 0 ||  i==0 || i == n - 1 || j==2*(n-i-1))
      {
        printf("*");
      }
      else{
        printf(" ");
      }
    }

    printf("\n");
  }
  return 0;
}
