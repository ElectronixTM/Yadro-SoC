#include <stddef.h>
#include <stdio.h>
#include <stdint.h>

int main(int argc, char* argv[])
{   
  long x[3] = {12345, 54321, 112233};
  printf("Hi, print here some infos!\n");
  // probably it should overflow... not sure
  printf("Strange: %hd %d %hd\n", x[0], x[1], x[2]);
  printf("But in reality: %ld %ld %ld\n", x[0], x[1], x[2]);
  // hex dump
  char *p = (char *)&x;
  printf("Start hex-dump, addr %lx :\n", (unsigned long) p);
  for (size_t i = 0; i < sizeof(x); i++)
  {
    printf("%02x ", p[i]);
  }
  puts("\b"); // delete extra whitespace
  puts(x[0] > x[1] ? "0 > 1" : "1 > 0");
  puts(x[1] > x[2] ? "1 > 2" : "2 > 1");
  return 0;
}
