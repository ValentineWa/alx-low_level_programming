#include <stdio.h>
#define _DOG_H

/**
 * init_dog - initializez a variable
 * dog *d - type struct
 * *name - type char
 * Return: Always 0.
 */

 void init_dog(struct dog *d, char *name, float age, char *owner)
{
    if (d != NULL)
    {
        d->name = name;
        d->age = age;
        d->owner = owner;
    }
}