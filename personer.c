#include <stdlib.h>
#include "personer.h"
#include <string.h>

struct person_t *make_person(char *first_name, char *last_name) {
/*
    char* first_name_2 = malloc( strlen(first_name) + 1);
    char* last_name_2  = malloc( strlen(last_name) + 1);

    strcpy(first_name_2, first_name);
    strcpy(last_name_2 , last_name);

    struct person_t *new = malloc(sizeof(struct person_t) );;
    new->first_name = first_name_2;
    new->last_name = last_name_2;
*/

    //Heap allocation
    struct person_t *new = malloc(sizeof(struct person_t) );;
    new->first_name = malloc( strlen(first_name) + 1);
    new->last_name = malloc( strlen(last_name) + 1);

    //copy strings:
    strcpy(new->first_name, first_name);
    strcpy(new->last_name , last_name);

    return new;
}


void free_person (struct person_t *person) {
    //free names
    free(person->first_name);
    person->first_name = NULL; //sikker C :)). Avoid use-after-free bug.
    free(person->last_name);
    person->last_name = NULL;

    //free struct
    free(person);
    person = NULL;
}

