#include <bits/stdc++.h>
 
using namespace std;
int reversDigits(int num)
{
    int rev_num = 0;
    while (num > 0) {
        rev_num = rev_num * 10 + num % 10;
        num = num / 10;
    }
    return rev_num;
}
 

int main()
{
    int num;
    do{
        cout << "Enter the number and press enter:-\n";
        cin >> num;
        if(num >= 0){
            cout << "Reverse of no. is " << reversDigits(num) << endl;
        }
    }while(num>=0);
    
    return 0;
}