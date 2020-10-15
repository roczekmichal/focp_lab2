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

int readInt()
{
    int number;

    cout << "Please introduce your number: " << endl;
    cin >> number;

    return number;
}



int main()
{
    int number = readInt();
    
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

