#include<iostream>
using namespace std;
void print_diamond()
{
    for(int i=20;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
}
main()
{
    print_diamond();
}