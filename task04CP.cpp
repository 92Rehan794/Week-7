#include<iostream>
using namespace std;
int triangularNumber(int n){
    return (n*(n+1))/2;
}
main(){
    cout << "Enter number of triangle: ";
    int number;
    cin >> number;
if (number<1){
    cout << "Error";
}
cout << "Dots in the Triangle: " <<triangularNumber(number)<< endl;
return 0;
}