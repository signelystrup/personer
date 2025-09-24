#include <stdlib.h>
#include "personer.h"

#include <string.h>

struct person_t *make_person(char *first_name, char *last_name) {
    // TODO: Allokér hukommelse på heap'en til min struct person_t
    struct person_t *new = malloc(sizeof(struct person_t));

    // TODO: Lav en kopi af first_name og last_name og brug kopierne
    new->first_name = malloc(strlen(first_name) + 1);
    strcpy(new->first_name, first_name);

    new->last_name = malloc(strlen(last_name) + 1);
    strcpy(new->last_name, last_name);

    return new;
}

void free_person(struct person_t *person) {
    // TODO: Frigør first_name og sæt værdien til NULL
    // TODO: Frigør last_name og sæt værdien til NULL
    // TODO: Frigør selve struct'en og sæt værdien til NULL
}
