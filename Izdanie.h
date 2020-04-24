#ifndef IZDANIE_H_INCLUDED
#define IZDANIE_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

class izdanie{
protected:
    string name;
    int year;
public:
    izdanie();
    izdanie(string name1,int year1);
    izdanie(const izdanie &k);

    void SetName(string name1);
    string GetName() const;
    bool SetYear(int year1);
    int GetYear() const;

    virtual void print()const = 0;
};

#endif // IZDANIE_H_INCLUDED
