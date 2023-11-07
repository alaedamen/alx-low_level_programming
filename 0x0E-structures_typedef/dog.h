#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - a struct that create a dog info
 *
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * description: first struct with alx
 */
struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


typedef struct dog dog_t;


dog_t *new_dog(char *name, float age, char *owner);


void free_dog(dog_t *d);

#endif
