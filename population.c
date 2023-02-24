#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
  int x, y;
  do
  {
      x = get_int("Start size: ");
  }
  while (x < 9);

    // TODO: Prompt for end size
  do
  {
      y = get_int("End size: ");
  }
  while (y <= x);

    // TODO: Calculate number of years until we reach threshold
  int age, birth, death;
  age = 0;

    while (x < y) {
        birth = x / 3;
        death = x / 4;
        x = x + birth - death;
        age++;
    }
    // TODO: Print number of years
    printf("Years: %i\n", age);

}