#include <stdio.h>
#include <string.h>

int main()
{
  char to_encode[] = "DUfw";
  char lookup_table[] = "0123456789ABCDEF";
  // если вдруг 0 не встретится, чтобы не уйти слишком далеко
  for (size_t i = 0; i < sizeof(to_encode) - 1; i++)
  {
    char cur_char = to_encode[i];
    printf("%c", lookup_table[cur_char>>4]);
    printf("%c", lookup_table[cur_char&0x0f]);
  }
  printf("\n");
  return 0;
}
