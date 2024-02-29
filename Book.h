#ifndef BOOK_H
#define BOOK_H

struct Book {
    char title[100];
    char author[100];
    double price;
};

void initBook(struct Book* book, const char* newTitle, const char* newAuthor, double newPrice);
const char* getTitle(struct Book* book);
const char* getAuthor(struct Book* book);
double getPrice(struct Book* book);
const char* toString(struct Book* book);

#endif /* BOOK_H */
