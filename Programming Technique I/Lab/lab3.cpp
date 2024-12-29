//Lab exercise 3 
// Lee Jia Yee A24CS0260
//Section 2 

#include <iostream>
using namespace std;

double getLength();
double getWidth();
double getArea(double, double);
void displayData (double, double, double);

int main() 
{
    double length, width, area;

    length=getLength();
    width=getWidth();
    area=getArea(length, width);
    displayData(length, width, area);
    return 0;
}

double getLength() 
{
    double len;
    cout << "Enter the length: ";
    cin >> len;
    return len;
}

double getWidth() 
{
    double wid;
    cout << "Enter the width: ";
    cin >> wid;
    return wid;
}

double getArea(double len, double wid) 
{
    return len*wid;
}

void displayData(double leng, double widt, double areas) 
{
    cout << "Length: " << leng << endl;
    cout << "Width: " << widt << endl;
    cout << "Area: " << areas << endl;
}


