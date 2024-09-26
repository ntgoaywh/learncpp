#include<iostream>
using namespace std;
void hmtotime(int n);
int hours,minutes;
int main()
{
    cout <<"Enter the number of hours: ";
    cin >> hours;
    cout <<"Enter the number of minutes: ";
    cin >> minutes;
    hmtotime(hours);
    return 0;
}

void hmtotime(int n)
{
    cout<<"Time: "<<hours<<":";
    cout <<minutes<<endl;
}