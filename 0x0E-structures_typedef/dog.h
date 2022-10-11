#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a litttle detail of a dog
 * @name: Name of the dog in view
 * @age: The age of the dog
 * @owner: The name of the owner of the dog
 *
 * Description: This struct holds the placeholders
 * for the detail of a pet(dog).
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
