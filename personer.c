#include "personer.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person_t *make_person(char *first_name, char *last_name) {
    // TODO: Allokér hukommelse på heap'en til min struct person_t
    // TODO: Lav en kopi af first_name og last_name og brug kopierne


    char* first_name_2 = malloc( strlen(first_name) + 1);
    char* last_name_2  = malloc( strlen(last_name) + 1);

    strcpy(first_name_2, first_name);
    strcpy(last_name_2 , last_name);

    struct person_t *new = malloc(sizeof(struct person_t) );;
    new->first_name = first_name_2;
    new->last_name = last_name_2;

    //free(first_name_2);
    //free(last_name_2);

    return new;
}
