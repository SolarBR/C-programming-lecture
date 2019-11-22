#include <stdio.h>
#include <stdlib.h>
int main(void) // 九九乘法表
{
  int i,j;
  for (i = 1; i <= 9; i++) {
    for (j = 2; j <= 5; j++) printf("%2d * %2d = %2d  ", j, i, i * j);
    puts("");
  }
  puts("");
  for (i = 1; i <= 9; i++) {
    for (j = 6; j <= 9; j++) printf("%2d * %2d = %2d  ", j, i, i * j);
    puts("");
  }  
}
