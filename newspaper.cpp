#include "newspaper.h"

newspaper::newspaper(string name_, int year_, int form_, string color_):izdanie(name_, year_){
    if(!SetForm(form_))
    form = 0;
    color = color_;
}

newspaper::newspaper(){
    form = 0;
    color = "";
}

newspaper::newspaper(const newspaper &k){
    name = k.name;
    year = k.year;
    form = k.form;
    color = k.color;
}

bool newspaper::SetForm(int form1){
    if (form1 < 0)
    return false;
    else
    form = form1;
    return true;
}

int newspaper::GetForm() const{
    return form;
}

string newspaper::GetColor() const{
    return color;
}

void newspaper::print() const{
cout << "Nazvanie: " << name << endl;
cout << "year: " << year << endl;
cout << "form: " << form << endl;
cout << "color: " << color << endl;
}
