#include "dog.h"
#include <stdio.h>

/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: prints elemenrs of struct dog
 */

/* RULES :
 * standard library allowed (printf)
 * If an element of d is NULL, print (nil) in its place
 * If d is NULL, print nothing
 * */
void print_dog(struct dog *d) {
  if (d == NULL)
    return;

  if (d->name == NULL)
    d->name = "(nill)";

  if (d->owner == NULL)
    d->owner = "(nill)";

  printf("Name: %s\nAge: %lf\nOwner: %s\n", d->name, d->age, d->owner);
}
