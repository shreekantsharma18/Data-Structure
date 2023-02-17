#include <stdio.h>
int main()
{
  int array[100], s, c, n;
  printf("Shreekant Sharma\n2100320130162\n");
  printf("Enter number of elements in array\n");
  scanf("%d", &n);
  printf("Enter %d integer(s)\n", n);
  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);
  printf("Enter a number to search\n");
  scanf("%d", &s);
  for (c = 0; c < n; c++)
  {
    if (array[c] == s) 
    {
      printf("%d is present at location %d.\n", s, c+1);
      break;
    }
  }
  if (c == n)
    printf("%d is not present in the array.\n", s);
  return 0;
}

