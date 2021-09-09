// Include necessary headers
#include <bits/stdc++.h>
using namespace std;
// Function to check if prime or not
bool isPrime(int n)
{
    // Returning false for obvious cases
    if (n <= 1)
        return false;
 
    // Check from 2 to n-1
    for (int i = 2; i < n; i++){
        if (n % i == 0)
            return false;
    }
    
    // return true if no divisor found
    return true;
}

// Driver Code
int main()
{
    int n ;
    cin >> n;
    for (int i = 2; i <= n; i++) {
        if (isPrime(i))
            cout << i << ",";
    }
    cout << endl;
    return 0;
}