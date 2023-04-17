#ifndef _DOG_H
#define _DOG_H

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

/**
 * struct dog - structure
 * @name: first
 * @age: second
 * @owner: third
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
