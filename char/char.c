/* Char in C
 * A Fundamental Type
 * Brandon Johnson
 * February 10, 2022
 */

#include <stdio.h>

int main(void) {
  char c = 'a';
  printf("c in ASCII is %d\n", c);
  printf("c in character is %c\n", c);
  printf("Three consecutive chars are : %c%c%c \n", c, c + 1, c + 2);
  printf("Three bell rings chars are : %c%c%c \n", '\a', '\a', '\a');
  return 0;
}
