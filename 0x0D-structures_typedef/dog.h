#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - struct
 * @name: name of the dog
 * @age: how old the dog is
 * @owner: who owns the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

int _strlen(char *s);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strdup(char *str);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif /* DOG_H */
