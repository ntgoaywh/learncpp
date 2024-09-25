#include<iostream>
using namespace std;
int celtofah(int n);
int main()
{
    int cel;
    cout<<"Please enter a Celsius value: ";
    cin >> cel;
    int fah = celtofah(cel);
    cout << cel <<" degrees Celsius is "<<fah<<" degrees Fahrenheit"<<endl;
    return 0;   
}

int celtofah(int n)
{
    return 1.8*n+32.0;
}