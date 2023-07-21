#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - A structure of a dog.
 * @name: A pointer to character.
 * @age: An integer.
 * @owner: A pointer to character.
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

#endif
