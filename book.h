#ifndef BOOK_H_INCLUDED
#define BOOK_H_INCLUDED

#include "izdanie.h"

class book: public izdanie{
    int pagescount;
    string author;
public:
    book();
    book(string name1, int year1, int pagescount1, string author1);
    book(const book &k);

    bool SetPagescount(int pagescount1);
    void SetAuthor(string author1);
    int GetPagescount() const;
    string GetAuthor() const;

    void print() const;
};

#endif // BOOK_H_INCLUDED
