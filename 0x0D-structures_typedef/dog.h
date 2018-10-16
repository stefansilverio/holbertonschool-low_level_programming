#ifndef HEADER_FILE
#define HEADER_FILE

/**
 * struct dog - dog details
 * @name: name of dog
 * @owner: dog owner
 * @age: dog age
 *
 * Description - this struct provides dog details
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void *new_dog(char *name, float age, char *owner);
void *new_dog(char *name, float age, char *owner);

#endif
