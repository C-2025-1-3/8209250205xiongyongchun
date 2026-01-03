//main.cpp
#include<iostream>
#include"student.h"
using namespace std;
int main() {
    Student stud;
    stud.set_value(007, "tcg", 'm');
    stud.display();

    Student stud1;
    stud1.set_value(1001, "Alice", 'f');
    cout << "\nstud1µÄÐÅÏ¢£º" << endl;
    stud1.display();
    return 0;

}
