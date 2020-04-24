#ifndef NEWSPAPER_H_INCLUDED
#define NEWSPAPER_H_INCLUDED

#include "izdanie.h"

class newspaper: public izdanie{
    int form;
    string color;
public:
    newspaper();
    newspaper(string name1, int year1, int form1, string color1);
    newspaper(const newspaper &k);

    bool SetForm(int form1);
    void SetColor(string color1);
    int GetForm() const;
    string GetColor() const;

    void print() const;
};


#endif // NEWSPAPER_H_INCLUDED
