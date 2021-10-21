#include <string>
#include <iostream>
using namespace std;
#include "student.h"

void student::setStanding(string standing) {
    this->standing = standing;
}


student::student():student("0","0",0,"0","0","0"){
    
}

student::student(string lastName, string firstName, int credits, string gpa, string dateOfBirth, string matriculationDate){
    this->setLastName(lastName);
    this->setFirstName(firstName);
    this->setCredits(credits);
    this->setGpa(gpa);
    this->setDateOfBirth(dateOfBirth);
    this->setMatriculationDate(matriculationDate);
}

string student::getLastName() {
    return this->lastName;
}

void student::setLastName(string lastName) {
    this->lastName = lastName;
}

string student::getFirstName() {
    return this->firstName;
}

void student::setFirstName(string firstName) {
    this->firstName = firstName;
}

string student::getStanding() {
    return this->standing;
}

int student::getCredits() {
    return this->credits;
}

void student::setCredits(int credits) {
    string stand = "";
    if(credits >=0){
        if(credits <15){
            stand = "Lower Freshman";
        }
        else if(credits <30){
            stand = "Upper Freshman";
        }
        else if(credits <45){
            stand = "Lower Sophomore";	
        }
        else if(credits <60){
            stand = "Upper Sophomore";
        }
        else if(credits <75){
            stand = "Lower Junior";
        }
        else if(credits <90){
            stand = "Upper Junior";
        }
        else if(credits <105){
            stand = "Lower Senior";
        }else{
            stand = "Upper Senior";
        }
                        
    }

    this->setStanding(stand);
    this->credits = credits;
}

string student::getGpa() {
    return this->gpa;
}

void student::setGpa(string gpa) {
    this->gpa = gpa;
}

string student::getDateOfBirth() {
    return this->dateOfBirth;
}

void student::setDateOfBirth(string dateOfBirth) {
    this->dateOfBirth = dateOfBirth;
}

string student::getMatriculationDate() {
    return this->matriculationDate;
}

void student::setMatriculationDate(string matriculationDate) {
    this->matriculationDate = matriculationDate;
}

string student::getString(){
    string str = "\n---------------------------------------------------------\n";
    str += "\t lastName- " + this->lastName + "\n";
    str += "\t firstName- " + this->firstName + "\n";
    str += "\t standing- " + this->standing + "\n";
    str += "\t credits- " + to_string(this->credits) + "\n";
    str += "\t gpa- " + this->gpa + "\n";
    str += "\t dateOfBirth- " + this->dateOfBirth + "\n";
    str += "\t matriculationDate- " + this->matriculationDate + "\n";
    return str;
}

void student::getInput(){
    string lastName, firstName, gpa, dateOfBirth, matriculationDate;
    int credits;
    cout << "\nEnter the details for student\n";
    cout << "Type last name and press enter \n";
    cin >> lastName;
    cout << "Type first name and press enter \n";
    cin >> firstName;
    cout << "Type credits and press enter \n";
    cin >> credits;
    cout << "Type gpa and press enter \n";
    cin >> gpa;
    cout << "Type date of birth and press enter \n";
    cin >> dateOfBirth;
    cout << "Type matriculation date and press enter \n";
    cin >> matriculationDate;
    cout << "\n\n";
    this->setLastName(lastName);
    this->setFirstName(firstName);
    this->setCredits(credits);
    this->setGpa(gpa);
    this->setDateOfBirth(dateOfBirth);
    this->setMatriculationDate(matriculationDate);
    
    cout<<"Details of student \n"<< this->getString();
    
}