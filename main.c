#include <stdio.h>

#include "personer.h"

int main(void) {
    printf("Hello, World!\n");

    struct person_t *person = make_person("Hanne", "Nielsen");

    printf("%s", person->first_name );

    return 0;
}
