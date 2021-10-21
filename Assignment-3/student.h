#ifndef STUDENT
#define STUDENT
#include <string>
#include <iostream>
using namespace std;


class student
{

private:
    string lastName;
    string firstName;
    string standing;
    int credits;
    string gpa;
    string dateOfBirth;
    string matriculationDate;

	void setStanding(string standing);

public:
    student();
    student(string lastName, string firstName, int credits, string gpa, string dateOfBirth, string matriculationDate);

    string getLastName();

	void setLastName(string lastName);

	string getFirstName();

	void setFirstName(string firstName);

	string getStanding();

	int getCredits();

	void setCredits(int credits);

	string getGpa();

	void setGpa(string gpa);

	string getDateOfBirth();

	void setDateOfBirth(string dateOfBirth);

	string getMatriculationDate();

	void setMatriculationDate(string matriculationDate);

    string getString();

    void getInput();
};

#endif