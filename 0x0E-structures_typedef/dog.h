#ifndef dog_h
#define dog_h

/**
 * A struct DOG
 * @name: dog's name
 * @owner: dog's owner
 * @age: dog's age
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
