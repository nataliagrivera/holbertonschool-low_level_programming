#ifndef STRUCT
#define STRUCT
/**
 *struct dog - structure for dog
 *@name: name of dog
 *@age: age of dog
 *@owner: owner of dog
 */
typedef struct dog
{
char *name;
float age;
char *owner;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
