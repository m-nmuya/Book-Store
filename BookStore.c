#include "BookStore.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void initBookStore(struct BookStore* bookStore) {
    bookStore->size = 10;
    bookStore->library = (struct Book*)malloc(bookStore->size * sizeof(struct Book));

    // Initialize books in the bookstore
    initBook(&bookStore->library[0], "The Giving Tree", "Silverstein", 12.99);
    initBook(&bookStore->library[1], "The Hunger Games", "Collins", 7.99);
    initBook(&bookStore->library[2], "Harry Potter and the Chamber of Secrets", "Rowling", 24.95);
    initBook(&bookStore->library[3], "The Bad Beginning", "Handler", 5.99);
    initBook(&bookStore->library[4], "The Reptile Room", "Handler", 6.99);
    initBook(&bookStore->library[5], "The Penultimate Peril", "Handler", 7.99);
    initBook(&bookStore->library[6], "Just Mercy", "Stevenson", 12.99);
    initBook(&bookStore->library[7], "I Know Why the Caged Bird Sings", "Angelou", 7.99);
    initBook(&bookStore->library[8], "The Handmaid's Tale", "Atwood", 12.99);
    initBook(&bookStore->library[9], "The Testaments", "Atwood", 11.99);
}

void printBookStore(struct BookStore* bookStore) {
    for (int i = 0; i < bookStore->size; i++) {
        printf("%s\n", toString(&bookStore->library[i]));
    }
}

void searchForTitle(struct BookStore* bookStore, const char* searchString) {
    for (int i = 0; i < bookStore->size; i++) {
        if (strstr(bookStore->library[i].title, searchString) != NULL) {
            printf("%s\n", toString(&bookStore->library[i]));
        }
    }
}