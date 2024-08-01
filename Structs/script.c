#include <stdio.h>

typedef struct {
  char *name;
  int age;
} turtle;

void increase_age(turtle *t) {
  (*t).age = (*t).age + 1;

  printf("Hey turtle %s!! You've become %i years old now\n", (*t).name, (*t).age);

}


int main() {
  turtle turky = {"turky", 99 };

  increase_age(&turky);
  printf("%s has grown %i years old\n", turky.name, turky.age);
}