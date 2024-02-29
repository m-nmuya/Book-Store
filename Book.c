#include "Book.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void initBook(struct Book* book, const char* newTitle, const char* newAuthor, double newPrice) {
    strcpy(book->title, newTitle);
    strcpy(book->author, newAuthor);
    book->price = newPrice;
}

const char* getTitle(struct Book* book) {
    return book->title;
}

const char* getAuthor(struct Book* book) {
    return book->author;
}

double getPrice(struct Book* book) {
    return book->price;
}

const char* toString(struct Book* book) {
    static char buffer[256];
    snprintf(buffer, sizeof(buffer), "title: %s\tauthor: %s\tprice: %.2f", book->title, book->author, book->price);
    return buffer;
}