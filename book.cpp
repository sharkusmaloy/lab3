#include "book.h"

book::book(string name1, int year1, int pagescount1, string author1):izdanie(name1, year1){
    if(!SetPagescount(pagescount1))
    pagescount = 0;
    author = author1;
}

book::book(){
    pagescount = 0;
    author = "";
}

book::book(const book &k){
    name = k.name;
    year = k.year;
    pagescount = k.pagescount;
    author = k.author;
}

bool book::SetPagescount(int pagescount1){
    if (pagescount1 < 0)
    return false;
    else
    pagescount = pagescount1;
    return true;
}

int book::GetPagescount() const{
    return pagescount;
}

string book::GetAuthor() const{
    return author;
}

void book::print() const{
cout << "Nazvanie: " << name << endl;
cout << "year: " << year << endl;
cout << "pagescount: " << pagescount << endl;
cout << "author: " << author << endl;
}
