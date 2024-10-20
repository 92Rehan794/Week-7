#include<iostream>
using namespace std;
bool isPrime(int num);
main() 
{
    cout << "Enter Number: ";
    int num;
    cin >> num;
    bool result=isPrime(num);
    cout << result;
}
bool isPrime(int num)
{
    {if(num<=1) return false;}
    for (int i=2; i<=(num/2) ; i++)
    {
        if (num % i== 0) return false;
    }
    return true;
}