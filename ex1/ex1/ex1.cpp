#include <iostream>

using namespace std;




bool isPrime(int n) 
{
    for (int i = 2; i < n/2; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
        
    }
    return true;
}



int main()
{
    int number;

    cout << "Please introduce your number: " << endl;
    cin >> number;
    
    if (isPrime(number))
    {
        cout << "Your number is prime" << endl;
    }
    else
    {
        cout << "Your number is not prime" << endl;
    }

    
    return 0;
}

