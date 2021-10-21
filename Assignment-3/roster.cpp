#include <string>
#include <iostream>
using namespace std;
#include "roster.h"
roster::roster():roster("","",0,"") {

}
roster::roster(string courseName, string courseCode, int numberOfCredits, string instructorName){
    this->setCourseName(courseName);
    this->setCourseCode(courseCode);
    this->setNumberOfCredits(numberOfCredits);
    this->setInstructorName(instructorName);
}
void roster::setCourseName(string courseName){
    this->courseName = courseName;
}
string roster::getCourseName(){
    return this->courseName;
}
void roster::setCourseCode(string courseCode ){
    this->courseCode = courseCode;  
} 
string roster::getCourseCode (){
    return this->courseCode; 
}
void roster::setNumberOfCredits(int numberOfCredits ){
    this->numberOfCredits = numberOfCredits;  
} 
int roster::getNumberOfCredits (){
    return this->numberOfCredits; 
}
void roster::setInstructorName(string instructorName){
    this->instructorName = instructorName;
}
string roster::getInstructorName(){
    return this->instructorName;
}
void roster::addStudent(student st){
    if(this->size == MAX_CAPACITY){
        cout << "Maximum capacity reached" << endl;
        cout << "Student not inserted" << endl;
        return;
    }
    st.setCredits(st.getCredits() + this->getNumberOfCredits());
    this->studentList[this->size] = st;
    this->size += 1;

}
void roster::deleteStudentbyIndex(int index){
    if( index < 1 || index > this->size ){
        cout << "Wrong index provided" << endl;
        return; 
    }
    int i = index - 1;
    while(i + 1 < this->size){
        this->studentList[i] = this->studentList[i+1];
        i++;
    }
    this->size--;
}
void roster::deleteStudentbyName(string lastName, string firstName){
    deleteStudentbyIndex(searchStudentIndexByName(lastName,firstName));
}
student roster::getStudentByIndex(int index){
    if( index < 1 || index > this->size ){
        cout << "Wrong index provided" << endl;
        return student(); 
    }
    return this->studentList[index-1];
}
int roster::searchStudentIndexByName(string lastName, string firstName){
    int sol = -1;
    for(int i = 0;i<this->size;i++){
        if(this->studentList[i].getFirstName() == firstName && this->studentList[i].getLastName() == lastName){
            
            return i+1;
        }
    }
    return sol;
}
student roster::searchStudentByName(string lastName, string firstName){
    return getStudentByIndex(searchStudentIndexByName(lastName,firstName));
}

void roster::printAllStudent(){
    for(int i = 0;i<this->size;i++){
        cout<<this->studentList[i].getString();
    }
}

void roster::printString(){
    string str = "\n<<<--------------------------------------------------->>>\n";
    str += "\t Course Name- " + this->courseName + "\n";
    str += "\t Course Code- " + this->courseCode + "\n";
    str += "\t Number Of Credits- " + to_string(this->getNumberOfCredits()) + "\n";
    str += "\t Instructor Name- " + this->instructorName + "\n";
    str += "\t Number Of Students- " + to_string(this->size) + "\n";

    cout << str;
    this->printAllStudent();
}