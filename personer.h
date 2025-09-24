#ifndef PERSONER_PERSONER_H
#define PERSONER_PERSONER_H

struct person_t {
    char *first_name; // 8 bytes
    char *last_name;  // 8 bytes
    // int year_born; // 8 bytes
};

struct person_t *make_person(char *, char *);
void free_person (struct person_t *);


#endif //PERSONER_PERSONER_H