#include <stdio.h>

int main()
{
  int i;
  double s = 0;
  scanf("%d", &i);
  if(i > 1000000)
  {
    s = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + 200000 * 0.03 + 400000 * 0.015 + (i - 1000000) * 0.01;
  }
  else if(i > 600000 && i <= 1000000)
  {
    s = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + 200000 * 0.03 + (i - 600000)* 0.015;
  }
  else if(i > 400000 && i <= 600000)
  {
    s = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + (i - 400000)* 0.03;
  }
  else if(i > 200000 && i <= 400000)
  {
    s = 100000 * 0.1 + 100000 * 0.075 + (i - 200000) * 0.05;
  }
  else if(i > 100000 && i <= 200000)
  {
    s = 100000 * 0.1 + (i - 100000) * 0.075;
  }
  else s = 0.1 * i;
  printf("%g", s);
  return 0;
}