#include<iostream>
using namespace std;
void amplifyFour(int maxNum);
main(){
    int maxNum;
    cout << "Enter the number to amplify: ";
    cin >> maxNum;
    amplifyFour(maxNum);
}
void amplifyFour(int maxNum)
{
    for (int num=1;num<=maxNum;num++)
    {
        if(num % 4==0){
            cout << num*10<< " ";
        }
        else{
            cout << num<<" ";
        }
    }
}