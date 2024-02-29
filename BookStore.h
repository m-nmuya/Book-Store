#ifndef BOOKSTORE_H
#define BOOKSTORE_H

#include "Book.h"

struct BookStore {
    struct Book* library;
    int size;
};

void initBookStore(struct BookStore* bookStore);
void printBookStore(struct BookStore* bookStore);
void searchForTitle(struct BookStore* bookStore, const char* searchString);

#endif /* BOOKSTORE_H */