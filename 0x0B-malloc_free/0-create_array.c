#include "main.h"
		
#include <stdlib.h>

/**
 * create_char_array - creates an array of chars and initializes it
 * with a specific char
 * @length: the length of the array to be created
 * @initial_value: the initial value to be assigned to each element
 *
 * Return: a pointer to the newly created char array
 */
char *create_char_array(int length, char initial_value)
{
  char *array = malloc(sizeof(char) * length);
  int i;

  if (array == NULL)
    return NULL;

  for (i = 0; i < length; i++)
    array[i] = initial_value;

  return array;
}
