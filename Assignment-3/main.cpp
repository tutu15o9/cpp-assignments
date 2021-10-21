#include <string>
#include <iostream>
using namespace std;
#include "roster.h"
#include "student.h"
int main() {
    student st1("LS1", "FS1", 0, "08-11-1998", "3.5", "09-05-2018");
    student st2("LS2", "FS2", 0, "09-01-1999", "2.3", "11-05-2020");
    student st3("LS3", "FS3", 0, "10-02-2000", "3.7", "12-05-2021");
    student st4("LS4", "FS4", 0, "11-03-2001", "2.9", "02-06-2021");
    student st5("LS5", "FS5", 0, "10-02-2000", "4.1", "10-05-2022");
    student st6("LS6", "FS6", 0, "05-06-2001", "3.9", "11-07-2022");
    
    roster r1("Computer Science", "CS205", 15, "Mr. James Phil");
    roster r2("Electronics", "EC305", 18, "Mrs. Emma Smith");

    r1.addStudent(st1);
    r1.addStudent(st3);
    r1.addStudent(st4);

    r2.addStudent(st2);
    r2.addStudent(st5);
    r2.addStudent(st6);

    r1.printString();
    r2.printString();

    cout<< "\n\n\tSearch student by name";
    cout<<r1.searchStudentByName("LS1","FS1").getString();

    cout<< "\n\n\tDeleting student by name";
    r1.deleteStudentbyName("LS1","FS1");
    r1.printString();
    return 0;
}