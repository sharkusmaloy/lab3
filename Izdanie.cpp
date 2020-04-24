#include "izdanie.h"

izdanie::izdanie(string name1, int year1){
    if (!SetYear(year1))
        year = 0;
        name = name1;
}

izdanie::izdanie(){
    name = "";
    year = 0;
}

bool izdanie::SetYear(int year1){
    if (year1 < 0)
    return false;
    else
    year = year1
    ;
    return true;
}

string izdanie::GetName() const{
    return name;
}

int izdanie::GetYear() const{
    return year;
}
