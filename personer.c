#include "personer.h"

struct person_t *make_person(char *first_name, char *last_name) {
    // TODO: Allokér hukommelse på heap'en til min struct person_t
    // TODO: Lav en kopi af first_name og last_name og brug kopierne

    struct person_t *new;
    new->first_name = first_name;
    new->last_name = last_name;
    return new;
}
