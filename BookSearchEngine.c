#include "BookSearchEngine.h"
#include <string.h>

void searchBooks(struct BookStore* bs, const char* keyword) {
    printf("Our book collection is:\n");
    printBookStore(bs);

    printf("The search results for %s are:\n", keyword);
    searchForTitle(bs, keyword);
}