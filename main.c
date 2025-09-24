#include <stdio.h>

#include "personer.h"

int main(void) {
    printf("Hello, World!\n");

    struct person_t *person = make_person("Hanne", "Nielsen");

    printf("Navn: %s %s\n", person->first_name , person->last_name);

    return 0;
}
