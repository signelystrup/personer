#ifndef PERSONER_PERSONER_H
#define PERSONER_PERSONER_H

struct person_t {
    char *first_name;
    char *last_name;
};

struct person_t *make_person(char *, char *);
void free_person (struct person_t *);

#endif //PERSONER_PERSONER_H