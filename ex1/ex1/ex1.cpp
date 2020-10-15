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


int pow(int base, int power)
{
    int result = 1;

    for (int i = 0; i < power; i++)
    {
        result *= base;
    }

    return result;
}


int fibonacci_iterative(int index)
{
    int a = 0;
    int b = 1;

    if (index == 0 || index == 1)
    {
        return index;
    }


    for (int i = 2; i < index; i++)
    {
        int temp = a + b;
        a = b;
        b = temp; 
    }

    return b;
}











int main()
{


    //isPrime and readInt functions

    /*
    int number = readInt();
   
    
    if (isPrime(number))
    {
        cout << "Your number is prime" << endl;
    }
    else
    {
        cout << "Your number is not prime" << endl;
    }
    */


    //pow function

    /*
    int base = readInt();
    int power = readInt();

    int result = pow(base, power);

    cout << "The result is: " << result<< endl;
    */


    int index = readInt();

    int result1 = fibonacci_iterative(index);

    cout << "The result is: " << result1 << endl;


    return 0;
}

