// Include necessary headers
#include <bits/stdc++.h>
using namespace std;
 
// Returns true if n is perfect
bool isPerfect(int n)
{
    // To store sum of divisors
    int sum = 1;
  
    // Find all divisors and add them
    for (int i=2; i*i<=n; i++)
    {
        if (n%i==0)
        {
            if(i*i!=n)
                sum = sum + i + n/i;
            else
                sum=sum+i;
        }
    }
    // If sum of divisors is equal to n, then n is a perfect number
     if (sum == n && n != 1)
          return true;
  
     return false;
}
  
// Driver program
int main()
{
    int n;
    cin>>n;
    for (int i =2; i<n; i++){
        if (isPerfect(i))
            cout << i << ",";
    }
  
    return 0;
}