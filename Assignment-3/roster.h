#ifndef ROSTER
#define ROSTER
#include "student.h"
#define MAX_CAPACITY 10
class roster{

private:
    string courseName; 
    string courseCode; 
    int numberOfCredits; 
    string instructorName;
    student studentList[MAX_CAPACITY];
    int size=0;

public:
    roster();
    roster(string, string, int, string);
    void setCourseName(string);
    string getCourseName();
    void setCourseCode(string);
    string getCourseCode ();
    void setNumberOfCredits(int);
    int getNumberOfCredits ();
    void setInstructorName(string);
    string getInstructorName();
    void addStudent(student);
    void deleteStudentbyIndex(int);
    void deleteStudentbyName(string, string);
    student getStudentByIndex(int);
    int searchStudentIndexByName(string, string);
    student searchStudentByName(string, string);
    void printAllStudent();
    void printString();
};
#endif