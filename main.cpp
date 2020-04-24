#include <iostream>
#include "Izdanie.h"
#include "journal.h"
#include "book.h"
#include "newspaper.h"
#include <string>
using namespace std;

int main()
{
string name1, author1, color1;
int year1, number1, pagescount1, choice, form1;
    cout << "Input 1, to enter information about journal;" << endl;
    cout << "Input 2, to enter information about  book;" << endl;
    cout << "Input 3, to enter information about  newspaper;" << endl;
    cout << "Input 4, Exit ;" << endl;

    cout <<"Input: ";
    cin >> choice;
    cout << endl;
    if ((choice>=5)||(choice<=0)){
    cout << "Please, input number from 1 to 5!"<< endl<<endl;
    }
    cout << endl;

    switch (choice){
    case 1:{
    cout << "You have chosen journal." << endl;
    cout << "Input name  journal: ";
    cin >> name1;
    cout << "Input year journal: ";
    a:
    cin >> year1;
    if (year1 < 0){
    cout << "Nekkorektnoe chislo, vvedite polojitel'noe!"<< endl<<endl;
    goto a;}
    cout << "Input number journal: ";
    b:
    cin >> number1;
    if (number1 < 0){
    cout << "Nekkorektnoe chislo, vvedite polojitel'noe!"<< endl<<endl;
    goto b;}
    cout << endl;

    journal life(name1,year1,number1);
    life.print();
    cout << endl;

    cout << "Input 1, to enter information about journal;" << endl;
    cout << "Input 2, to enter information about  book;" << endl;
    cout << "Input 3, to enter information about  newspaper;" << endl;
    cout << "Input 4, Exit ;" << endl;

    cout <<"Input: ";
    cin >> choice;
    cout << endl;
}
    case 2:{
    cout << "You have chosen book." << endl;
    cout << "Input name book: ";
    cin >> name1;
    cout << "Input year book: ";
    c:
    cin >> year1;
    if (year1 < 0){
    cout << "Nekkorektnoe chislo, vvedite polojitel'noe!"<< endl<<endl;
    goto c;}
    cout << "Input pagescount book: ";
    d:
    cin >> pagescount1;
    if (pagescount1 < 0){
    cout << "Nekkorektnoe chislo, vvedite polojitel'noe!"<< endl<<endl;
    goto d;}
    cout << "Input author book: ";
    cin >> author1;
    cout << endl;

    book rey(name1, year1, pagescount1, author1);
    rey.print();
    cout << endl;

    cout << "Input 1, to enter information about journal;" << endl;
    cout << "Input 2, to enter information about  book;" << endl;
    cout << "Input 3, to enter information about  newspaper;" << endl;
    cout << "Input 4, Exit ;" << endl;

    cout <<"Input: ";
    cin >> choice;
    cout << endl;
}
    case 3:{
    cout << "You have chosen newspaper." << endl;
    cout << "Input name newspaper: ";
    cin >> name1;
    cout << "Input year newspaper: ";
    e:
    cin >> year1;
    if (year1 < 0){
    cout << "Nekkorektnoe chislo, vvedite polojitel'noe!"<< endl<<endl;
    goto e;}
    cout << "Input form newspaper: ";
    f:
    cin >> form1;
    if (form1 < 0){
    cout << "Nekkorektnoe chislo, vvedite polojitel'noe!"<< endl<<endl;
    goto f;}
    cout << "Input color newspaper: ";
    cin >> color1;
    cout << endl;

    newspaper sat(name1, year1, form1, color1);
    sat.print();
    cout << endl;

    cout << "Input 1, to enter information about journal;" << endl;
    cout << "Input 2, to enter information about  book;" << endl;
    cout << "Input 3, to enter information about  newspaper;" << endl;
    cout << "Input 4, Exit ;" << endl;

    cout <<"Input: ";
    cin >> choice;
    cout << endl;
}
    case 4:{
    cout << "Spokoynoy nochi!";
    return 0;
}
}
}
