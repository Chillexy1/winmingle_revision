#include "dog.h"
#include <stdlib.h>
/*
 *Author: Chillexy Steven
 *Program: WinMingle Community C Training
 *Description: allocates and creates copies of name and owner from structdog
 */
dog_t *new_dog(char *name, float age, char *owner) {
  char *new_name;
  int i, k;
  char *new_owner;
  int len1 = 0;
  int len2 = 0;
  dog_t *dog;

  dog = malloc(sizeof(*dog));
  if (dog == NULL)
    return NULL;
  /* we get the length of name and alocate a new memory to it to copy name
   * string to it */
  while (name[len1])
    len1++; // get the length of name

  new_name =
      malloc((len1 + 1) * sizeof(*new_name)); // alocates memory for new_name
  if (new_name == NULL) {
    free(dog);
    return NULL;
  }

  for (i = 0; i < (len1 + 1); i++) {
    new_name[i] = name[i]; // copies name to the new allocated memory
  }
  /* also get the length of owner and allocate memory to new owner to copy the
   * string from owner to new owner */
  while (owner[len2])
    len2++; // get the length of owner

  new_owner = malloc((len2 + 1) * sizeof(*new_owner));
  if (new_owner == NULL) {

    free(new_name);
    free(dog);
    return NULL;
  }

  for (k = 0; k < (len2 + 1); k++) {
    /* copies owner strings to new_owner */
    new_owner[k] = owner[k];
  }
  /* initializes  */
  dog->name = new_name;
  dog->age = age;
  dog->owner = new_owner;

  return dog;
}
