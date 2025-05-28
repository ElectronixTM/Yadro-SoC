#include <stddef.h>
#include <stdio.h>
#include <stdint.h>

int main(int argc, char* argv[])
{   
  long x[3] = {12345, 54321, 112233};
  printf("Hi, print here some infos!\n");
  printf("Strange: %hd %d %hd\n", x[0], x[1], x[2]);
  printf("But in reality: %ld %ld %ld\n", x[0], x[1], x[2]);
  // hex dump
  int i; char *p = (char *)&x;
  printf("Start hex-dump, addr %lx :\n", (unsigned long) p);
  for (i = 0; i < sizeof(x); i++)
  {
    printf("%02hd ", p[i]);
  }
  puts("\nI think i figured it out. Data type was wrong");
  // some various checks
  long *lp = (long *)&x;
  if (lp[0] > lp[1])
  {
    puts("0 > 1");
  }
  else
  {
    puts("1 > 0");
  }

  if (lp[2] > lp[1])
  {
    puts("2 > 1");
  }
  else
  {
    puts("1 > 2");
  }
  return 0;
}
