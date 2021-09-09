// Include necessary headers

#include <bits/stdc++.h>
using namespace std;
 
bool checkYear(int year)
{
    // If a year is multiple of 400,
    // then it is a leap year
    if (year % 400 == 0)
        return true;
 
    // Else If a year is multiple of 100,
    // then it is not a leap year
    if (year % 100 == 0)
        return false;
 
    // Else If a year is multiple of 4,
    // then it is a leap year
    if (year % 4 == 0)
        return true;
    return false;
}
 
// Driver code
int main()
{
    int yearStart,yearEnd;
    cout<<"Enter the Starting Year and press enter:-\n";
    cin >> yearStart;
    cout<<"Enter the Ending Year and press enter:-\n";
    cin >> yearEnd;
    
    for(int i = yearStart;i<=yearEnd;i++){
        checkYear(i) ? cout << i <<",":cout << "";
    }
    
    return 0;
}
 