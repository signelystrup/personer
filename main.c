#include <stdio.h>
#include <string.h>
#include "personer.h"

int main(void) {
    printf("%s har %d tegn\n", "Simon", strlen("Simon"));
    printf("En struct person_t er %d bytes\n", sizeof(struct person_t));

    struct person_t *simon = make_person("Simon", "Shine");

    printf("Navn: %s %s\n", simon->first_name, simon->last_name);

    // Spørgsmål: Kan man bruge sizeof() på arrays?
    // Svar: Kun hvis de er stak-allokerede, fordi så ved compileren hvor lang den er.
    char some_name[6] = "Simon";
    printf("some_name har %d bytes allokeret\n", sizeof(some_name));

    // Dvs. sizeof() virker ikke hvis det fx er en 'char *' (uanset om den er malloc()'et eller ej)

    return 0;
}
