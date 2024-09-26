#include<iostream>
using namespace std;
double light_years;
double lightoast(double light_years);
int main()
{
    cout <<"Enter the number of light years: ";
    cin >> light_years;
    double ast_units = lightoast(light_years);
    cout << light_years<<" light years = "<<ast_units<<" artronomical units."<<endl;
    return 0;
}

double lightoast(double light_years)
{
    return 63240*light_years;
}