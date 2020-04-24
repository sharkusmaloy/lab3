#include "journal.h"

journal::journal(string name1, int year1, int number1):izdanie(name1, year1){
    if(!SetNumber(number1))
    number = 0;
}

journal::journal(){
    number = 0;
}

journal::journal(const journal &k){
    name = k.name;
    year = k.year;
    number = k.number;
}

bool journal::SetNumber(int number1){
    if (number1 < 0)
    return false;
    else
    number = number1;
    return true;
}

int journal::GetNumber() const{
    return number;
}

void journal::print() const{
cout << "Nazvanie: " << name << endl;
cout << "year: " << year << endl;
cout << "number: " << number << endl;
}
