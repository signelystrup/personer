#include <stdio.h>
#include <string.h>
#include "personer.h"

#include "personer.h"

int main(void) {

    //print person.
    struct person_t *person = make_person("Hanne", "Nielsen");
    printf("Navn: %s %s\n", person->first_name , person->last_name);

    return 0;
}
