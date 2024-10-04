#include <stdio.h>
#include <string.h>
struct Store {
    int price;
    union {
        // Book
        struct {
            char design[20];
            int ISBN;
            char genre[20];
        } book;
        // Shirt
        struct {
            char color[10];
            char size[10];
            char brand[20];
        } shirt;
    }item;
};
int main() {
    struct Store s;
    s.price = 250;
    strcpy(s.item.book.design, "Paper Back");
    s.item.book.ISBN = 1001;
    strcpy(s.item.book.genre, "Motivation");
    printf("Size of book: %llu bytes.", sizeof(s));
    return 0;
}
