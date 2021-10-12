#include <string>
#include <iostream>
using namespace std;

class Student
{

private:
    string lastName;
    string firstName;
    string standing;
    int credits;
    string gpa;
    string dateOfBirth;
    string matriculationDate;

	void setStanding(string standing) {
		this->standing = standing;
	}

public:
    Student():Student("0","0",0,"0","0","0"){
        
    }

    Student(string lastName, string firstName, int credits, string gpa, string dateOfBirth, string matriculationDate){
        this->setLastName(lastName);
        this->setFirstName(firstName);
        this->setCredits(credits);
        this->setGpa(gpa);
        this->setDateOfBirth(dateOfBirth);
        this->setMatriculationDate(matriculationDate);
    }

    string getLastName() {
		return this->lastName;
	}

	void setLastName(string lastName) {
		this->lastName = lastName;
	}

	string getFirstName() {
		return this->firstName;
	}

	void setFirstName(string firstName) {
		this->firstName = firstName;
	}

	string getStanding() {
		return this->standing;
	}

	int getCredits() {
		return this->credits;
	}

	void setCredits(int credits) {
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

	string getGpa() {
		return this->gpa;
	}

	void setGpa(string gpa) {
		this->gpa = gpa;
	}

	string getDateOfBirth() {
		return this->dateOfBirth;
	}

	void setDateOfBirth(string dateOfBirth) {
		this->dateOfBirth = dateOfBirth;
	}

	string getMatriculationDate() {
		return this->matriculationDate;
	}

	void setMatriculationDate(string matriculationDate) {
		this->matriculationDate = matriculationDate;
	}

    string getString(){
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

    void getInput(){
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

};


int main() {
    Student st1;
    cout<<"Details of st1 \n"<<st1.getString();

    st1.setFirstName("FS");
    st1.setLastName("LS");
    st1.setCredits(85);
    st1.setDateOfBirth("08-11-1998");
    st1.setGpa("3.5");
    st1.setMatriculationDate("09-05-2020");

    cout<<"\n\nDetails of st1 after changes \n"<<st1.getString();


    Student st2("FS2","LS2",45, "09-01-2000","3.5" ,"09-05-2020");

    cout<<"\n\nDetails of st2 \n"<<st2.getString();

    Student st3;

    st3.getInput();
    return 0;
}



