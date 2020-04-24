#ifndef JOURNAL_H_INCLUDED
#define JOURNAL_H_INCLUDED

#include "izdanie.h"

class journal: public izdanie{
    int number;
public:
    journal();
    journal(string name1, int year1, int number1);
    journal(const journal &k);

    bool SetNumber(int number1);
    int GetNumber() const;

    void print() const;
};

#endif // JORNAL_H_INCLUDED
